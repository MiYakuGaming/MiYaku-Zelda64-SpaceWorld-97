#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_brokensword.h"

static Vtx object_gi_brokenswordVtx_000000[3];
static Vtx object_gi_brokenswordVtx_000030[27];
static Vtx object_gi_brokenswordVtx_0001E0[32];
static Vtx object_gi_brokenswordVtx_0003E0[4];
static Vtx object_gi_brokenswordVtx_000420[30];
static Vtx object_gi_brokenswordVtx_000600[14];

static Vtx object_gi_brokenswordVtx_000000[3] = {
    VTX(-4, 4, 3, 477, 1788, 0, 254, 119, 255),
    VTX(-20, 25, 3, 87, 1208, 0, 254, 119, 255),
    VTX(-28, 25, 3, 36, 1333, 0, 254, 119, 255),
}; 

static Vtx object_gi_brokenswordVtx_000030[27] = {
    VTX(-31, 27, -3, 994, 1332, 0, 255, 137, 255),
    VTX(-23, 28, -3, 967, 1223, 0, 255, 137, 255),
    VTX(-4, 4, -3, 547, 1788, 0, 255, 137, 255),
    VTX(-32, 20, 0, 0, 1446, 178, 253, 91, 255),
    VTX(-28, 25, 3, 36, 1333, 196, 244, 103, 255),
    VTX(-31, 27, -3, -30, 1332, 194, 79, 65, 255),
    VTX(-20, 25, 3, 87, 1208, 160, 31, 65, 255),
    VTX(-20, 32, 0, 0, 1114, 160, 31, 65, 255),
    VTX(-23, 28, -3, -57, 1223, 197, 78, 69, 255),
    VTX(-31, 27, -3, -30, 1332, 0, 110, 46, 255),
    VTX(-28, 25, 3, 36, 1333, 7, 114, 35, 255),
    VTX(-20, 25, 3, 87, 1208, 0, 110, 46, 255),
    VTX(-23, 28, -3, -57, 1223, 249, 105, 57, 255),
    VTX(-4, 4, 3, 477, 1788, 2, 253, 119, 255),
    VTX(1, 12, 0, 512, 1608, 34, 31, 110, 255),
    VTX(-20, 25, 3, 87, 1208, 16, 65, 99, 255),
    VTX(-20, 32, 0, 0, 1114, 39, 41, 105, 255),
    VTX(1, 12, 0, 512, 1608, 34, 32, 146, 255),
    VTX(-23, 28, -3, -57, 1223, 23, 21, 141, 255),
    VTX(-20, 32, 0, 0, 1114, 40, 42, 151, 255),
    VTX(-4, 4, -3, 547, 1788, 2, 254, 137, 255),
    VTX(-23, 28, -3, 967, 1223, 23, 21, 141, 255),
    VTX(-12, -1, 0, 512, 1976, 225, 224, 111, 255),
    VTX(-12, -1, 0, 512, 1976, 223, 222, 146, 255),
    VTX(-31, 27, -3, 994, 1332, 234, 232, 141, 255),
    VTX(-32, 20, 0, 0, 1446, 213, 215, 152, 255),
    VTX(-31, 27, -3, -30, 1332, 234, 232, 141, 255),
}; 

