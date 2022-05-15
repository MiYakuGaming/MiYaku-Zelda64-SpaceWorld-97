/*
 * File: z_obj_tsubo.c
 * Overlay: ovl_Obj_Tsubo
 * Description: Breakable pot
 */

#include "z_obj_tsubo.h"
#include "overlays/effects/ovl_Effect_Ss_Kakera/z_eff_ss_kakera.h"
#include "objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"

#define FLAGS 0x00800010

#define THIS ((ObjTsubo*)thisx)

void ObjTsubo_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjTsubo_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ObjTsubo_Update(Actor* thisx, GlobalContext* globalCtx);
void ObjTsubo_Draw(Actor* thisx, GlobalContext* globalCtx);

void ObjTsubo_SpawnCollectible(ObjTsubo* this, GlobalContext* globalCtx);
void ObjTsubo_ApplyGravity(ObjTsubo* this);
s32 ObjTsubo_SnapToFloor(ObjTsubo* this, GlobalContext* globalCtx);
void ObjTsubo_InitCollider(Actor* thisx, GlobalContext* globalCtx);
void ObjTsubo_AirBreak(ObjTsubo* this, GlobalContext* globalCtx);
void ObjTsubo_WaterBreak(ObjTsubo* this, GlobalContext* globalCtx);
void ObjTsubo_SetupWaitForObject(ObjTsubo* this);
void ObjTsubo_WaitForObject(ObjTsubo* this, GlobalContext* globalCtx);
void ObjTsubo_SetupIdle(ObjTsubo* this);
void ObjTsubo_Idle(ObjTsubo* this, GlobalContext* globalCtx);
void ObjTsubo_SetupLiftedUp(ObjTsubo* this);
void ObjTsubo_LiftedUp(ObjTsubo* this, GlobalContext* globalCtx);
void ObjTsubo_SetupThrown(ObjTsubo* this);
void ObjTsubo_Thrown(ObjTsubo* this, GlobalContext* globalCtx);

s16 D_80BA1B50 = 0;
s16 D_80BA1B54 = 0;
s16 D_80BA1B58 = 0;
s16 D_80BA1B5C = 0;

const ActorInit Obj_Tsubo_InitVars = {
    ACTOR_OBJ_TSUBO,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ObjTsubo),
    (ActorFunc)ObjTsubo_Init,
    (ActorFunc)ObjTsubo_Destroy,
    (ActorFunc)ObjTsubo_Update,
    NULL,
};

static s16 sObjectIds[] = { OBJECT_GAMEPLAY_DANGEON_KEEP, OBJECT_TSUBO };

static Gfx* D_80BA1B84[] = { gPotDL, 0x060017C0 };

static Gfx* D_80BA1B8C[] = { gPotFragmentDL, 0x06001960 };

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_HARD,
        AT_ON | AT_TYPE_PLAYER,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000002, 0x00, 0x01 },
        { 0x4FC1FFFE, 0x00, 0x00 },
        TOUCH_ON | TOUCH_SFX_NORMAL,
        BUMP_ON,
        OCELEM_ON,
    },
    { 9, 26, 0, { 0, 0, 0 } },
};

static CollisionCheckInfoInit sColChkInfoInit[] = { 0, 12, 60, MASS_IMMOVABLE };

static InitChainEntry sInitChain[] = {
    ICHAIN_F32_DIV1000(gravity, -1200, ICHAIN_CONTINUE), ICHAIN_F32_DIV1000(minVelocityY, -20000, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 150, ICHAIN_CONTINUE),   ICHAIN_F32(uncullZoneForward, 900, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 100, ICHAIN_CONTINUE),   ICHAIN_F32(uncullZoneDownward, 800, ICHAIN_STOP),
};

