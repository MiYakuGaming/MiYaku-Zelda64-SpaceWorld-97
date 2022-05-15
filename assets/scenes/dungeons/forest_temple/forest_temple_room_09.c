#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "forest_temple_room_09.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "forest_temple_scene.h"


static SCmdEchoSettings forest_temple_room_09Set0000Cmd00;
static SCmdRoomBehavior forest_temple_room_09Set0000Cmd01;
static SCmdSkyboxDisables forest_temple_room_09Set0000Cmd02;
static SCmdMesh forest_temple_room_09Set0000Cmd03;
static SCmdObjectList forest_temple_room_09Set0000Cmd04;
static SCmdEndMarker forest_temple_room_09Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx forest_temple_room_09Vtx_000070[32];
static Vtx forest_temple_room_09Vtx_000270[30];
static Vtx forest_temple_room_09Vtx_000450[32];
static Vtx forest_temple_room_09Vtx_000650[32];
static Vtx forest_temple_room_09Vtx_000850[24];
static Vtx forest_temple_room_09Vtx_0009D0[24];
static Vtx forest_temple_room_09Vtx_000B50[23];
static Vtx forest_temple_room_09Vtx_000CC0[8];

static SCmdEchoSettings forest_temple_room_09Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior forest_temple_room_09Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables forest_temple_room_09Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh forest_temple_room_09Set0000Cmd03 = {  0x0A, 0, (u32)&forest_temple_room_09MeshHeader0x000050 }; // 0x0018

static SCmdObjectList forest_temple_room_09Set0000Cmd04 = {  0x0B, 0x09, (u32)forest_temple_room_09ObjectList0x000030 }; // 0x0020

static SCmdEndMarker forest_temple_room_09Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 forest_temple_room_09ObjectList0x000030[9] = {
	OBJECT_BOX,
	OBJECT_FIRE,
	OBJECT_TORCH2,
	OBJECT_SK2,
	OBJECT_POH,
	OBJECT_WALLMASTER,
	OBJECT_ST,
	OBJECT_GOL,
	OBJECT_DEKUBABA,
}; 