static Vtx object_gi_brokenswordVtx_0001E0[32] = {
    VTX(-12, -1, 0, 0, 1384, 169, 82, 0, 255),
    VTX(-12, 0, -5, -88, 1402, 183, 95, 0, 255),
    VTX(-18, -11, -3, -25, 1519, 152, 59, 0, 255),
    VTX(-4, 4, 5, 256, 1443, 172, 84, 0, 255),
    VTX(-4, 4, 3, 256, 1372, 172, 84, 0, 255),
    VTX(-12, 0, 5, 88, 1402, 183, 95, 0, 255),
    VTX(-18, -11, 3, 25, 1519, 27, 176, 84, 255),
    VTX(-18, -11, -3, -25, 1519, 27, 176, 172, 255),
    VTX(-10, -11, 0, 0, 1633, 64, 161, 222, 255),
    VTX(0, 12, 5, 424, 1402, 161, 73, 0, 255),
    VTX(11, 18, -3, 537, 1519, 80, 229, 172, 255),
    VTX(11, 18, 3, 487, 1519, 80, 229, 84, 255),
    VTX(11, 10, 0, 512, 1633, 95, 192, 34, 255),
    VTX(0, 12, -5, 600, 1402, 161, 73, 0, 255),
    VTX(-4, 4, -5, 768, 1443, 172, 84, 0, 255),
    VTX(-4, 4, -3, 768, 1372, 172, 84, 0, 255),
    VTX(1, 12, 0, 512, 1384, 174, 87, 0, 255),
    VTX(11, 18, 3, 487, 1519, 197, 104, 0, 255),
    VTX(-4, 4, -3, -256, 1372, 172, 84, 0, 255),
    VTX(11, 18, -3, 537, 1519, 197, 104, 0, 255),
    VTX(-18, -11, 3, 25, 1519, 152, 59, 0, 255),
    VTX(-12, 0, -5, 936, 1402, 183, 95, 0, 255),
    VTX(-4, 4, -5, -256, 1443, 47, 209, 157, 255),
    VTX(-5, -5, 0, 0, 1680, 94, 182, 0, 255),
    VTX(-18, -11, -3, 999, 1519, 27, 176, 172, 255),
    VTX(-12, 0, -5, 936, 1402, 20, 223, 143, 255),
    VTX(-4, 4, -5, 768, 1443, 47, 209, 157, 255),
    VTX(-4, 4, 5, 256, 1443, 47, 209, 99, 255),
    VTX(-12, 0, 5, 88, 1402, 20, 223, 113, 255),
    VTX(5, 5, 0, 512, 1680, 74, 162, 0, 255),
    VTX(-10, -11, 0, 0, 1633, 41, 205, 100, 255),
    VTX(0, 12, 5, 424, 1402, 33, 236, 113, 255),
}; 

static Vtx object_gi_brokenswordVtx_0003E0[4] = {
    VTX(11, 10, 0, 512, 1633, 51, 215, 156, 255),
    VTX(-4, 4, -5, 768, 1443, 47, 209, 157, 255),
    VTX(11, 18, -3, 537, 1519, 80, 229, 172, 255),
    VTX(0, 12, -5, 600, 1402, 33, 236, 143, 255),
}; 

static Vtx object_gi_brokenswordVtx_000420[30] = {
    VTX(-4, 4, -5, -256, 1092, 22, 234, 141, 255),
    VTX(3, -3, -3, -256, 1083, 21, 235, 140, 255),
    VTX(0, -7, 0, 0, 1137, 240, 201, 151, 255),
    VTX(3, -3, 3, 256, 1083, 21, 235, 116, 255),
    VTX(-4, 4, 5, 256, 1092, 22, 234, 115, 255),
    VTX(0, -7, 0, 0, 1137, 240, 201, 105, 255),
    VTX(7, 0, 0, 512, 1137, 55, 16, 105, 255),
    VTX(3, -3, -3, 768, 1083, 21, 235, 140, 255),
    VTX(-4, 4, -5, 768, 1092, 22, 234, 141, 255),
    VTX(7, 0, 0, 512, 1137, 55, 16, 151, 255),
    VTX(5, 5, 0, 512, 1155, 55, 13, 105, 255),
    VTX(5, 5, 0, 512, 1155, 55, 13, 151, 255),
    VTX(-5, -5, 0, 0, 1155, 243, 201, 151, 255),
    VTX(-5, -5, 0, 0, 1155, 243, 201, 105, 255),
    VTX(29, -29, 0, 512, 2048, 100, 204, 217, 255),
    VTX(22, -29, 0, 0, 1960, 208, 168, 65, 255),
    VTX(26, -26, -4, -256, 1973, 250, 235, 139, 255),
    VTX(29, -29, 0, 512, 2048, 3, 163, 75, 255),
    VTX(26, -26, 4, 256, 1973, 21, 6, 117, 255),
    VTX(29, -22, 0, 512, 1960, 107, 32, 43, 255),
    VTX(26, -26, -4, 768, 1973, 250, 235, 139, 255),
    VTX(25, -20, 0, 512, 1966, 28, 72, 91, 255),
    VTX(23, -23, 3, 256, 1988, 208, 5, 109, 255),
    VTX(23, -23, -3, 768, 1988, 251, 48, 147, 255),
    VTX(25, -20, 0, 512, 1966, 32, 65, 161, 255),
    VTX(29, -22, 0, 512, 1960, 30, 71, 165, 255),
    VTX(20, -25, 0, 0, 1966, 184, 228, 165, 255),
    VTX(23, -23, -3, -256, 1988, 251, 48, 147, 255),
    VTX(20, -25, 0, 0, 1966, 191, 224, 95, 255),
    VTX(22, -29, 0, 0, 1960, 184, 220, 167, 255),
}; 

