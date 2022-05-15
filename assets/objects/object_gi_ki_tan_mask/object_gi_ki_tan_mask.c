#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_ki_tan_mask.h"

static Vtx object_gi_ki_tan_maskVtx_000100[3];
static Vtx object_gi_ki_tan_maskVtx_000130[93];
static Vtx object_gi_ki_tan_maskVtx_000700[24];
static Vtx object_gi_ki_tan_maskVtx_000880[28];
static Vtx object_gi_ki_tan_maskVtx_000A40[8];

u64 object_gi_ki_tan_maskTex_000000[] = {
#include "assets/objects/object_gi_ki_tan_mask//object_gi_ki_tan_maskTex_000000.ia16.inc.c"
};

static Vtx object_gi_ki_tan_maskVtx_000100[3] = {
    VTX(-20, -10, -11, -72, 1703, 147, 255, 49, 255),
    VTX(-15, -13, 3, 48, 1788, 167, 226, 74, 255),
    VTX(-12, -4, 1, 35, 1696, 176, 23, 86, 255),
}; 

static Vtx object_gi_ki_tan_maskVtx_000130[93] = {
    VTX(12, -4, 1, 477, 1693, 80, 23, 86, 255),
    VTX(0, -7, 8, 256, 1782, 255, 48, 109, 255),
    VTX(5, -14, 7, 347, 1876, 77, 9, 91, 255),
    VTX(20, -10, -11, 584, 1703, 110, 254, 47, 255),
    VTX(17, 3, -8, 573, 1527, 99, 12, 65, 255),
    VTX(12, 12, -2, 515, 1306, 74, 240, 92, 255),
    VTX(5, 14, 1, 437, 1176, 1, 57, 105, 255),
    VTX(0, -28, -9, -256, 1971, 255, 141, 34, 255),
    VTX(-8, -21, 0, 27, 1936, 174, 185, 51, 255),
    VTX(-7, -26, -16, -181, 1879, 199, 153, 23, 255),
    VTX(0, 22, -6, -261, 1099, 0, 88, 80, 255),
    VTX(-6, 20, -6, -108, 1155, 35, 90, 71, 255),
    VTX(-5, 14, 1, 79, 1171, 255, 57, 105, 255),
    VTX(15, -13, 3, 465, 1785, 90, 226, 73, 255),
    VTX(8, -21, 0, 486, 1933, 81, 184, 51, 255),
    VTX(-20, -10, -11, -72, 1703, 147, 255, 49, 255),
    VTX(-15, -19, -13, -109, 1808, 171, 178, 31, 255),
    VTX(-15, -13, 3, 48, 1788, 167, 226, 74, 255),
    VTX(2, -16, 13, 279, 1822, 106, 29, 46, 255),
    VTX(2, -18, 13, 281, 1846, 88, 187, 43, 255),
    VTX(15, 12, -7, 572, 1363, 101, 249, 63, 255),
    VTX(7, -26, -16, 693, 1879, 57, 153, 22, 255),
    VTX(15, -19, -13, 620, 1809, 86, 178, 29, 255),
    VTX(-5, -14, 7, 169, 1878, 178, 9, 90, 255),
    VTX(0, -28, -9, 768, 1971, 255, 141, 34, 255),
    VTX(0, -19, 13, 256, 1857, 255, 142, 36, 255),
    VTX(-21, 31, -2, 1017, 1227, 192, 229, 97, 255),
    VTX(-24, 29, -7, 987, 1271, 171, 214, 73, 255),
    VTX(-12, 12, -2, 1021, 1303, 182, 239, 92, 255),
    VTX(24, 29, -7, 549, 1271, 85, 215, 73, 255),
    VTX(-2, -18, 13, 232, 1846, 167, 187, 42, 255),
    VTX(5, 14, 1, 437, 1176, 1, 57, 105, 255),
    VTX(19, 33, -2, 514, 1211, 247, 25, 117, 255),
    VTX(19, 34, -4, 530, 1205, 178, 76, 207, 255),
    VTX(-7, -26, -16, 843, 1879, 199, 153, 23, 255),
    VTX(0, -29, -18, 768, 1890, 0, 137, 12, 255),
    VTX(0, -28, -9, 768, 1971, 255, 141, 34, 255),
    VTX(7, -26, -16, 693, 1879, 57, 153, 22, 255),
    VTX(8, -21, 0, 486, 1933, 81, 184, 51, 255),
    VTX(15, -19, -13, 620, 1809, 86, 178, 29, 255),
    VTX(15, -13, 3, 465, 1785, 90, 226, 73, 255),
    VTX(-15, -19, -13, -109, 1808, 171, 178, 31, 255),
    VTX(-7, -26, -16, -181, 1879, 199, 153, 23, 255),
    VTX(-8, -21, 0, 27, 1936, 174, 185, 51, 255),
    VTX(-12, -4, 1, 35, 1696, 176, 23, 86, 255),
    VTX(-15, -13, 3, 48, 1788, 167, 226, 74, 255),
    VTX(-5, -14, 7, 169, 1878, 178, 9, 90, 255),
    VTX(5, -14, 7, 347, 1876, 77, 9, 91, 255),
    VTX(12, -4, 1, 477, 1693, 80, 23, 86, 255),
    VTX(-17, 3, -8, -62, 1526, 157, 13, 66, 255),
    VTX(-20, -10, -11, -72, 1703, 147, 255, 49, 255),
    VTX(20, -10, -11, 584, 1703, 110, 254, 47, 255),
    VTX(15, 12, -7, 572, 1363, 101, 249, 63, 255),
    VTX(12, 12, -2, 515, 1306, 74, 240, 92, 255),
    VTX(0, -7, 8, 256, 1782, 255, 48, 109, 255),
    VTX(21, 31, -2, 519, 1227, 64, 229, 97, 255),
    VTX(24, 29, -7, 549, 1271, 85, 215, 73, 255),
    VTX(6, 20, -6, 617, 1158, 221, 90, 70, 255),
    VTX(0, 22, -6, 763, 1099, 0, 88, 80, 255),
    VTX(0, 22, -6, -261, 1099, 0, 88, 80, 255),
    VTX(-5, 14, 1, 79, 1171, 255, 57, 105, 255),
    VTX(-19, 33, -2, 1022, 1211, 9, 25, 117, 255),
    VTX(-21, 31, -2, 1017, 1227, 192, 229, 97, 255),
    VTX(-12, 12, -2, 1021, 1303, 182, 239, 92, 255),
    VTX(-24, 29, -7, 987, 1271, 171, 214, 73, 255),
    VTX(-15, 12, -7, 963, 1360, 155, 248, 63, 255),
    VTX(-19, 34, -4, -18, 1205, 87, 80, 238, 255),
    VTX(-19, 33, -2, -2, 1211, 9, 25, 117, 255),
    VTX(-5, 14, 1, 79, 1171, 255, 57, 105, 255),
    VTX(-15, 12, -7, -61, 1360, 155, 248, 63, 255),
    VTX(-17, 3, -8, -62, 1526, 157, 13, 66, 255),
    VTX(-12, -4, 1, 35, 1696, 176, 23, 86, 255),
    VTX(-12, 12, -2, -3, 1303, 182, 239, 92, 255),
    VTX(0, -7, 8, 256, 1782, 255, 48, 109, 255),
    VTX(-5, -14, 7, 169, 1878, 178, 9, 90, 255),
    VTX(20, -10, -11, 584, 1703, 110, 254, 47, 255),
    VTX(15, -13, 3, 465, 1785, 90, 226, 73, 255),
    VTX(15, -19, -13, 620, 1809, 86, 178, 29, 255),
    VTX(-8, -21, 0, 27, 1936, 174, 185, 51, 255),
    VTX(-15, -13, 3, 48, 1788, 167, 226, 74, 255),
    VTX(-15, -19, -13, -109, 1808, 171, 178, 31, 255),
    VTX(19, 33, -2, 514, 1211, 247, 25, 117, 255),
    VTX(5, 14, 1, 437, 1176, 1, 57, 105, 255),
    VTX(12, 12, -2, 515, 1306, 74, 240, 92, 255),
    VTX(-6, 20, -6, -108, 1155, 35, 90, 71, 255),
    VTX(0, -13, 15, 256, 1786, 0, 96, 71, 255),
    VTX(2, -16, 13, 279, 1822, 106, 29, 46, 255),
    VTX(-2, -16, 13, 233, 1823, 149, 29, 44, 255),
    VTX(0, -28, -9, -256, 1971, 255, 141, 34, 255),
    VTX(0, -19, 13, 256, 1857, 255, 142, 36, 255),
    VTX(-2, -18, 13, 232, 1846, 167, 187, 42, 255),
    VTX(19, 34, -4, 530, 1205, 178, 76, 207, 255),
    VTX(6, 20, -6, 617, 1158, 221, 90, 70, 255),
}; 

