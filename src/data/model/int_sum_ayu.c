#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_ayu_v[];
static u16 int_sum_ayu_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_ayu/int_sum_ayu_pal.inc"
};

u16 int_sum_ayu_glass_pic_ci4_pal[] = {
#include "assets/int_sum_ayu_glass_pic_ci4_pal.inc"
};

u8 int_sum_ayu_body_txt[] = {
#include "assets/int_sum_ayu_body_txt.inc"
};

u8 int_sum_ayu_top_txt[] = {
#include "assets/int_sum_ayu_top_txt.inc"
};

u8 int_sum_ayu_side_txt[] = {
#include "assets/int_sum_ayu_side_txt.inc"
};

u8 int_sum_ayu_base_txt[] = {
#include "assets/int_sum_ayu_base_txt.inc"
};

u8 int_sum_ayu_etc_txt[] = {
#include "assets/int_sum_ayu_etc_txt.inc"
};

u8 int_sum_ayu_glass_txt[] = {
#include "assets/int_sum_ayu_glass_txt.inc"
};

Vtx int_sum_ayu_v[] = {
#include "assets/int_sum_ayu_v.inc"
};

GFX_ARR_BEGIN(int_sum_ayu_sakana_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_ayu_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 48, 32, int_sum_ayu_body_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_ayu_v, 10, 0),
    gsSPNTrianglesInit_5b(14, 0, 1, 2, 1, 3, 2, 1, 4, 3),
    gsSPNTriangles_5b(1, 5, 4, 0, 6, 1, 6, 5, 1, 6, 7, 5),
    gsSPNTriangles_5b(6, 8, 7, 2, 9, 0, 2, 3, 9, 3, 4, 9),
    gsSPNTriangles_5b(4, 5, 9, 9, 6, 0, 9, 5, 6, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_ayu_top_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIM_LOD_FRAC, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 100, 255, 255, 255, 80),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_ayu_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 16, int_sum_ayu_top_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_ayu_v[10], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 3, 1, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_ayu_evw_model)
    gsSPTexture(4000, 4000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 255, 255, 255, 80),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_ayu_glass_pic_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 16, int_sum_ayu_glass_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_REPEAT, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_ayu_v[45], 10, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 0, 2, 3, 3, 2, 4),
    gsSPNTriangles_5b(3, 4, 5, 5, 4, 6, 5, 6, 7, 7, 6, 8),
    gsSPNTriangles_5b(7, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_ayu_base_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_ayu_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_sum_ayu_side_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_ayu_v[14], 31, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_ayu_base_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(4, 16, 17, 18, 17, 19, 18, 19, 20, 18),
    gsSPNTriangles_5b(20, 16, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_ayu_etc_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(4, 21, 22, 23, 21, 24, 25, 26, 27, 28),
    gsSPNTriangles_5b(26, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 cKF_ckcb_r_int_sum_ayu_tbl[] = { 56, 7, 0, 0, 7 };

s16 cKF_kn_int_sum_ayu_tbl[] = { 2, 2, 2, 2, 2, 2, 4, 3, 3 };

s16 cKF_c_int_sum_ayu_tbl[] = { 0, 0, 900, 0, 0, 0, 0, 0, 0 };

s16 cKF_ds_int_sum_ayu_tbl[] = { 1,  0,   0, 257, 0,   0,  1,   -5000, 0,   257, -5000, 0,   1,   0,   0, 257, 0,
                                 0,  1,   0, 0,   257, 0,  0,   1,     0,   0,   257,   0,   0,   1,   0, 0,   257,
                                 0,  0,   1, 200, 0,   86, 150, 0,     139, -70, 0,     257, 200, 0,   1, 25,  0,
                                 86, -20, 0, 257, 25,  0,  1,   -30,   0,   86,  15,    0,   257, -30, 0 };

cKF_Animation_R_c cKF_ba_r_int_sum_ayu = {
    cKF_ckcb_r_int_sum_ayu_tbl, cKF_ds_int_sum_ayu_tbl, cKF_kn_int_sum_ayu_tbl, cKF_c_int_sum_ayu_tbl, -1, 257
};

cKF_Joint_R_c cKF_je_r_int_sum_ayu_tbl[] = { { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 60536, 0 } },
                                             { int_sum_ayu_base_model, 3, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                             { int_sum_ayu_evw_model, 0, cKF_JOINT_FLAG_DISP_XLU, { 0, 0, 0 } },
                                             { int_sum_ayu_top_model, 0, cKF_JOINT_FLAG_DISP_XLU, { 0, 0, 0 } },
                                             { int_sum_ayu_sakana_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 500, 0, 0 } } };

cKF_Skeleton_R_c cKF_bs_r_int_sum_ayu = { ARRAY_COUNT(cKF_je_r_int_sum_ayu_tbl), 4, cKF_je_r_int_sum_ayu_tbl };