void ObjTsubo_SpawnCollectible(ObjTsubo* this, GlobalContext* globalCtx) {
    s16 dropParams = this->actor.params & 0x1F;

    if ((dropParams >= ITEM00_RUPEE_GREEN) && (dropParams <= ITEM00_BOMBS_SPECIAL)) {
        Item_DropCollectible(globalCtx, &this->actor.world.pos,
                             (dropParams | (((this->actor.params >> 9) & 0x3F) << 8)));
    }
}

void ObjTsubo_ApplyGravity(ObjTsubo* this) {
    this->actor.velocity.y += this->actor.gravity;
    if (this->actor.velocity.y < this->actor.minVelocityY) {
        this->actor.velocity.y = this->actor.minVelocityY;
    }
}

s32 ObjTsubo_SnapToFloor(ObjTsubo* this, GlobalContext* globalCtx) {
    CollisionPoly* floorPoly;
    Vec3f pos;
    s32 bgID;
    f32 floorY;

    pos.x = this->actor.world.pos.x;
    pos.y = this->actor.world.pos.y + 20.0f;
    pos.z = this->actor.world.pos.z;
    floorY = BgCheck_EntityRaycastFloor4(&globalCtx->colCtx, &floorPoly, &bgID, &this->actor, &pos);
    if (floorY > BGCHECK_Y_MIN) {
        this->actor.world.pos.y = floorY;
        Math_Vec3f_Copy(&this->actor.home.pos, &this->actor.world.pos);
        return true;
    } else {
        osSyncPrintf("地面に付着失敗\n");
        return false;
    }
}

void ObjTsubo_InitCollider(Actor* thisx, GlobalContext* globalCtx) {
    ObjTsubo* this = THIS;

    Collider_InitCylinder(globalCtx, &this->collider);
    Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &sCylinderInit);
    Collider_UpdateCylinder(&this->actor, &this->collider);
}

void ObjTsubo_Init(Actor* thisx, GlobalContext* globalCtx) {
    ObjTsubo* this = THIS;

    Actor_ProcessInitChain(&this->actor, sInitChain);
    ObjTsubo_InitCollider(&this->actor, globalCtx);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, sColChkInfoInit);
    if (!ObjTsubo_SnapToFloor(this, globalCtx)) {
        Actor_Kill(&this->actor);
        return;
    }
    this->objTsuboBankIndex = Object_GetIndex(&globalCtx->objectCtx, sObjectIds[(this->actor.params >> 8) & 1]);
    if (this->objTsuboBankIndex < 0) {
        osSyncPrintf("Error : バンク危険！ (arg_data 0x%04x)(%s %d)\n", this->actor.params, "../z_obj_tsubo.c", 410);
        Actor_Kill(&this->actor);
    } else {
        ObjTsubo_SetupWaitForObject(this);
        osSyncPrintf("(dungeon keep 壷)(arg_data 0x%04x)\n", this->actor.params);
    }
}

