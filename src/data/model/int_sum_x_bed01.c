#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_x_bed01_v[];
u16 int_sum_x_bed01_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_x_bed01_pal.inc"
};

u8 int_sum_x_bed01_mat[] = {
#include "assets/int_sum_x_bed01_mat.inc"
};

u8 int_sum_x_bed01_head[] = {
#include "assets/int_sum_x_bed01_head.inc"
};

u8 int_sum_x_bed01_front[] = {
#include "assets/int_sum_x_bed01_front.inc"
};

u8 int_sum_x_bed01_top[] = {
#include "assets/int_sum_x_bed01_top.inc"
};

u8 int_sum_x_bed01_sox[] = {
#include "assets/int_sum_x_bed01_sox.inc"
};

Vtx int_sum_x_bed01_v[] = {
#include "assets/int_sum_x_bed01_v.inc"
};

GFX_ARR_BEGIN(int_sum_x_bed_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_x_bed01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 48, int_sum_x_bed01_mat),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_x_bed01_v, 9, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 0, 2, 3, 3, 4, 5),
    gsSPNTriangles_5b(6, 0, 5, 0, 3, 5, 4, 6, 5, 4, 7, 8),
    gsSPNTriangles_5b(4, 8, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_x_bed_onT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_x_bed01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_x_bed01_sox),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_x_bed01_v[9], 13, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 16, int_sum_x_bed01_top),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(6, 4, 5, 6, 4, 6, 7, 8, 9, 10),
    gsSPNTriangles_5b(11, 12, 10, 10, 9, 11, 12, 8, 10, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 48, int_sum_x_bed01_front),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPVertex(&int_sum_x_bed01_v[22], 32, 0),
    gsSPNTrianglesInit_5b(14, 0, 1, 2, 3, 4, 5, 3, 5, 6),
    gsSPNTriangles_5b(7, 8, 9, 10, 11, 12, 10, 12, 13, 14, 15, 16),
    gsSPNTriangles_5b(14, 16, 17, 18, 19, 20, 18, 20, 21, 22, 23, 24),
    gsSPNTriangles_5b(22, 24, 25, 26, 27, 28, 29, 30, 31, 0, 0, 0),
    gsSPVertex(&int_sum_x_bed01_v[54], 15, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(7, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_x_bed01_head),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(2, 10, 11, 12, 10, 13, 14, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
