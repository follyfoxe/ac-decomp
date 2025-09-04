#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx logo_us_sing_v[];
static u16 logo_us_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/logo_us_sing/logo_us_pal.inc"
};

u8 logo_us_g_1_tex_txt[] = {
#include "assets/logo_us_g_1_tex_txt.inc"
};

u8 logo_us_g_2_tex_txt[] = {
#include "assets/logo_us_g_2_tex_txt.inc"
};

static u8 logo_us_n_tex_txt[] = {
#include "assets/logo_us_sing/logo_us_n_tex_txt.inc"
};

static u8 logo_us_i_tex_txt[] = {
#include "assets/logo_us_sing/logo_us_i_tex_txt.inc"
};

static u8 logo_us_s_tex_txt[] = {
#include "assets/logo_us_sing/logo_us_s_tex_txt.inc"
};

Vtx logo_us_sing_v[] = {
#include "assets/logo_us_sing_v.inc"
};

GFX_ARR_BEGIN(logo_us_zss_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, logo_us_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 48, 64, logo_us_s_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&logo_us_sing_v[16], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(logo_us_znn_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, logo_us_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 64, logo_us_n_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&logo_us_sing_v[8], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(logo_us_zii_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, logo_us_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 96, logo_us_i_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&logo_us_sing_v[12], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(logo_us_zgB_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, logo_us_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 32, logo_us_g_2_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&logo_us_sing_v[4], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(logo_us_zgA_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, logo_us_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 64, logo_us_g_1_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(logo_us_sing_v, 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

cKF_Joint_R_c cKF_je_r_logo_us_sing_tbl[] = { { NULL, 4, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                              { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 9000, 62411, 61036 } },
                                              { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                              { logo_us_zgA_model, 1, cKF_JOINT_FLAG_DISP_OPA, { 4500, 0, 0 } },
                                              { logo_us_zgB_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                              { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 3188, 62411, 61036 } },
                                              { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                              { logo_us_zii_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 4500, 0, 0 } },
                                              { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 5875, 62411, 61036 } },
                                              { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                              { logo_us_znn_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 4500, 0, 0 } },
                                              { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 1563, 62411, 61036 } },
                                              { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
                                              { logo_us_zss_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 4500, 0, 0 } } };

cKF_Skeleton_R_c cKF_bs_r_logo_us_sing = { ARRAY_COUNT(cKF_je_r_logo_us_sing_tbl), 5, cKF_je_r_logo_us_sing_tbl };
