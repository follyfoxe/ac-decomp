#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_danna_v[];
u16 int_sum_danna_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_danna_pal.inc"
};

u16 int_sum_danna_hand_pic_ci4_pal[] = {
#include "assets/int_sum_danna_hand_pic_ci4_pal.inc"
};

u8 int_sum_danna_base_txt[] = {
#include "assets/int_sum_danna_base_txt.inc"
};

u8 int_sum_danna_top_txt[] = {
#include "assets/int_sum_danna_top_txt.inc"
};

u8 int_sum_danna_side_txt[] = {
#include "assets/int_sum_danna_side_txt.inc"
};

u8 int_sum_danna_body_txt[] = {
#include "assets/int_sum_danna_body_txt.inc"
};

u8 int_sum_danna_hand_txt[] = {
#include "assets/int_sum_danna_hand_txt.inc"
};

Vtx int_sum_danna_v[] = {
#include "assets/int_sum_danna_v.inc"
};

GFX_ARR_BEGIN(int_sum_danna_side_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 255, 255, 255, 140),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_danna_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_sum_danna_side_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_danna_v[24], 10, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 0, 2, 3, 4, 0, 3),
    gsSPNTriangles_5b(4, 3, 5, 1, 6, 7, 1, 7, 2, 6, 8, 9),
    gsSPNTriangles_5b(6, 9, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_danna_komado_model)
    gsSPTexture(4000, 4000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 255, 255, 255, 140),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_danna_hand_pic_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_danna_hand_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_REPEAT, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_SHADING_SMOOTH |
                         G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_danna_v[34], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 3, 1, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_danna_glass_model)
    gsSPTexture(4000, 4000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 255, 255, 255, 70),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_danna_hand_pic_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_danna_hand_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_REPEAT, 3, 5),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_danna_v[56], 10, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 7, 6, 1, 7, 1, 0, 4, 8, 9),
    gsSPNTriangles_5b(4, 9, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_danna_base_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_danna_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_danna_base_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_danna_v, 24, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_sum_danna_top_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(8, 4, 5, 6, 5, 7, 6, 8, 9, 10),
    gsSPNTriangles_5b(8, 11, 9, 12, 13, 14, 12, 15, 13, 16, 17, 18),
    gsSPNTriangles_5b(17, 19, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(2, 20, 21, 22, 20, 22, 23, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_danna_body_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_danna_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 48, int_sum_danna_body_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_danna_v[42], 14, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 3, 0, 2, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 4, 7, 8, 9, 4, 8, 10, 11, 12),
    gsSPNTriangles_5b(10, 12, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_danna_feeler_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_danna_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 48, int_sum_danna_body_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_danna_v[38], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 3, 0, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 cKF_ckcb_r_int_sum_danna_tbl[] = { 7, 0, 7, 0, 1, 0, 0, 0 };

s16 cKF_kn_int_sum_danna_tbl[] = { 2, 2, 2, 9, 9, 9, 13 };

s16 cKF_c_int_sum_danna_tbl[] = { 0, 0, 0, 0, 0, 900, 0, 0, -900, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

s16 cKF_ds_int_sum_danna_tbl[] = {
    1,   0,   0,    257,  0,   0,    1,   0,   0,    257, 0,   0,    1,   0,   0,    257, 0,   0,   1,   -150,
    0,   21,  -150, 0,    29,  -400, 0,   103, -400, 0,   109, -200, 0,   131, -200, 0,   141, 50,  0,   241,
    50,  0,   257,  -150, 0,   1,    0,   0,   21,   0,   0,   29,   0,   0,   103,  0,   0,   109, 0,   0,
    131, 0,   0,    141,  0,   0,    241, 0,   0,    257, 0,   0,    1,   0,   0,    21,  0,   0,   29,  0,
    0,   103, 0,    0,    109, 0,    0,   131, 0,    0,   141, 0,    0,   241, 0,    0,   257, 0,   0,   1,
    -30, 0,   31,   -30,  -5,  41,   100, -1,  57,   -50, -8,  119,  80,  12,  133,  -20, -14, 155, -20, 14,
    163, 80,  14,   176,  -10, -28,  195, 50,  -7,   217, -20, 0,    241, 50,  -7,   257, -30, 0
};

cKF_Animation_R_c cKF_ba_r_int_sum_danna = {
    cKF_ckcb_r_int_sum_danna_tbl, cKF_ds_int_sum_danna_tbl, cKF_kn_int_sum_danna_tbl, cKF_c_int_sum_danna_tbl, -1, 257
};

cKF_Joint_R_c cKF_je_r_int_sum_danna_tbl[] = { { int_sum_danna_base_model, 4, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                               { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 62536, 0 } },
                                               { int_sum_danna_body_model, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                               { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 3500, 0, 0 } },
                                               { int_sum_danna_feeler_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                               { int_sum_danna_glass_model, 0, cKF_JOINT_FLAG_DISP_XLU, { 0, 0, 0 } },
                                               { int_sum_danna_komado_model, 0, cKF_JOINT_FLAG_DISP_XLU, { 0, 0, 0 } },
                                               { int_sum_danna_side_model, 0, cKF_JOINT_FLAG_DISP_XLU, { 0, 0, 0 } } };

cKF_Skeleton_R_c cKF_bs_r_int_sum_danna = { ARRAY_COUNT(cKF_je_r_int_sum_danna_tbl), 6, cKF_je_r_int_sum_danna_tbl };
