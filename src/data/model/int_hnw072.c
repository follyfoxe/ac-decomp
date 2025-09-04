#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_hnw072_v[];
u16 int_hnw072_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_hnw072_pal.inc"
};

u8 int_hnw072_c_front_tex_txt[] = {
#include "assets/int_hnw072_c_front_tex_txt.inc"
};

u8 int_hnw072_c_back_tex_txt[] = {
#include "assets/int_hnw072_c_back_tex_txt.inc"
};

u8 int_hnw072_arm_tex_txt[] = {
#include "assets/int_hnw072_arm_tex_txt.inc"
};

u8 int_hnw072_armtop_tex_txt[] = {
#include "assets/int_hnw072_armtop_tex_txt.inc"
};

u8 int_hnw072_b_back_tex_txt[] = {
#include "assets/int_hnw072_b_back_tex_txt.inc"
};

u8 int_hnw072_b_front_tex_txt[] = {
#include "assets/int_hnw072_b_front_tex_txt.inc"
};

Vtx int_hnw072_v[] = {
#include "assets/int_hnw072_v.inc"
};

GFX_ARR_BEGIN(int_hnw072_chest_model)
    gsSPMatrix(anime_6_mdl, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_hnw072_v, 7, 0),
    gsSPMatrix(&anime_6_mdl[1], G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_hnw072_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 48, int_hnw072_c_front_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 252, 188),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPVertex(&int_hnw072_v[7], 22, 7),
    gsSPNTrianglesInit_5b(7, 6, 7, 8, 5, 6, 9, 6, 4, 10),
    gsSPNTriangles_5b(5, 11, 12, 0, 5, 13, 4, 2, 14, 4, 15, 16),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 48, int_hnw072_c_back_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 124, 188),
    gsSPNTrianglesInit_5b(3, 1, 18, 17, 3, 1, 19, 3, 20, 21),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 48, int_hnw072_c_front_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 252, 188),
    gsSPNTrianglesInit_5b(3, 22, 23, 24, 25, 26, 24, 27, 28, 22),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 48, int_hnw072_c_back_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 124, 188),
    gsSPVertex(&int_hnw072_v[29], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 2, 1, 3, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_hnw072_armR_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_hnw072_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_hnw072_arm_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_hnw072_v[45], 12, 0),
    gsSPNTrianglesInit_5b(6, 0, 1, 2, 3, 1, 4, 4, 5, 3),
    gsSPNTriangles_5b(6, 5, 7, 8, 5, 6, 2, 5, 0, 0, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_hnw072_armtop_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(1, 9, 10, 11, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_hnw072_armL_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_hnw072_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_hnw072_arm_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_hnw072_v[33], 12, 0),
    gsSPNTrianglesInit_5b(6, 0, 1, 2, 3, 1, 4, 4, 5, 3),
    gsSPNTriangles_5b(6, 5, 7, 7, 1, 6, 2, 1, 8, 0, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_hnw072_armtop_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(1, 9, 10, 11, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_hnw072_base_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_hnw072_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_hnw072_b_back_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 124, 60),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_hnw072_v[57], 14, 0),
    gsSPNTrianglesInit_5b(3, 0, 1, 2, 2, 3, 0, 0, 4, 1),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 16, int_hnw072_b_front_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 252, 60),
    gsSPNTrianglesInit_5b(7, 5, 6, 7, 5, 8, 6, 8, 9, 6),
    gsSPNTriangles_5b(7, 10, 11, 11, 5, 7, 9, 8, 12, 9, 12, 13),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 cKF_ckcb_r_int_hnw072_tbl[] = { 0, 0, 2, 0, 7, 0, 7 };

s16 cKF_kn_int_hnw072_tbl[] = { 26, 12, 12, 27, 12, 12, 27 };

s16 cKF_c_int_hnw072_tbl[] = { 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, -900, 0, 0, -2700 };

