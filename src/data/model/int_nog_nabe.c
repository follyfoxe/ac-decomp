#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_nog_nabe_v[];
u16 int_nog_nabe_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_nog_nabe_pal.inc"
};

u8 int_nog_nabe_switch_tex_txt[] = {
#include "assets/int_nog_nabe_switch_tex_txt.inc"
};

u8 int_nog_nabe_fire1_TA_tex_txt[] = {
#include "assets/int_nog_nabe_fire1_TA_tex_txt.inc"
};

u8 int_nog_nabe_fire2_TA_tex_txt[] = {
#include "assets/int_nog_nabe_fire2_TA_tex_txt.inc"
};

u8 int_nog_nabe_fire3_TA_tex_txt[] = {
#include "assets/int_nog_nabe_fire3_TA_tex_txt.inc"
};

u8 int_nog_nabe_side_tex_txt[] = {
#include "assets/int_nog_nabe_side_tex_txt.inc"
};

u8 int_nog_nabe_top_tex_txt[] = {
#include "assets/int_nog_nabe_top_tex_txt.inc"
};

u8 int_nog_nabe_conro_tex_txt[] = {
#include "assets/int_nog_nabe_conro_tex_txt.inc"
};

Vtx int_nog_nabe_v[] = {
#include "assets/int_nog_nabe_v.inc"
};

GFX_ARR_BEGIN(int_nog_nabe_switch_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_nog_nabe_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_nog_nabe_switch_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_nog_nabe_v, 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_nog_nabe_fire_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 255, 0, 255, 255, 150),
    gsDPSetEnvColor(0, 120, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_nog_nabe_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, anime_1_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_nog_nabe_v[4], 10, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 0, 2, 3, 4, 3, 5),
    gsSPNTriangles_5b(4, 0, 3, 6, 7, 8, 6, 8, 9, 7, 5, 8),
    gsSPNTriangles_5b(7, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_nog_nabe_body_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_nog_nabe_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_nog_nabe_side_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_nog_nabe_v[14], 18, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 2, 3, 4, 2, 4, 0),
    gsSPNTriangles_5b(3, 5, 6, 3, 6, 7, 7, 4, 3, 8, 9, 10),
    gsSPNTriangles_5b(10, 11, 12, 10, 12, 8, 5, 10, 9, 5, 9, 13),
    gsSPNTriangles_5b(13, 6, 5, 2, 14, 3, 3, 15, 5, 10, 16, 11),
    gsSPNTriangles_5b(5, 17, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_nog_nabe_top_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&int_nog_nabe_v[32], 17, 0),
    gsSPNTrianglesInit_5b(12, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(5, 7, 6, 7, 8, 6, 9, 10, 11, 9, 11, 12),
    gsSPNTriangles_5b(13, 14, 6, 8, 13, 6, 14, 15, 6, 16, 4, 6),
    gsSPNTriangles_5b(15, 16, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 64, int_nog_nabe_conro_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&int_nog_nabe_v[49], 32, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 16, 17, 18, 16, 18, 19, 20, 21, 22),
    gsSPNTriangles_5b(20, 22, 23, 24, 25, 26, 24, 26, 27, 28, 29, 30),
    gsSPNTriangles_5b(28, 30, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPVertex(&int_nog_nabe_v[81], 13, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(7, 8, 6, 6, 8, 4, 6, 5, 7, 9, 10, 11),
    gsSPNTriangles_5b(9, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 cKF_ckcb_r_int_nog_nabe_tbl[] = { 0, 0, 0, 1 };

s16 cKF_kn_int_nog_nabe_tbl[] = { 6 };

s16 cKF_c_int_nog_nabe_tbl[] = { -750, 0, 1125, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 0 };

s16 cKF_ds_int_nog_nabe_tbl[] = { 1, 0, 1496, 2, 50, 2676, 4, 354, 5510, 6, 722, 4566, 7, 850, 2676, 8, 900, 1496 };

cKF_Animation_R_c cKF_ba_r_int_nog_nabe = {
    cKF_ckcb_r_int_nog_nabe_tbl, cKF_ds_int_nog_nabe_tbl, cKF_kn_int_nog_nabe_tbl, cKF_c_int_nog_nabe_tbl, -1, 8
};

cKF_Joint_R_c cKF_je_r_int_nog_nabe_tbl[] = {
    { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 64786, 0, 1125 } },
    { int_nog_nabe_body_model, 2, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
    { int_nog_nabe_fire_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
    { int_nog_nabe_switch_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 313, 0, 0 } }
};

cKF_Skeleton_R_c cKF_bs_r_int_nog_nabe = { ARRAY_COUNT(cKF_je_r_int_nog_nabe_tbl), 3, cKF_je_r_int_nog_nabe_tbl };