void ObjTsubo_Destroy(Actor* thisx, GlobalContext* globalCtx2) {
    GlobalContext* globalCtx = globalCtx2;
    ObjTsubo* this = THIS;

    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void ObjTsubo_AirBreak(ObjTsubo* this, GlobalContext* globalCtx) {
    s32 pad;
    f32 rand;
    s16 angle;
    Vec3f pos;
    Vec3f velocity;
    f32 sins;
    f32 coss;
    s32 arg5;
    s32 i;

    for (i = 0, angle = 0; i < 15; i++, angle += 0x4E20) {
        sins = Math_SinS(angle);
        coss = Math_CosS(angle);
        pos.x = sins * 8.0f;
        pos.y = (Rand_ZeroOne() * 5.0f) + 2.0f;
        pos.z = coss * 8.0f;
        velocity.x = pos.x * 0.23f;
        velocity.y = (Rand_ZeroOne() * 5.0f) + 2.0f;
        velocity.z = pos.z * 0.23f;
        Math_Vec3f_Sum(&pos, &this->actor.world.pos, &pos);
        rand = Rand_ZeroOne();
        if (rand < 0.2f) {
            arg5 = 96;
        } else if (rand < 0.6f) {
            arg5 = 64;
        } else {
            arg5 = 32;
        }
        EffectSsKakera_Spawn(globalCtx, &pos, &velocity, &this->actor.world.pos, -240, arg5, 10, 10, 0,
                             (Rand_ZeroOne() * 95.0f) + 15.0f, 0, 32, 60, KAKERA_COLOR_NONE,
                             sObjectIds[(this->actor.params >> 8) & 1], D_80BA1B8C[(this->actor.params >> 8) & 1]);
    }
    Actor_SpawnFlyingDust(globalCtx, &this->actor.world.pos, 30.0f, 4, 20, 50, 1);
}

void ObjTsubo_WaterBreak(ObjTsubo* this, GlobalContext* globalCtx) {
    s32 pad[2];
    s16 angle;
    Vec3f pos = this->actor.world.pos;
    Vec3f velocity;
    s32 phi_s0;
    s32 i;

    pos.y += this->actor.yDistToWater;
    EffectSsGSplash_Spawn(globalCtx, &pos, NULL, NULL, 0, 400);
    for (i = 0, angle = 0; i < 15; i++, angle += 0x4E20) {
        f32 sins = Math_SinS(angle);
        f32 coss = Math_CosS(angle);

        pos.x = sins * 8.0f;
        pos.y = (Rand_ZeroOne() * 5.0f) + 2.0f;
        pos.z = coss * 8.0f;
        velocity.x = pos.x * 0.2f;
        velocity.y = (Rand_ZeroOne() * 4.0f) + 2.0f;
        velocity.z = pos.z * 0.2f;
        Math_Vec3f_Sum(&pos, &this->actor.world.pos, &pos);
        phi_s0 = (Rand_ZeroOne() < .2f) ? 64 : 32;
        EffectSsKakera_Spawn(globalCtx, &pos, &velocity, &this->actor.world.pos, -180, phi_s0, 30, 30, 0,
                             (Rand_ZeroOne() * 95.0f) + 15.0f, 0, 32, 70, KAKERA_COLOR_NONE,
                             sObjectIds[(this->actor.params >> 8) & 1], D_80BA1B8C[(this->actor.params >> 8) & 1]);
    }
}

void ObjTsubo_SetupWaitForObject(ObjTsubo* this) {
    this->actionFunc = ObjTsubo_WaitForObject;
}

void ObjTsubo_WaitForObject(ObjTsubo* this, GlobalContext* globalCtx) {
    if (Object_IsLoaded(&globalCtx->objectCtx, this->objTsuboBankIndex)) {
        this->actor.draw = ObjTsubo_Draw;
        this->actor.objBankIndex = this->objTsuboBankIndex;
        ObjTsubo_SetupIdle(this);
        this->actor.flags &= ~0x10;
    }
}

void ObjTsubo_SetupIdle(ObjTsubo* this) {
    this->actionFunc = ObjTsubo_Idle;
}

void ObjTsubo_Idle(ObjTsubo* this, GlobalContext* globalCtx) {
    s32 pad;
    s16 temp_v0;
    s32 phi_v1;

    if (Actor_HasParent(&this->actor, globalCtx)) {
        ObjTsubo_SetupLiftedUp(this);
    } else if ((this->actor.bgCheckFlags & 0x20) && (this->actor.yDistToWater > 15.0f)) {
        ObjTsubo_WaterBreak(this, globalCtx);
        Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 20, NA_SE_EV_POT_BROKEN);
        ObjTsubo_SpawnCollectible(this, globalCtx);
        Actor_Kill(&this->actor);
    } else if ((this->collider.base.acFlags & AC_HIT) &&
               (this->collider.info.acHitInfo->toucher.dmgFlags & 0x4FC1FFFC)) {
        ObjTsubo_AirBreak(this, globalCtx);
        ObjTsubo_SpawnCollectible(this, globalCtx);
        Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 20, NA_SE_EV_POT_BROKEN);
        Actor_Kill(&this->actor);
    } else {
        if (this->actor.xzDistToPlayer < 600.0f) {
            Collider_UpdateCylinder(&this->actor, &this->collider);
            this->collider.base.acFlags &= ~AC_HIT;
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
            if (this->actor.xzDistToPlayer < 150.0f) {
                CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
            }
        }
        if (this->actor.xzDistToPlayer < 100.0f) {
            temp_v0 = this->actor.yawTowardsPlayer - PLAYER->actor.world.rot.y;
            phi_v1 = ABS(temp_v0);
            if (phi_v1 >= 0x5556) {
                func_8002F434(&this->actor, globalCtx, 0, 30.0f, 30.0f);
            }
        }
    }
}