static u8 unaccounted_000044[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader2 forest_temple_room_09MeshHeader0x000050 = { { 2 }, 0x01, (u32)&forest_temple_room_09MeshDListEntry0x00005C, (u32)&(forest_temple_room_09MeshDListEntry0x00005C) + sizeof(forest_temple_room_09MeshDListEntry0x00005C) }; 

MeshEntry2 forest_temple_room_09MeshDListEntry0x00005C[1] = {
	{ 119, 587, -2708, 237, (u32)forest_temple_room_09Dlist0x000D40, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx forest_temple_room_09Vtx_000070[32] = {
    VTX(191, 707, -2560, 3482, -3482, 15, 12, 9, 255),
    VTX(191, 531, -2628, 1741, 1024, 193, 182, 161, 255),
    VTX(191, 531, -2560, 3482, 1024, 42, 39, 31, 255),
    VTX(191, 707, -2628, 1741, -3482, 28, 25, 20, 255),
    VTX(191, 707, -2696, 0, -3482, 15, 12, 9, 255),
    VTX(191, 531, -2696, 0, 1024, 42, 39, 31, 255),
    VTX(191, 707, -2720, 3482, -3482, 15, 12, 9, 255),
    VTX(191, 531, -2788, 1741, 1024, 193, 182, 161, 255),
    VTX(191, 531, -2720, 3482, 1024, 42, 39, 31, 255),
    VTX(191, 707, -2788, 1741, -3482, 28, 25, 20, 255),
    VTX(191, 707, -2856, 0, -3482, 15, 12, 9, 255),
    VTX(191, 531, -2856, 0, 1024, 42, 39, 31, 255),
    VTX(89, 567, -2536, 2611, -1536, 173, 159, 132, 255),
    VTX(47, 467, -2536, 3686, 1024, 28, 25, 20, 255),
    VTX(47, 707, -2536, 3686, -5120, 42, 39, 31, 255),
    VTX(89, 467, -2536, 2611, 1024, 73, 65, 50, 255),
    VTX(191, 707, -2536, 0, -5120, 42, 39, 31, 255),
    VTX(149, 567, -2536, 1075, -1536, 173, 159, 132, 255),
    VTX(191, 467, -2536, 0, 1024, 28, 25, 20, 255),
    VTX(149, 467, -2536, 1075, 1024, 73, 65, 50, 255),
    VTX(149, 567, -2880, 2611, -1536, 136, 121, 90, 255),
    VTX(191, 467, -2880, 3686, 1024, 15, 12, 9, 255),
    VTX(191, 707, -2880, 3686, -5120, 255, 255, 255, 255),
    VTX(149, 467, -2880, 2611, 1024, 136, 121, 90, 255),
    VTX(47, 707, -2880, 0, -5120, 255, 255, 255, 255),
    VTX(89, 567, -2880, 1075, -1536, 136, 121, 90, 255),
    VTX(47, 467, -2880, 0, 1024, 15, 12, 9, 255),
    VTX(89, 467, -2880, 1075, 1024, 136, 121, 90, 255),
    VTX(149, 467, -2900, 512, 1024, 105, 93, 71, 255),
    VTX(149, 467, -2880, 1024, 1024, 105, 93, 71, 255),
    VTX(149, 567, -2880, 1024, -1536, 73, 65, 50, 255),
    VTX(149, 567, -2900, 512, -1536, 73, 65, 50, 255),
}; 

static Vtx forest_temple_room_09Vtx_000270[30] = {
    VTX(89, 467, -2880, 1024, 1024, 105, 93, 71, 255),
    VTX(89, 467, -2900, 512, 1024, 105, 93, 71, 255),
    VTX(89, 567, -2900, 512, -1536, 73, 65, 50, 255),
    VTX(89, 567, -2880, 1024, -1536, 73, 65, 50, 255),
    VTX(89, 567, -2900, 0, 512, 42, 39, 31, 255),
    VTX(149, 567, -2900, 1536, 512, 42, 39, 31, 255),
    VTX(149, 567, -2880, 1536, 1024, 42, 39, 31, 255),
    VTX(89, 567, -2880, 0, 1024, 42, 39, 31, 255),
    VTX(47, 531, -2788, 1741, 1024, 193, 182, 161, 255),
    VTX(47, 707, -2856, 3482, -3482, 15, 12, 9, 255),
    VTX(47, 707, -2788, 1741, -3482, 28, 25, 20, 255),
    VTX(47, 531, -2856, 3482, 1024, 42, 39, 31, 255),
    VTX(47, 531, -2720, 0, 1024, 42, 39, 31, 255),
    VTX(47, 707, -2720, 0, -3482, 15, 12, 9, 255),
    VTX(47, 531, -2628, 1741, 1024, 193, 182, 161, 255),
    VTX(47, 707, -2696, 3482, -3482, 15, 12, 9, 255),
    VTX(47, 707, -2628, 1741, -3482, 28, 25, 20, 255),
    VTX(47, 531, -2696, 3482, 1024, 42, 39, 31, 255),
    VTX(47, 531, -2560, 0, 1024, 42, 39, 31, 255),
    VTX(47, 707, -2560, 0, -3482, 15, 12, 9, 255),
    VTX(191, 707, -2708, 2662, -307, 59, 53, 41, 255),
    VTX(119, 707, -2794, 819, 1894, 151, 134, 101, 255),
    VTX(191, 707, -2880, 2662, 4096, 15, 12, 9, 255),
    VTX(47, 707, -2880, -1024, 4096, 15, 12, 9, 255),
    VTX(47, 707, -2708, -1024, -307, 59, 53, 41, 255),
    VTX(119, 707, -2794, 819, 1894, 151, 134, 101, 255),
    VTX(191, 707, -2536, 2662, -4710, 15, 12, 9, 255),
    VTX(119, 707, -2622, 819, -2509, 151, 134, 101, 255),
    VTX(47, 707, -2536, -1024, -4710, 15, 12, 9, 255),
    VTX(119, 707, -2622, 819, -2509, 151, 134, 101, 255),
}; 

static Vtx forest_temple_room_09Vtx_000450[32] = {
    VTX(55, 531, -2856, 0, -1025, 173, 159, 132, 255),
    VTX(47, 531, -2856, -281, -1025, 42, 39, 31, 255),
    VTX(47, 467, -2856, -281, 512, 15, 12, 9, 255),
    VTX(55, 467, -2856, 0, 512, 42, 39, 31, 255),
    VTX(55, 707, -2856, 0, -5253, 42, 39, 31, 255),
    VTX(47, 707, -2856, -281, -5253, 15, 12, 9, 255),
    VTX(55, 531, -2696, 0, -1025, 173, 159, 132, 255),
    VTX(47, 531, -2696, -281, -1025, 42, 39, 31, 255),
    VTX(47, 467, -2696, -281, 512, 15, 12, 9, 255),
    VTX(55, 467, -2696, 0, 512, 42, 39, 31, 255),
    VTX(55, 707, -2696, 0, -5253, 42, 39, 31, 255),
    VTX(47, 707, -2696, -281, -5253, 15, 12, 9, 255),
    VTX(47, 531, -2720, -281, -1025, 42, 39, 31, 255),
    VTX(55, 531, -2720, 0, -1025, 173, 159, 132, 255),
    VTX(55, 467, -2720, 0, 512, 42, 39, 31, 255),
    VTX(47, 467, -2720, -281, 512, 15, 12, 9, 255),
    VTX(47, 707, -2720, -281, -5253, 15, 12, 9, 255),
    VTX(55, 707, -2720, 0, -5253, 42, 39, 31, 255),
    VTX(55, 531, -2720, 0, -1029, 245, 244, 241, 255),
    VTX(55, 531, -2696, 1020, -1029, 245, 244, 241, 255),
    VTX(55, 467, -2696, 1020, 512, 73, 65, 50, 255),
    VTX(55, 467, -2720, 0, 512, 73, 65, 50, 255),
    VTX(55, 531, -2856, 1031, -1023, 245, 244, 241, 255),
    VTX(55, 467, -2856, 1031, 512, 73, 65, 50, 255),
    VTX(55, 467, -2880, 0, 512, 73, 65, 50, 255),
    VTX(55, 531, -2880, 0, -1023, 245, 244, 241, 255),
    VTX(55, 707, -2880, 0, -5244, 42, 39, 31, 255),
    VTX(55, 707, -2856, 1031, -5244, 42, 39, 31, 255),
    VTX(183, 707, -2696, 1020, -5265, 42, 39, 31, 255),
    VTX(183, 707, -2720, 0, -5265, 42, 39, 31, 255),
    VTX(183, 531, -2720, 0, -1029, 245, 244, 241, 255),
    VTX(183, 531, -2696, 1020, -1029, 245, 244, 241, 255),
}; 

static Vtx forest_temple_room_09Vtx_000650[32] = {
    VTX(183, 467, -2536, 1026, 512, 73, 65, 50, 255),
    VTX(183, 531, -2536, 1025, -1024, 245, 244, 241, 255),
    VTX(183, 531, -2560, -1, -1024, 245, 244, 241, 255),
    VTX(183, 467, -2560, 0, 512, 73, 65, 50, 255),
    VTX(183, 707, -2856, 1031, -5244, 42, 39, 31, 255),
    VTX(183, 707, -2880, 0, -5244, 42, 39, 31, 255),
    VTX(183, 531, -2880, 0, -1023, 245, 244, 241, 255),
    VTX(183, 531, -2856, 1031, -1023, 245, 244, 241, 255),
    VTX(183, 467, -2880, 0, 512, 15, 12, 9, 255),
    VTX(183, 467, -2856, 1031, 512, 73, 65, 50, 255),
    VTX(55, 531, -2696, 1020, -1029, 245, 244, 241, 255),
    VTX(55, 531, -2720, 0, -1029, 245, 244, 241, 255),
    VTX(55, 707, -2720, 0, -5265, 42, 39, 31, 255),
    VTX(55, 707, -2696, 1020, -5265, 42, 39, 31, 255),
    VTX(183, 467, -2720, 0, 512, 73, 65, 50, 255),
    VTX(183, 467, -2696, 1020, 512, 73, 65, 50, 255),
    VTX(183, 531, -2696, 1020, -1029, 245, 244, 241, 255),
    VTX(183, 531, -2720, 0, -1029, 245, 244, 241, 255),
    VTX(183, 707, -2536, 1020, -5249, 42, 39, 31, 255),
    VTX(183, 707, -2560, -6, -5249, 42, 39, 31, 255),
    VTX(191, 531, -2720, -281, -1025, 42, 39, 31, 255),
    VTX(183, 531, -2720, 0, -1025, 173, 159, 132, 255),
    VTX(183, 707, -2720, 0, -5253, 42, 39, 31, 255),
    VTX(191, 707, -2720, -281, -5253, 15, 12, 9, 255),
    VTX(191, 467, -2720, -281, 512, 15, 12, 9, 255),
    VTX(183, 467, -2720, 0, 512, 42, 39, 31, 255),
    VTX(55, 531, -2560, -1, -1024, 245, 244, 241, 255),
    VTX(55, 707, -2560, -6, -5249, 42, 39, 31, 255),
    VTX(55, 707, -2536, 1020, -5249, 42, 39, 31, 255),
    VTX(55, 531, -2536, 1025, -1024, 245, 244, 241, 255),
    VTX(55, 467, -2560, 0, 512, 73, 65, 50, 255),
    VTX(55, 467, -2536, 1026, 512, 73, 65, 50, 255),
}; 

static Vtx forest_temple_room_09Vtx_000850[24] = {
    VTX(183, 531, -2696, 0, -1025, 173, 159, 132, 255),
    VTX(191, 531, -2696, -281, -1025, 42, 39, 31, 255),
    VTX(191, 707, -2696, -281, -5253, 15, 12, 9, 255),
    VTX(183, 707, -2696, 0, -5253, 42, 39, 31, 255),
    VTX(183, 467, -2696, 0, 512, 42, 39, 31, 255),
    VTX(191, 467, -2696, -281, 512, 15, 12, 9, 255),
    VTX(183, 531, -2856, 0, -1025, 173, 159, 132, 255),
    VTX(191, 531, -2856, -281, -1025, 42, 39, 31, 255),
    VTX(191, 707, -2856, -281, -5253, 15, 12, 9, 255),
    VTX(183, 707, -2856, 0, -5253, 42, 39, 31, 255),
    VTX(183, 467, -2856, 0, 512, 42, 39, 31, 255),
    VTX(191, 467, -2856, -281, 512, 15, 12, 9, 255),
    VTX(191, 467, -2560, -281, 512, 15, 12, 9, 255),
    VTX(183, 467, -2560, 0, 512, 42, 39, 31, 255),
    VTX(183, 531, -2560, 0, -1025, 173, 159, 132, 255),
    VTX(191, 531, -2560, -281, -1025, 42, 39, 31, 255),
    VTX(183, 707, -2560, 0, -5253, 42, 39, 31, 255),
    VTX(191, 707, -2560, -281, -5253, 15, 12, 9, 255),
    VTX(47, 707, -2560, -281, -5253, 15, 12, 9, 255),
    VTX(55, 707, -2560, 0, -5253, 42, 39, 31, 255),
    VTX(55, 531, -2560, 0, -1025, 173, 159, 132, 255),
    VTX(47, 531, -2560, -281, -1025, 42, 39, 31, 255),
    VTX(55, 467, -2560, 0, 512, 42, 39, 31, 255),
    VTX(47, 467, -2560, -281, 512, 15, 12, 9, 255),
}; 

static Vtx forest_temple_room_09Vtx_0009D0[24] = {
    VTX(47, 531, -2788, 2051, -3, 193, 182, 161, 255),
    VTX(47, 531, -2720, 4103, -3, 42, 39, 31, 255),
    VTX(47, 467, -2720, 4103, 1024, 15, 12, 9, 255),
    VTX(47, 531, -2856, 0, -3, 42, 39, 31, 255),
    VTX(47, 467, -2856, 0, 1024, 15, 12, 9, 255),
    VTX(47, 467, -2788, 2051, 1024, 73, 65, 50, 255),
    VTX(47, 467, -2628, 2047, 1024, 73, 65, 50, 255),
    VTX(47, 467, -2696, 0, 1024, 15, 12, 9, 255),
    VTX(47, 531, -2628, 2047, -1, 193, 182, 161, 255),
    VTX(47, 531, -2696, 0, -1, 42, 39, 31, 255),
    VTX(47, 467, -2560, 4095, 1024, 15, 12, 9, 255),
    VTX(47, 531, -2560, 4095, -1, 42, 39, 31, 255),
    VTX(191, 467, -2720, 4103, 1024, 15, 12, 9, 255),
    VTX(191, 531, -2720, 4103, -3, 42, 39, 31, 255),
    VTX(191, 531, -2788, 2051, -3, 193, 182, 161, 255),
    VTX(191, 531, -2560, 4095, -1, 42, 39, 31, 255),
    VTX(191, 531, -2628, 2047, -1, 193, 182, 161, 255),
    VTX(191, 467, -2560, 4095, 1024, 15, 12, 9, 255),
    VTX(191, 467, -2628, 2047, 1024, 73, 65, 50, 255),
    VTX(191, 467, -2696, 0, 1024, 15, 12, 9, 255),
    VTX(191, 531, -2696, 0, -1, 42, 39, 31, 255),
    VTX(191, 467, -2856, 0, 1024, 15, 12, 9, 255),
    VTX(191, 531, -2856, 0, -3, 42, 39, 31, 255),
    VTX(191, 467, -2788, 2051, 1024, 73, 65, 50, 255),
}; 

static Vtx forest_temple_room_09Vtx_000B50[23] = {
    VTX(149, 567, -2536, 512, 1536, 42, 39, 31, 255),
    VTX(149, 567, -2516, 614, 1331, 42, 39, 31, 255),
    VTX(89, 567, -2516, 0, 1024, 42, 39, 31, 255),
    VTX(89, 567, -2536, -102, 1229, 42, 39, 31, 255),
    VTX(89, 567, -2536, 717, 1126, 59, 53, 41, 255),
    VTX(89, 567, -2516, 819, 922, 59, 53, 41, 255),
    VTX(89, 467, -2516, -205, 410, 89, 79, 60, 255),
    VTX(89, 467, -2536, -307, 614, 89, 79, 60, 255),
    VTX(149, 567, -2536, 0, 1024, 59, 53, 41, 255),
    VTX(149, 467, -2536, 1024, 1536, 89, 79, 60, 255),
    VTX(149, 467, -2516, 1126, 1331, 89, 79, 60, 255),
    VTX(149, 567, -2516, 102, 819, 59, 53, 41, 255),
    VTX(119, 467, -2708, 5948, 223, 213, 206, 192, 255),
    VTX(191, 467, -2708, 5657, -652, 15, 12, 9, 255),
    VTX(119, 467, -2804, 4782, 611, 173, 159, 132, 255),
    VTX(191, 467, -2900, 3325, 126, 15, 12, 9, 255),
    VTX(119, 467, -2900, 3617, 1000, 73, 65, 50, 255),
    VTX(47, 467, -2708, 6240, 1097, 15, 12, 9, 255),
    VTX(47, 467, -2900, 3908, 1874, 15, 12, 9, 255),
    VTX(119, 467, -2516, 8280, -554, 73, 65, 50, 255),
    VTX(191, 467, -2516, 7988, -1429, 15, 12, 9, 255),
    VTX(119, 467, -2612, 7114, -166, 183, 171, 147, 255),
    VTX(47, 467, -2516, 8571, 320, 15, 12, 9, 255),
}; 

static Vtx forest_temple_room_09Vtx_000CC0[8] = {
    VTX(47, 467, -2900, 0, 0, 0, 0, 0, 0),
    VTX(47, 467, -2516, 0, 0, 0, 0, 0, 0),
    VTX(47, 707, -2900, 0, 0, 0, 0, 0, 0),
    VTX(47, 707, -2516, 0, 0, 0, 0, 0, 0),
    VTX(191, 467, -2900, 0, 0, 0, 0, 0, 0),
    VTX(191, 467, -2516, 0, 0, 0, 0, 0, 0),
    VTX(191, 707, -2900, 0, 0, 0, 0, 0, 0),
    VTX(191, 707, -2516, 0, 0, 0, 0, 0, 0),
}; 

Gfx forest_temple_room_09Dlist0x000D40[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&forest_temple_room_09Vtx_000CC0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(forest_temple_room_09Tex_0010E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 245, 244, 241, 255),
    gsSPVertex(&forest_temple_room_09Vtx_000070[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(9, 10, 7, 0, 10, 11, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 12, 0, 16, 12, 14, 0),
    gsSP2Triangles(18, 17, 16, 0, 18, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 20, 0, 24, 20, 22, 0),
    gsSP2Triangles(26, 25, 24, 0, 26, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&forest_temple_room_09Vtx_000270[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 8, 13, 0, 8, 10, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 14, 19, 0, 14, 16, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(20, 24, 25, 0, 24, 23, 25, 0),
    gsSP2Triangles(26, 27, 20, 0, 26, 28, 27, 0),
    gsSP2Triangles(28, 24, 29, 0, 24, 20, 29, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(forest_temple_room_09Tex_0018E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 1, 1, 4, 4, 0, 0),
    gsSPVertex(&forest_temple_room_09Vtx_000450[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 13, 0, 16, 13, 12, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&forest_temple_room_09Vtx_000650[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(1, 18, 19, 0, 1, 19, 2, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 21, 0, 24, 21, 20, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(30, 26, 29, 0, 30, 29, 31, 0),
    gsSPVertex(&forest_temple_room_09Vtx_000850[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 21, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(forest_temple_room_09Tex_001AE8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&forest_temple_room_09Vtx_0009D0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(0, 5, 4, 0, 6, 7, 8, 0),
    gsSP2Triangles(7, 9, 8, 0, 10, 8, 11, 0),
    gsSP2Triangles(10, 6, 8, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 18, 17, 0),
    gsSP2Triangles(16, 19, 18, 0, 16, 20, 19, 0),
    gsSP2Triangles(21, 14, 22, 0, 21, 23, 14, 0),
    gsSP2Triangles(23, 12, 14, 0, 0, 2, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(forest_temple_sceneTex_01AEC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&forest_temple_room_09Vtx_000B50[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 17, 14, 18, 0),
    gsSP2Triangles(17, 12, 14, 0, 14, 16, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 20, 13, 21, 0),
    gsSP2Triangles(13, 12, 21, 0, 22, 21, 17, 0),
    gsSP2Triangles(21, 12, 17, 0, 22, 19, 21, 0),
    gsSPEndDisplayList(),
}; 

u64 forest_temple_room_09Tex_0010E8[] = {
#include "assets/scenes/dungeons/forest_temple//forest_temple_room_09Tex_0010E8.rgb5a1.inc.c"
};

u64 forest_temple_room_09Tex_0018E8[] = {
#include "assets/scenes/dungeons/forest_temple//forest_temple_room_09Tex_0018E8.rgb5a1.inc.c"
};

u64 forest_temple_room_09Tex_001AE8[] = {
#include "assets/scenes/dungeons/forest_temple//forest_temple_room_09Tex_001AE8.rgb5a1.inc.c"
};

static u8 unaccounted_002AE8[24] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0D, 0x40, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