static Vtx object_gi_ki_tan_maskVtx_000700[24] = {
    VTX(0, -18, 17, 254, 1794, 255, 158, 69, 255),
    VTX(1, -16, 18, 324, 1505, 84, 18, 83, 255),
    VTX(-1, -16, 18, 185, 1505, 171, 18, 82, 255),
    VTX(0, -13, 15, -243, 1061, 0, 96, 71, 255),
    VTX(0, -13, 15, 781, 1061, 0, 96, 71, 255),
    VTX(2, -16, 13, 635, 1460, 106, 29, 46, 255),
    VTX(-2, -16, 13, -123, 1462, 149, 29, 44, 255),
    VTX(0, -19, 13, -254, 1819, 255, 142, 36, 255),
    VTX(2, -18, 13, 649, 1691, 88, 187, 43, 255),
    VTX(-2, -18, 13, -136, 1688, 167, 187, 42, 255),
    VTX(21, 31, -2, 496, 1578, 64, 229, 97, 255),
    VTX(24, 29, -7, 530, 1602, 85, 215, 73, 255),
    VTX(24, 39, -3, 500, 1470, 21, 9, 117, 255),
    VTX(19, 33, -2, 489, 1556, 247, 25, 117, 255),
    VTX(19, 34, -4, 506, 1539, 178, 76, 207, 255),
    VTX(24, 39, -3, 500, 1470, 229, 47, 150, 255),
    VTX(24, 29, -7, 530, 1602, 218, 33, 148, 255),
    VTX(-24, 39, -3, 12, 1470, 235, 9, 117, 255),
    VTX(-24, 29, -7, -18, 1602, 171, 214, 73, 255),
    VTX(-21, 31, -2, 16, 1578, 192, 229, 97, 255),
    VTX(-19, 33, -2, 23, 1556, 9, 25, 117, 255),
    VTX(-19, 34, -4, 6, 1539, 87, 80, 238, 255),
    VTX(-24, 29, -7, -18, 1602, 39, 34, 148, 255),
    VTX(-24, 39, -3, 12, 1470, 27, 47, 150, 255),
}; 

