#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_redead_mask.h"

static Vtx object_gi_redead_maskVtx_000000[3];
static Vtx object_gi_redead_maskVtx_000030[32];
static Vtx object_gi_redead_maskVtx_000230[32];
static Vtx object_gi_redead_maskVtx_000430[29];
static Vtx object_gi_redead_maskVtx_000600[30];

static Vtx object_gi_redead_maskVtx_000000[3] = {
    VTX(3, -21, -1, 0, 1024, 207, 31, 105, 255),
    VTX(0, -32, -4, 0, 1024, 0, 148, 204, 255),
    VTX(18, -21, -8, 0, 1024, 76, 187, 196, 255),
}; 

static Vtx object_gi_redead_maskVtx_000030[32] = {
    VTX(0, -23, 0, 0, 1024, 0, 50, 108, 255),
    VTX(0, -32, -4, 0, 1024, 0, 148, 204, 255),
    VTX(3, -21, -1, 0, 1024, 207, 31, 105, 255),
    VTX(11, 14, 2, 0, 1024, 70, 214, 87, 255),
    VTX(0, 25, 5, 0, 1024, 0, 34, 115, 255),
    VTX(8, 12, 4, 0, 1024, 94, 233, 69, 255),
    VTX(17, 26, -6, 0, 1024, 84, 81, 26, 255),
    VTX(14, 12, 0, 0, 1024, 18, 204, 106, 255),
    VTX(24, 12, -11, 0, 1024, 109, 18, 45, 255),
    VTX(15, 7, -1, 0, 1024, 243, 253, 119, 255),
    VTX(24, -6, -11, 0, 1024, 95, 254, 184, 255),
    VTX(14, 2, 0, 0, 1024, 30, 32, 111, 255),
    VTX(18, -21, -8, 0, 1024, 76, 187, 196, 255),
    VTX(7, 7, 5, 0, 1024, 82, 5, 86, 255),
    VTX(0, -9, 9, 0, 1024, 0, 219, 114, 255),
    VTX(8, 2, 4, 0, 1024, 98, 9, 68, 255),
    VTX(11, 0, 2, 0, 1024, 51, 65, 86, 255),
    VTX(5, -17, 1, 0, 1024, 12, 216, 112, 255),
    VTX(3, -12, 5, 0, 1024, 225, 160, 64, 255),
    VTX(0, -10, 5, 0, 1024, 0, 141, 32, 255),
    VTX(-3, -21, -1, 0, 1024, 22, 30, 114, 255),
    VTX(-18, -21, -8, 0, 1024, 181, 185, 196, 255),
    VTX(-8, 12, 4, 0, 1024, 169, 222, 75, 255),
    VTX(-11, 14, 2, 0, 1024, 207, 210, 99, 255),
    VTX(-17, 26, -6, 0, 1024, 173, 82, 26, 255),
    VTX(-14, 12, 0, 0, 1024, 218, 228, 110, 255),
    VTX(-24, 12, -11, 0, 1024, 147, 18, 44, 255),
    VTX(-15, 7, -1, 0, 1024, 9, 253, 119, 255),
    VTX(-24, -6, -11, 0, 1024, 160, 255, 184, 255),
    VTX(-14, 2, 0, 0, 1024, 225, 30, 111, 255),
    VTX(-8, 2, 4, 0, 1024, 159, 8, 69, 255),
    VTX(-7, 7, 5, 0, 1024, 166, 255, 78, 255),
}; 