void ObjTsubo_SetupLiftedUp(ObjTsubo* this) {
    this->actionFunc = ObjTsubo_LiftedUp;
    this->actor.room = -1;
    func_8002F7DC(&this->actor, NA_SE_PL_PULL_UP_POT);
    this->actor.flags |= 0x10;
}

void ObjTsubo_LiftedUp(ObjTsubo* this, GlobalContext* globalCtx) {
    if (Actor_HasNoParent(&this->actor, globalCtx)) {
        this->actor.room = globalCtx->roomCtx.curRoom.num;
        ObjTsubo_SetupThrown(this);
        ObjTsubo_ApplyGravity(this);
        Actor_Move(&this->actor);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 5.0f, 15.0f, 0.0f, 0x85);
    }
}

void ObjTsubo_SetupThrown(ObjTsubo* this) {
    this->actor.velocity.x = Math_SinS(this->actor.world.rot.y) * this->actor.speedXZ;
    this->actor.velocity.z = Math_CosS(this->actor.world.rot.y) * this->actor.speedXZ;
    this->actor.colChkInfo.mass = 240;
    D_80BA1B50 = (Rand_ZeroOne() - 0.7f) * 2800.0f;
    D_80BA1B58 = (Rand_ZeroOne() - 0.5f) * 2000.0f;
    D_80BA1B54 = 0;
    D_80BA1B5C = 0;
    this->actionFunc = ObjTsubo_Thrown;
}

void ObjTsubo_Thrown(ObjTsubo* this, GlobalContext* globalCtx) {
    s32 pad[2];

    if ((this->actor.bgCheckFlags & 0xB) || (this->collider.base.atFlags & AT_HIT)) {
        ObjTsubo_AirBreak(this, globalCtx);
        ObjTsubo_SpawnCollectible(this, globalCtx);
        Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 20, NA_SE_EV_POT_BROKEN);
        Actor_Kill(&this->actor);
    } else if (this->actor.bgCheckFlags & 0x40) {
        ObjTsubo_WaterBreak(this, globalCtx);
        ObjTsubo_SpawnCollectible(this, globalCtx);
        Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 20, NA_SE_EV_POT_BROKEN);
        Actor_Kill(&this->actor);
    } else {
        ObjTsubo_ApplyGravity(this);
        Actor_Move(&this->actor);
        Math_StepToS(&D_80BA1B54, D_80BA1B50, 0x64);
        Math_StepToS(&D_80BA1B5C, D_80BA1B58, 0x64);
        this->actor.shape.rot.x += D_80BA1B54;
        this->actor.shape.rot.y += D_80BA1B5C;
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 5.0f, 15.0f, 0.0f, 0x85);
        Collider_UpdateCylinder(&this->actor, &this->collider);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    }
}

void ObjTsubo_Update(Actor* thisx, GlobalContext* globalCtx) {
    ObjTsubo* this = THIS;

    this->actionFunc(this, globalCtx);
}

void ObjTsubo_Draw(Actor* thisx, GlobalContext* globalCtx) {
    Gfx_DrawDListOpa(globalCtx, D_80BA1B84[(thisx->params >> 8) & 1]);
}