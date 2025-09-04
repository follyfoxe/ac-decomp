#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_blue_bureau01_v[];
u16 int_sum_blue_bureau01_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_blue_bureau01_pal.inc"
};

u8 int_sum_blue_bureau01_hiki_tex_txt[] = {
#include "assets/int_sum_blue_bureau01_hiki_tex_txt.inc"
};

u8 int_sum_blue_bureau01_top_tex_txt[] = {
#include "assets/int_sum_blue_bureau01_top_tex_txt.inc"
};

u8 int_sum_blue_bureau01_topin_tex_txt[] = {
#include "assets/int_sum_blue_bureau01_topin_tex_txt.inc"
};

u8 int_sum_blue_bureau01_side_tex_txt[] = {
#include "assets/int_sum_blue_bureau01_side_tex_txt.inc"
};

u8 int_sum_blue_bureau01_front_tex_txt[] = {
#include "assets/int_sum_blue_bureau01_front_tex_txt.inc"
};

Vtx int_sum_blue_bureau01_v[] = {
#include "assets/int_sum_blue_bureau01_v.inc"
};

GFX_ARR_BEGIN(sum_blue_bureau01_base_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_blue_bureau01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_blue_bureau01_topin_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_blue_bureau01_v[15], 8, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_blue_bureau01_top_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(2, 4, 5, 6, 4, 7, 5, 0, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 64, int_sum_blue_bureau01_side_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPVertex(&int_sum_blue_bureau01_v[23], 28, 0),
    gsSPNTrianglesInit_5b(12, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 16, 17, 18, 16, 18, 19, 20, 21, 22),
    gsSPNTriangles_5b(20, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 64, int_sum_blue_bureau01_front_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(2, 24, 25, 26, 24, 26, 27, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(sum_blue_bureau01_door_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_blue_bureau01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 48, int_sum_blue_bureau01_hiki_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_blue_bureau01_v, 15, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_blue_bureau01_top_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(3, 8, 9, 10, 11, 12, 13, 11, 13, 14),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 cKF_ckcb_r_int_sum_blue_bureau01_tbl[] = { 56, 0, 7 };

s16 cKF_kn_int_sum_blue_bureau01_tbl[] = { 2, 2, 2, 2, 2, 5 };

s16 cKF_c_int_sum_blue_bureau01_tbl[] = { -900, 0, 0, 0, 0, -900 };

s16 cKF_ds_int_sum_blue_bureau01_tbl[] = { 1,  1250, 0, 16, 1250, 0, 1,  3625, 0,    16, 3625, 0,    1,  -200, 0,
                                           16, -200, 0, 1,  0,    0, 16, 0,    0,    1,  0,    0,    16, 0,    0,
                                           1,  -900, 0, 3,  -900, 0, 5,  -840, 1590, 9,  -500, 3027, 16, 50,   0 };

cKF_Animation_R_c cKF_ba_r_int_sum_blue_bureau01 = { cKF_ckcb_r_int_sum_blue_bureau01_tbl,
                                                     cKF_ds_int_sum_blue_bureau01_tbl,
                                                     cKF_kn_int_sum_blue_bureau01_tbl,
                                                     cKF_c_int_sum_blue_bureau01_tbl,
                                                     -1,
                                                     16 };

cKF_Joint_R_c cKF_je_r_int_sum_blue_bureau01_tbl[] = {
    { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 1250, 3625, 65336 } },
    { sum_blue_bureau01_base_model, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
    { sum_blue_bureau01_door_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 1500, 0, 0 } }
};

cKF_Skeleton_R_c cKF_bs_r_int_sum_blue_bureau01 = { ARRAY_COUNT(cKF_je_r_int_sum_blue_bureau01_tbl), 2,
                                                    cKF_je_r_int_sum_blue_bureau01_tbl };