s16 cKF_ds_int_hnw072_tbl[] = {
    1,  -300,  2022,  2,   -233,  2889,  3,  -107,  2889,  4,  -40,   389,   6,   -159,  -1778, 7,  -200,  194,
    8,  -146,  2333,  9,   -44,   2333,  10, 10,    194,   11, -31,   -1778, 12,  -109,  -1778, 13, -150,  194,
    14, -96,   2333,  15,  6,     2333,  16, 60,    194,   17, 19,    -1778, 18,  -59,   -1778, 19, -100,  194,
    20, -46,   2333,  21,  56,    2333,  22, 110,   -778,  23, 4,     -4556, 24,  -194,  -4556, 25, -300,  -1594,
    26, -300,  0,     129, -300,  0,     1,  -200,  1556,  2,  -148,  2222,  3,   -52,   2222,  4,  0,     778,
    5,  0,     0,     21,  0,     0,     22, 0,     -778,  23, -52,   -2222, 24,  -148,  -2222, 25, -200,  -778,
    26, -200,  0,     129, -200,  0,     1,  -450,  3500,  2,  -333,  5000,  3,   -117,  5000,  4,  0,     1750,
    5,  0,     0,     21,  0,     0,     22, 0,     -1750, 23, -117,  -5000, 24,  -333,  -5000, 25, -450,  -1750,
    26, -450,  0,     129, -450,  0,     1,  -250,  2722,  2,  -159,  3889,  3,   9,     3889,  4,  100,   583,
    5,  48,    -2222, 6,   -48,   -2222, 7,  -100,  0,     8,  -48,   2222,  9,   48,    2222,  10, 100,   0,
    11, 48,    -2222, 12,  -48,   -2222, 13, -100,  0,     14, -48,   2222,  15,  48,    2222,  16, 100,   0,
    17, 48,    -2222, 18,  -48,   -2222, 19, -100,  0,     20, -48,   2222,  21,  48,    2222,  22, 100,   -583,
    23, 9,     -3889, 24,  -159,  -3889, 25, -250,  -1361, 26, -250,  0,     129, -250,  0,     1,  -1600, -1556,
    2,  -1652, -2222, 3,   -1748, -2222, 4,  -1800, -778,  5,  -1800, 0,     21,  -1800, 0,     22, -1800, 778,
    23, -1748, 2222,  24,  -1652, 2222,  25, -1600, 778,   26, -1600, 0,     129, -1600, 0,     1,  -450,  3500,
    2,  -333,  5000,  3,   -117,  5000,  4,  0,     1750,  5,  0,     0,     21,  0,     0,     22, 0,     -1750,
    23, -117,  -5000, 24,  -333,  -5000, 25, -450,  -1750, 26, -450,  0,     129, -450,  0,     1,  250,   -2722,
    2,  159,   -3889, 3,   -9,    -3889, 4,  -100,  -583,  5,  -48,   2222,  6,   48,    2222,  7,  100,   0,
    8,  48,    -2222, 9,   -48,   -2222, 10, -100,  0,     11, -48,   2222,  12,  48,    2222,  13, 100,   0,
    14, 48,    -2222, 15,  -48,   -2222, 16, -100,  0,     17, -48,   2222,  18,  48,    2222,  19, 100,   0,
    20, 48,    -2222, 21,  -48,   -2222, 22, -100,  583,   23, -9,    3889,  24,  159,   3889,  25, 250,   1361,
    26, 250,   0,     129, 250,   0
};

cKF_Animation_R_c cKF_ba_r_int_hnw072 = {
    cKF_ckcb_r_int_hnw072_tbl, cKF_ds_int_hnw072_tbl, cKF_kn_int_hnw072_tbl, cKF_c_int_hnw072_tbl, -1, 129
};

cKF_Joint_R_c cKF_je_r_int_hnw072_tbl[] = { { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                            { int_hnw072_base_model, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                            { int_hnw072_chest_model, 2, cKF_JOINT_FLAG_DISP_OPA, { 1000, 0, 0 } },
                                            { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 700, 64836, 0 } },
                                            { int_hnw072_armL_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                            { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 700, 700, 0 } },
                                            { int_hnw072_armR_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } } };

cKF_Skeleton_R_c cKF_bs_r_int_hnw072 = { ARRAY_COUNT(cKF_je_r_int_hnw072_tbl), 4, cKF_je_r_int_hnw072_tbl };