static Vtx object_gi_redead_maskVtx_000230[32] = {
    VTX(-11, 0, 2, 0, 1024, 204, 62, 88, 255),
    VTX(-14, 2, 0, 0, 1024, 225, 30, 111, 255),
    VTX(-18, -21, -8, 0, 1024, 181, 185, 196, 255),
    VTX(-5, -17, 1, 0, 1024, 19, 225, 114, 255),
    VTX(-3, -21, -1, 0, 1024, 22, 30, 114, 255),
    VTX(-8, 2, 4, 0, 1024, 159, 8, 69, 255),
    VTX(-3, -12, 5, 0, 1024, 31, 160, 64, 255),
    VTX(0, -10, 5, 0, 1024, 0, 141, 32, 255),
    VTX(0, -9, 9, 0, 1024, 0, 219, 114, 255),
    VTX(0, 25, 5, 0, 1024, 0, 34, 115, 255),
    VTX(17, 26, -6, 0, 1024, 84, 81, 26, 255),
    VTX(0, 32, -1, 0, 1024, 0, 1, 137, 255),
    VTX(-17, 26, -6, 0, 1024, 173, 82, 26, 255),
    VTX(8, 7, 1, 0, 1024, 85, 4, 172, 255),
    VTX(7, 7, 5, 0, 1024, 82, 5, 86, 255),
    VTX(8, 2, 4, 0, 1024, 98, 9, 68, 255),
    VTX(9, 11, 0, 0, 1024, 68, 169, 210, 255),
    VTX(8, 12, 4, 0, 1024, 94, 233, 69, 255),
    VTX(11, 0, 2, 0, 1024, 51, 65, 86, 255),
    VTX(9, 4, -2, 0, 1024, 31, 87, 180, 255),
    VTX(11, 2, -3, 0, 1024, 220, 75, 170, 255),
    VTX(13, 4, -4, 0, 1024, 156, 59, 227, 255),
    VTX(11, 12, -2, 0, 1024, 212, 158, 203, 255),
    VTX(11, 14, 2, 0, 1024, 70, 214, 87, 255),
    VTX(14, 12, 0, 0, 1024, 18, 204, 106, 255),
    VTX(15, 7, -1, 0, 1024, 243, 253, 119, 255),
    VTX(14, 2, 0, 0, 1024, 30, 32, 111, 255),
    VTX(13, 11, -3, 0, 1024, 152, 224, 206, 255),
    VTX(3, -21, -1, 0, 1024, 207, 31, 105, 255),
    VTX(3, -21, -3, 0, 1024, 186, 48, 173, 255),
    VTX(0, -23, -4, 0, 1024, 0, 114, 220, 255),
    VTX(0, -23, 0, 0, 1024, 0, 50, 108, 255),
}; 

static Vtx object_gi_redead_maskVtx_000430[29] = {
    VTX(-3, -21, -3, 0, 1024, 88, 49, 192, 255),
    VTX(-4, -16, -3, 0, 1024, 92, 247, 181, 255),
    VTX(-5, -17, 1, 0, 1024, 19, 225, 114, 255),
    VTX(3, -21, -1, 0, 1024, 207, 31, 105, 255),
    VTX(5, -17, 1, 0, 1024, 12, 216, 112, 255),
    VTX(4, -16, -3, 0, 1024, 154, 253, 194, 255),
    VTX(3, -12, 5, 0, 1024, 225, 160, 64, 255),
    VTX(0, -11, 0, 0, 1024, 1, 188, 158, 255),
    VTX(0, -10, 5, 0, 1024, 0, 141, 32, 255),
    VTX(-3, -12, 5, 0, 1024, 31, 160, 64, 255),
    VTX(0, -23, -4, 0, 1024, 0, 114, 220, 255),
    VTX(0, -23, 0, 0, 1024, 0, 50, 108, 255),
    VTX(-3, -21, -1, 0, 1024, 22, 30, 114, 255),
    VTX(3, -21, -3, 0, 1024, 186, 48, 173, 255),
    VTX(-13, 10, -3, 0, 1024, 102, 204, 223, 255),
    VTX(-15, 7, -1, 0, 1024, 9, 253, 119, 255),
    VTX(-13, 4, -4, 0, 1024, 100, 61, 232, 255),
    VTX(-14, 2, 0, 0, 1024, 225, 30, 111, 255),
    VTX(-14, 12, 0, 0, 1024, 218, 228, 110, 255),
    VTX(-11, 0, 2, 0, 1024, 204, 62, 88, 255),
    VTX(-11, 2, -3, 0, 1024, 35, 76, 171, 255),
    VTX(-9, 4, -2, 0, 1024, 223, 88, 182, 255),
    VTX(-8, 2, 4, 0, 1024, 159, 8, 69, 255),
    VTX(-7, 7, 5, 0, 1024, 166, 255, 78, 255),
    VTX(-8, 7, 1, 0, 1024, 191, 12, 157, 255),
    VTX(-8, 12, 4, 0, 1024, 169, 222, 75, 255),
    VTX(-9, 10, 0, 0, 1024, 169, 189, 209, 255),
    VTX(-11, 14, 2, 0, 1024, 207, 210, 99, 255),
    VTX(-11, 12, -2, 0, 1024, 13, 154, 196, 255),
}; 

