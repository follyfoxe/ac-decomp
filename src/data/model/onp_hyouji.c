#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

u8 onp_win_q_tex_rgb_i4[] ATTRIBUTE_ALIGN(32) = {
#include "assets/onp_win_q_tex_rgb_i4.inc"
};

u8 onp_win_a_tex_rgb_i4[] = {
#include "assets/onp_win_a_tex_rgb_i4.inc"
};

u8 onp_win_b_tex_rgb_i4[] = {
#include "assets/onp_win_b_tex_rgb_i4.inc"
};

u8 onp_win_c_tex_rgb_i4[] = {
#include "assets/onp_win_c_tex_rgb_i4.inc"
};

u8 onp_win_d_tex_rgb_i4[] = {
#include "assets/onp_win_d_tex_rgb_i4.inc"
};

u8 onp_win_e_tex_rgb_i4[] = {
#include "assets/onp_win_e_tex_rgb_i4.inc"
};

u8 onp_win_f_tex_rgb_i4[] = {
#include "assets/onp_win_f_tex_rgb_i4.inc"
};

u8 onp_win_g_tex_rgb_i4[] = {
#include "assets/onp_win_g_tex_rgb_i4.inc"
};

u8 onp_win_bou1_tex[] = {
#include "assets/onp_win_bou1_tex.inc"
};

u8 onp_win_shimari_tex_rgb_ia8[] = {
#include "assets/onp_win_shimari_tex_rgb_ia8.inc"
};

u8 onp_win_test10_tex_rgb_ia8[] = {
#include "assets/onp_win_test10_tex_rgb_ia8.inc"
};

u8 onp_win_test11_tex_rgb_ia8[] = {
#include "assets/onp_win_test11_tex_rgb_ia8.inc"
};

u8 onp_win_test1_tex_rgb_ia8[] = {
#include "assets/onp_win_test1_tex_rgb_ia8.inc"
};

u8 onp_win_test2_tex_rgb_ia8[] = {
#include "assets/onp_win_test2_tex_rgb_ia8.inc"
};

u8 onp_win_test5_tex_rgb_ia8[] = {
#include "assets/onp_win_test5_tex_rgb_ia8.inc"
};

u8 onp_win_test3_tex_rgb_ia8[] = {
#include "assets/onp_win_test3_tex_rgb_ia8.inc"
};

u8 onp_win_onpu8_tex_rgb_i4[] = {
#include "assets/onp_win_onpu8_tex_rgb_i4.inc"
};

u8 onp_win_z_tex_rgb_i4[] = {
#include "assets/onp_win_z_tex_rgb_i4.inc"
};

static Vtx onp_hyouji_v[] = {
#include "assets/onp_hyouji/onp_hyouji_v.inc"
};

GFX_ARR_BEGIN(onp_hyouji_waku1T_model)
    gsDPSetTextureImage_Dolphin(G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, anime_1_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 0, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(onp_hyouji_v, 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(onp_hyouji_waku2T_model)
    gsDPSetTextureImage_Dolphin(G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, anime_1_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 0, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(&onp_hyouji_v[4], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(onp_hyouji_waku3T_model)
    gsDPSetTextureImage_Dolphin(G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, anime_1_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 0, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(&onp_hyouji_v[8], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(onp_hyouji_waku4T_model)
    gsDPSetTextureImage_Dolphin(G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, anime_1_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 0, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(&onp_hyouji_v[12], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 3, 1, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(onp_hyouji_bouT_model)
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 16, 16, onp_win_bou1_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&onp_hyouji_v[20], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(onp_hyouji_moji1T_model)
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 16, 16, anime_2_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&onp_hyouji_v[16], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(onp_hyouji_waku_mode)
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0, PRIMITIVE, ENVIRONMENT, TEXEL0,
                       ENVIRONMENT, 0, 0, 0, TEXEL0),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(onp_hyouji_moji_mode)
    gsDPPipeSync(),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsSPEndDisplayList(),
GFX_ARR_END
