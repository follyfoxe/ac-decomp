#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_fruittv01_v[];
u16 int_sum_fruittv01_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_fruittv01_pal.inc"
};

u8 int_sum_fruittv01_antena_tex_txt[] = {
#include "assets/int_sum_fruittv01_antena_tex_txt.inc"
};

u8 int_sum_fruittv01_ha_tex_txt[] = {
#include "assets/int_sum_fruittv01_ha_tex_txt.inc"
};

u8 int_sum_fruittv01_foot_tex_txt[] = {
#include "assets/int_sum_fruittv01_foot_tex_txt.inc"
};

u8 int_sum_fruittv01_front_tex_txt[] = {
#include "assets/int_sum_fruittv01_front_tex_txt.inc"
};

u8 int_sum_fruittv01_body_tex_txt[] = {
#include "assets/int_sum_fruittv01_body_tex_txt.inc"
};

u8 int_sum_fruittv01_front1_TA_tex_txt[] = {
#include "assets/int_sum_fruittv01_front1_TA_tex_txt.inc"
};

u8 int_sum_fruittv01_front2_TA_tex_txt[] = {
#include "assets/int_sum_fruittv01_front2_TA_tex_txt.inc"
};

u8 int_sum_fruittv01_front3_TA_tex_txt[] = {
#include "assets/int_sum_fruittv01_front3_TA_tex_txt.inc"
};

u8 int_sum_fruittv01_front4_TA_tex_txt[] = {
#include "assets/int_sum_fruittv01_front4_TA_tex_txt.inc"
};

Vtx int_sum_fruittv01_v[] = {
#include "assets/int_sum_fruittv01_v.inc"
};

GFX_ARR_BEGIN(int_sum_fruittv01_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_fruittv01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_fruittv01_antena_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_fruittv01_v, 28, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 3, 4, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_fruittv01_ha_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(2, 5, 6, 7, 6, 8, 7, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_fruittv01_foot_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(6, 9, 10, 11, 12, 13, 11, 14, 15, 16),
    gsSPNTriangles_5b(17, 18, 16, 19, 20, 21, 19, 22, 23, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 48, 32, int_sum_fruittv01_front_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(2, 24, 25, 26, 24, 26, 27, 0, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_sum_fruittv01_body_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 252, 124),
    gsSPVertex(&int_sum_fruittv01_v[28], 20, 0),
    gsSPNTrianglesInit_5b(26, 0, 1, 2, 2, 3, 4, 5, 6, 0),
    gsSPNTriangles_5b(6, 1, 0, 7, 6, 5, 8, 9, 10, 11, 9, 8),
    gsSPNTriangles_5b(11, 12, 9, 13, 14, 15, 15, 12, 11, 8, 16, 17),
    gsSPNTriangles_5b(8, 10, 16, 16, 5, 17, 16, 7, 5, 13, 15, 11),
    gsSPNTriangles_5b(0, 2, 4, 13, 11, 18, 18, 0, 4, 4, 19, 13),
    gsSPNTriangles_5b(18, 4, 13, 11, 8, 17, 17, 18, 11, 17, 0, 18),
    gsSPNTriangles_5b(17, 5, 0, 13, 19, 14, 19, 4, 3, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_fruittv01_off_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_fruittv01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 16, anime_1_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_fruittv01_v[48], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