static Vtx object_gi_redead_maskVtx_000600[30] = {
    VTX(17, 26, -6, 0, 1024, 84, 81, 26, 255),
    VTX(24, 12, -11, 0, 1024, 109, 18, 45, 255),
    VTX(13, 11, -3, 0, 1024, 152, 224, 206, 255),
    VTX(0, 32, -1, 0, 1024, 0, 1, 137, 255),
    VTX(11, 12, -2, 0, 1024, 212, 158, 203, 255),
    VTX(9, 11, 0, 0, 1024, 68, 169, 210, 255),
    VTX(8, 7, 1, 0, 1024, 85, 4, 172, 255),
    VTX(-8, 7, 1, 0, 1024, 191, 12, 157, 255),
    VTX(0, -11, 0, 0, 1024, 1, 188, 158, 255),
    VTX(-11, 12, -2, 0, 1024, 13, 154, 196, 255),
    VTX(-9, 10, 0, 0, 1024, 169, 189, 209, 255),
    VTX(-17, 26, -6, 0, 1024, 173, 82, 26, 255),
    VTX(-13, 10, -3, 0, 1024, 102, 204, 223, 255),
    VTX(-24, 12, -11, 0, 1024, 147, 18, 44, 255),
    VTX(-24, -6, -11, 0, 1024, 160, 255, 184, 255),
    VTX(-13, 4, -4, 0, 1024, 100, 61, 232, 255),
    VTX(-18, -21, -8, 0, 1024, 181, 185, 196, 255),
    VTX(-11, 2, -3, 0, 1024, 35, 76, 171, 255),
    VTX(-4, -16, -3, 0, 1024, 92, 247, 181, 255),
    VTX(-9, 4, -2, 0, 1024, 223, 88, 182, 255),
    VTX(9, 4, -2, 0, 1024, 31, 87, 180, 255),
    VTX(4, -16, -3, 0, 1024, 154, 253, 194, 255),
    VTX(11, 2, -3, 0, 1024, 220, 75, 170, 255),
    VTX(18, -21, -8, 0, 1024, 76, 187, 196, 255),
    VTX(13, 4, -4, 0, 1024, 156, 59, 227, 255),
    VTX(24, -6, -11, 0, 1024, 95, 254, 184, 255),
    VTX(3, -21, -3, 0, 1024, 186, 48, 173, 255),
    VTX(0, -32, -4, 0, 1024, 0, 148, 204, 255),
    VTX(0, -23, -4, 0, 1024, 0, 114, 220, 255),
    VTX(-3, -21, -3, 0, 1024, 88, 49, 192, 255),
}; 

