#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_x_chest02_v[];
u16 int_sum_x_chest02_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_x_chest02_pal.inc"
};

u8 int_sum_x_chest02_into_txt[] = {
#include "assets/int_sum_x_chest02_into_txt.inc"
};

u8 int_sum_x_chest02_hiki_txt[] = {
#include "assets/int_sum_x_chest02_hiki_txt.inc"
};

u8 int_sum_x_chest02_head_txt[] = {
#include "assets/int_sum_x_chest02_head_txt.inc"
};

u8 int_sum_x_chest02_front_txt[] = {
#include "assets/int_sum_x_chest02_front_txt.inc"
};

u8 int_sum_x_chest02_top_txt[] = {
#include "assets/int_sum_x_chest02_top_txt.inc"
};

Vtx int_sum_x_chest02_v[] = {
#include "assets/int_sum_x_chest02_v.inc"
};

GFX_ARR_BEGIN(int_sum_x_chest02_door_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_x_chest02_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_x_chest02_into_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_x_chest02_v, 32, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 0, 3, 1, 4, 5, 6),
    gsSPNTriangles_5b(7, 8, 9, 8, 10, 9, 11, 12, 13, 11, 14, 12),
    gsSPNTriangles_5b(15, 16, 17, 16, 18, 17, 19, 20, 21, 19, 22, 20),
    gsSPNTriangles_5b(23, 24, 25, 24, 26, 25, 27, 28, 29, 28, 30, 29),
    gsSPNTriangles_5b(30, 31, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 16, int_sum_x_chest02_hiki_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPVertex(&int_sum_x_chest02_v[32], 5, 0),
    gsSPNTrianglesInit_5b(3, 0, 1, 2, 0, 2, 3, 2, 4, 3),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_x_chest02_base_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_x_chest02_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_x_chest02_head_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_x_chest02_v[37], 15, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 3, 4, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 32, int_sum_x_chest02_front_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(6, 5, 6, 7, 5, 8, 6, 6, 9, 7),
    gsSPNTriangles_5b(10, 11, 12, 11, 13, 12, 10, 14, 11, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_sum_x_chest02_top_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&int_sum_x_chest02_v[52], 20, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 1, 3, 2, 4, 5, 6),
    gsSPNTriangles_5b(4, 7, 5, 8, 9, 10, 11, 12, 13, 14, 15, 16),
    gsSPNTriangles_5b(17, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 cKF_ckcb_r_int_sum_x_chest02_tbl[] = { 56, 7, 7 };

s16 cKF_kn_int_sum_x_chest02_tbl[] = { 2, 2, 2, 2, 2, 2, 2, 2, 2 };

s16 cKF_c_int_sum_x_chest02_tbl[] = { 0, 900, 0 };

s16 cKF_ds_int_sum_x_chest02_tbl[] = { 1, 2000, 0, 10, 2000, 0, 1, -24000, 0, 10, -24000, 0, 1, 1500, 0, 10, 1500, 0,
                                       1, 0,    0, 10, 0,    0, 1, 0,      0, 10, 0,      0, 1, 900,  0, 10, 900,  0,
                                       1, 0,    0, 10, 0,    0, 1, 0,      0, 10, 0,      0, 1, 0,    0, 10, 28,   83 };

cKF_Animation_R_c cKF_ba_r_int_sum_x_chest02 = { cKF_ckcb_r_int_sum_x_chest02_tbl,
                                                 cKF_ds_int_sum_x_chest02_tbl,
                                                 cKF_kn_int_sum_x_chest02_tbl,
                                                 cKF_c_int_sum_x_chest02_tbl,
                                                 -1,
                                                 10 };

cKF_Joint_R_c cKF_je_r_int_sum_x_chest02_tbl[] = {
    { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 2000, 41536, 1500 } },
    { int_sum_x_chest02_base_model, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
    { int_sum_x_chest02_door_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 1, 0, 0 } }
};

cKF_Skeleton_R_c cKF_bs_r_int_sum_x_chest02 = { ARRAY_COUNT(cKF_je_r_int_sum_x_chest02_tbl), 2,
                                                cKF_je_r_int_sum_x_chest02_tbl };