static Vtx object_gi_ki_tan_maskVtx_000880[28] = {
    VTX(19, 34, -4, 530, 1205, 178, 76, 207, 255),
    VTX(10, 16, -4, 560, 1236, 232, 253, 139, 255),
    VTX(6, 20, -6, 617, 1158, 9, 223, 142, 255),
    VTX(24, 29, -7, 549, 1271, 218, 33, 148, 255),
    VTX(15, 12, -7, 572, 1363, 199, 2, 151, 255),
    VTX(-6, 20, -6, 916, 1155, 248, 223, 141, 255),
    VTX(-10, 16, -4, 976, 1236, 25, 253, 139, 255),
    VTX(-19, 34, -4, 1006, 1205, 220, 242, 143, 255),
    VTX(-24, 29, -7, 987, 1271, 39, 34, 148, 255),
    VTX(-19, 34, -4, 1006, 1205, 87, 80, 238, 255),
    VTX(-15, 12, -7, 963, 1360, 58, 3, 152, 255),
    VTX(5, 5, -1, 486, 1366, 226, 233, 143, 255),
    VTX(17, 3, -8, 573, 1527, 191, 1, 156, 255),
    VTX(0, 22, -6, 763, 1099, 0, 216, 143, 255),
    VTX(0, 22, -6, -261, 1099, 0, 216, 143, 255),
    VTX(-5, 5, -1, 26, 1366, 31, 233, 143, 255),
    VTX(-6, 20, -6, -108, 1155, 248, 223, 141, 255),
    VTX(-10, 16, -4, -48, 1236, 25, 253, 139, 255),
    VTX(-15, 12, -7, -61, 1360, 58, 3, 152, 255),
    VTX(-17, 3, -8, -62, 1526, 66, 1, 156, 255),
    VTX(0, -11, 2, 256, 1961, 0, 48, 147, 255),
    VTX(20, -10, -11, 584, 1703, 190, 31, 161, 255),
    VTX(15, -19, -13, 620, 1809, 204, 67, 172, 255),
    VTX(7, -26, -16, 693, 1879, 228, 85, 177, 255),
    VTX(0, -29, -18, 768, 1890, 0, 90, 178, 255),
    VTX(-7, -26, -16, -181, 1879, 28, 85, 177, 255),
    VTX(-15, -19, -13, -109, 1808, 51, 68, 172, 255),
    VTX(-20, -10, -11, -72, 1703, 65, 30, 161, 255),
}; 