static Vtx object_gi_brokenswordVtx_000600[14] = {
    VTX(23, -23, 3, 1024, 1024, 1, 255, 119, 255),
    VTX(3, -3, 3, 1024, -7891, 0, 0, 119, 255),
    VTX(0, -7, 0, 768, -7891, 213, 211, 102, 255),
    VTX(3, -3, -3, 512, -7891, 0, 0, 137, 255),
    VTX(23, -23, -3, 512, 1024, 1, 255, 137, 255),
    VTX(0, -7, 0, 768, -7891, 213, 211, 154, 255),
    VTX(7, 0, 0, 256, -7891, 45, 43, 154, 255),
    VTX(3, -3, 3, 0, -7891, 0, 0, 119, 255),
    VTX(23, -23, 3, 0, 1024, 1, 255, 119, 255),
    VTX(7, 0, 0, 256, -7891, 45, 43, 102, 255),
    VTX(20, -25, 0, 768, 1024, 209, 204, 97, 255),
    VTX(25, -20, 0, 256, 1024, 52, 47, 97, 255),
    VTX(20, -25, 0, 768, 1024, 209, 204, 159, 255),
    VTX(25, -20, 0, 256, 1024, 52, 47, 159, 255),
}; 

Gfx gGiBrokenGoronSwordDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, 1, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsDPSetEnvColor(90, 100, 100, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(3000, 4000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_brokenswordVtx_000000[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_brokenswordVtx_000030[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 22, 4, 3, 0),
    gsSP2Triangles(22, 13, 4, 0, 20, 23, 24, 0),
    gsSP1Triangle(23, 25, 26, 0),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 20, 2, 0x00000000),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 80, 60, 190, 255),
    gsDPSetEnvColor(10, 10, 40, 255),
    gsSPTexture(6000, 6000, 0, 0, G_ON),
    gsSPVertex(&object_gi_brokenswordVtx_0001E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 4, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 9, 17, 0),
    gsSP2Triangles(16, 13, 15, 0, 18, 1, 0, 0),
    gsSP2Triangles(19, 13, 16, 0, 20, 5, 0, 0),
    gsSP2Triangles(2, 20, 0, 0, 16, 17, 19, 0),
    gsSP2Triangles(15, 14, 21, 0, 4, 9, 16, 0),
    gsSP2Triangles(8, 22, 23, 0, 22, 8, 7, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 6, 0),
    gsSP2Triangles(11, 27, 12, 0, 12, 29, 26, 0),
    gsSP2Triangles(27, 8, 23, 0, 30, 27, 6, 0),
    gsSP2Triangles(29, 12, 27, 0, 11, 31, 27, 0),
    gsSPVertex(&object_gi_brokenswordVtx_0003E0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 20, 2, 0x00100000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, 1, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(150, 120, 0, 255),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsSPVertex(&object_gi_brokenswordVtx_000420[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(6, 10, 4, 0, 11, 9, 8, 0),
    gsSP2Triangles(2, 12, 0, 0, 13, 5, 4, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 15, 0),
    gsSP2Triangles(14, 19, 18, 0, 14, 20, 19, 0),
    gsSP2Triangles(21, 22, 18, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 16, 0, 22, 28, 15, 0),
    gsSP2Triangles(18, 19, 21, 0, 25, 20, 23, 0),
    gsSP2Triangles(16, 29, 26, 0, 15, 18, 22, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 180, 200, 255, 255),
    gsDPSetEnvColor(0, 20, 50, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_brokenswordVtx_000600[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(2, 10, 0, 0, 11, 9, 8, 0),
    gsSP2Triangles(12, 5, 4, 0, 6, 13, 4, 0),
    gsSPEndDisplayList(),
}; 