Gfx gGiSpookyMaskDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 140, 90, 60, 255),
    gsDPSetEnvColor(70, 40, 30, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(1000, 1000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 14, 0, 5, 15),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 14, 0, 5, 15),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_redead_maskVtx_000000[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_redead_maskVtx_000030[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 6, 3, 0),
    gsSP2Triangles(7, 8, 6, 0, 9, 8, 7, 0),
    gsSP2Triangles(9, 10, 8, 0, 11, 10, 9, 0),
    gsSP2Triangles(12, 10, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(4, 13, 5, 0, 13, 4, 14, 0),
    gsSP2Triangles(12, 11, 16, 0, 2, 12, 17, 0),
    gsSP2Triangles(12, 16, 17, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 17, 15, 0, 14, 19, 18, 0),
    gsSP2Triangles(18, 15, 14, 0, 20, 1, 0, 0),
    gsSP2Triangles(21, 1, 20, 0, 22, 4, 23, 0),
    gsSP2Triangles(4, 24, 23, 0, 23, 24, 25, 0),
    gsSP2Triangles(24, 26, 25, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 28, 21, 0, 30, 14, 31, 0),
    gsSP2Triangles(22, 31, 4, 0, 14, 4, 31, 0),
    gsSPVertex(&object_gi_redead_maskVtx_000230[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 0, 3, 5, 0),
    gsSP2Triangles(5, 3, 6, 0, 6, 7, 8, 0),
    gsSP2Triangles(8, 5, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 15, 18, 19, 0),
    gsSP2Triangles(20, 18, 21, 0, 16, 22, 23, 0),
    gsSP2Triangles(24, 23, 22, 0, 25, 21, 26, 0),
    gsSP2Triangles(24, 27, 25, 0, 27, 21, 25, 0),
    gsSP2Triangles(15, 19, 13, 0, 17, 14, 13, 0),
    gsSP2Triangles(20, 19, 18, 0, 26, 21, 18, 0),
    gsSP2Triangles(23, 17, 16, 0, 22, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 4, 31, 30, 0),
    gsSPVertex(&object_gi_redead_maskVtx_000430[0], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 6, 8, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 9, 1, 0),
    gsSP2Triangles(9, 2, 1, 0, 9, 7, 8, 0),
    gsSP2Triangles(10, 11, 3, 0, 10, 0, 12, 0),
    gsSP2Triangles(2, 12, 0, 0, 5, 13, 3, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(14, 18, 15, 0, 19, 20, 16, 0),
    gsSP2Triangles(21, 20, 19, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 25, 26, 0, 25, 27, 28, 0),
    gsSP2Triangles(14, 28, 27, 0, 16, 17, 19, 0),
    gsSP2Triangles(19, 22, 21, 0, 24, 21, 22, 0),
    gsSP2Triangles(26, 24, 23, 0, 28, 26, 25, 0),
    gsSP1Triangle(27, 18, 14, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 80, 20, 10, 255),
    gsDPSetEnvColor(40, 20, 20, 255),
    gsSPVertex(&object_gi_redead_maskVtx_000600[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(4, 0, 2, 0, 5, 3, 4, 0),
    gsSP2Triangles(5, 6, 3, 0, 3, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 3, 10, 0),
    gsSP2Triangles(3, 7, 10, 0, 9, 11, 3, 0),
    gsSP2Triangles(12, 11, 9, 0, 12, 13, 11, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 14, 12, 0),
    gsSP2Triangles(16, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 18, 17, 0, 8, 18, 19, 0),
    gsSP2Triangles(8, 19, 7, 0, 6, 20, 8, 0),
    gsSP2Triangles(20, 21, 8, 0, 22, 21, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 24, 23, 0),
    gsSP2Triangles(24, 25, 23, 0, 2, 25, 24, 0),
    gsSP2Triangles(1, 25, 2, 0, 21, 23, 26, 0),
    gsSP2Triangles(23, 27, 26, 0, 26, 27, 28, 0),
    gsSP2Triangles(28, 27, 29, 0, 29, 27, 16, 0),
    gsSP2Triangles(29, 16, 18, 0, 16, 15, 17, 0),
    gsSPEndDisplayList(),
}; 