static Vtx object_gi_ki_tan_maskVtx_000A40[8] = {
    VTX(-5, 14, 1, -560, 272, 255, 57, 105, 255),
    VTX(-12, 12, -2, -344, -226, 182, 239, 92, 255),
    VTX(-12, -4, 1, 352, 93, 176, 23, 86, 255),
    VTX(0, -7, 8, 202, 1144, 255, 48, 109, 255),
    VTX(12, -4, 1, 355, 77, 80, 23, 86, 255),
    VTX(12, 12, -2, -343, -237, 74, 240, 92, 255),
    VTX(5, 14, 1, -558, 262, 1, 57, 105, 255),
    VTX(0, -7, 8, 202, 1144, 255, 48, 109, 255),
}; 

Gfx gGiKeatonMaskDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 255, 190, 0, 255),
    gsDPSetEnvColor(100, 70, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(2000, 2000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_ki_tan_maskVtx_000100[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_ki_tan_maskVtx_000130[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 2, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 6, 12, 1, 0),
    gsSP2Triangles(18, 19, 14, 0, 0, 4, 20, 0),
    gsSP2Triangles(14, 21, 22, 0, 23, 17, 8, 0),
    gsSP2Triangles(14, 2, 18, 0, 24, 14, 19, 0),
    gsSP2Triangles(19, 25, 24, 0, 21, 14, 24, 0),
    gsSP2Triangles(18, 2, 1, 0, 26, 27, 28, 0),
    gsSP2Triangles(5, 20, 29, 0, 30, 8, 7, 0),
    gsSPVertex(&object_gi_ki_tan_maskVtx_000130[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 9, 17, 0, 13, 18, 19, 0),
    gsSP2Triangles(17, 9, 20, 0, 21, 22, 17, 0),
    gsSP2Triangles(23, 17, 0, 0, 24, 22, 25, 0),
    gsSP2Triangles(0, 26, 27, 0, 28, 29, 0, 0),
    gsSP1Triangle(22, 24, 1, 0),
    gsSPVertex(&object_gi_ki_tan_maskVtx_000130[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(10, 11, 8, 0, 7, 11, 10, 0),
    gsSP2Triangles(7, 10, 12, 0, 13, 12, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 11, 7, 6, 0),
    gsSP2Triangles(7, 23, 5, 0, 12, 24, 25, 0),
    gsSP2Triangles(26, 13, 17, 0, 26, 24, 12, 0),
    gsSP2Triangles(27, 28, 29, 0, 17, 29, 26, 0),
    gsSP2Triangles(12, 13, 26, 0, 30, 31, 21, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 100, 100, 50, 255),
    gsDPSetEnvColor(30, 20, 10, 255),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsSPVertex(&object_gi_ki_tan_maskVtx_000700[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 1, 5, 0, 6, 2, 3, 0),
    gsSP2Triangles(0, 7, 8, 0, 9, 7, 0, 0),
    gsSP2Triangles(6, 9, 2, 0, 9, 0, 2, 0),
    gsSP2Triangles(1, 0, 8, 0, 5, 1, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 10, 12, 0),
    gsSP2Triangles(14, 13, 12, 0, 15, 16, 14, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 21, 0, 21, 22, 23, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 100, 70, 0, 255),
    gsDPSetEnvColor(60, 40, 0, 255),
    gsSPTexture(2000, 2000, 0, 0, G_ON),
    gsSPVertex(&object_gi_ki_tan_maskVtx_000880[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 1, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 8, 6, 10, 0),
    gsSP2Triangles(11, 4, 12, 0, 1, 11, 2, 0),
    gsSP2Triangles(11, 1, 4, 0, 13, 2, 11, 0),
    gsSP2Triangles(14, 11, 15, 0, 15, 16, 14, 0),
    gsSP2Triangles(16, 15, 17, 0, 17, 15, 18, 0),
    gsSP2Triangles(19, 18, 15, 0, 19, 15, 20, 0),
    gsSP2Triangles(15, 11, 20, 0, 12, 20, 11, 0),
    gsSP2Triangles(12, 21, 20, 0, 22, 20, 21, 0),
    gsSP2Triangles(22, 23, 20, 0, 23, 24, 20, 0),
    gsSP2Triangles(24, 25, 20, 0, 25, 26, 20, 0),
    gsSP2Triangles(26, 27, 20, 0, 20, 27, 19, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiKeatonMaskEyesDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 20, 10, 0, 255),
    gsDPSetEnvColor(220, 170, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_gi_ki_tan_maskTex_000000),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 1, 0, 0, 0, 2, 5, 0, 2, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_ki_tan_maskVtx_000A40[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSPEndDisplayList(),
}; 

