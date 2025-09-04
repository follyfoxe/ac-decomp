#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

u16 inv_mushi_nuno_tex_rgb_ci4_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/inv_mushi_nuno_tex_rgb_ci4_pal.inc"
};

static u16 inv_mushi_w5_tex_rgb_ci4_pal[] = {
#include "assets/inv_mushi/inv_mushi_w5_tex_rgb_ci4_pal.inc"
};

static u16 inv_mushi_w1_tex_rgb_ci4_pal[] = {
#include "assets/inv_mushi/inv_mushi_w1_tex_rgb_ci4_pal.inc"
};

static u16 inv_mushi_w2_tex_rgb_ci4_pal[] = {
#include "assets/inv_mushi/inv_mushi_w2_tex_rgb_ci4_pal.inc"
};

static u16 inv_mushi_w3_tex_rgb_ci4_pal[] = {
#include "assets/inv_mushi/inv_mushi_w3_tex_rgb_ci4_pal.inc"
};

static u16 inv_mushi_w4_tex_rgb_ci4_pal[] = {
#include "assets/inv_mushi/inv_mushi_w4_tex_rgb_ci4_pal.inc"
};

static u16 inv_mushi_w6_tex_rgb_ci4_pal[] = {
#include "assets/inv_mushi/inv_mushi_w6_tex_rgb_ci4_pal.inc"
};

static u16 inv_mushi_w7_tex_rgb_ci4_pal[] = {
#include "assets/inv_mushi/inv_mushi_w7_tex_rgb_ci4_pal.inc"
};

static u8 inv_mwin_nwaku_tex[] = {
#include "assets/inv_mushi/inv_mwin_nwaku_tex.inc"
};

u8 inv_mwin_shirushi1_tex[] = {
#include "assets/inv_mwin_shirushi1_tex.inc"
};

static u8 inv_mwin_shirushi_tex[] = {
#include "assets/inv_mushi/inv_mwin_shirushi_tex.inc"
};

static u8 inv_mushi_aw1_tex[] = {
#include "assets/inv_mushi/inv_mushi_aw1_tex.inc"
};

static u8 inv_mushi_aw2_tex[] = {
#include "assets/inv_mushi/inv_mushi_aw2_tex.inc"
};

static u8 inv_mushi_aw3_tex[] = {
#include "assets/inv_mushi/inv_mushi_aw3_tex.inc"
};

static u8 inv_mushi_aw4_tex[] = {
#include "assets/inv_mushi/inv_mushi_aw4_tex.inc"
};

u8 inv_mushi_waku2_tex[] = {
#include "assets/inv_mushi_waku2_tex.inc"
};

static u8 inv_mushi_aw7_tex[] = {
#include "assets/inv_mushi/inv_mushi_aw7_tex.inc"
};

u8 inv_mushi_moji_tex[] = {
#include "assets/inv_mushi_moji_tex.inc"
};

u8 inv_mushi_aw5_tex[] = {
#include "assets/inv_mushi_aw5_tex.inc"
};

u8 inv_mushi_nuno_tex_rgb_ci4[] = {
#include "assets/inv_mushi_nuno_tex_rgb_ci4.inc"
};

static u8 inv_mushi_w5_tex_rgb_ci4[] = {
#include "assets/inv_mushi/inv_mushi_w5_tex_rgb_ci4.inc"
};

static u8 inv_mushi_w1_tex_rgb_ci4[] = {
#include "assets/inv_mushi/inv_mushi_w1_tex_rgb_ci4.inc"
};

static u8 inv_mushi_w2_tex_rgb_ci4[] = {
#include "assets/inv_mushi/inv_mushi_w2_tex_rgb_ci4.inc"
};

static u8 inv_mushi_w3_tex_rgb_ci4[] = {
#include "assets/inv_mushi/inv_mushi_w3_tex_rgb_ci4.inc"
};

static u8 inv_mushi_w4_tex_rgb_ci4[] = {
#include "assets/inv_mushi/inv_mushi_w4_tex_rgb_ci4.inc"
};

static u8 inv_mushi_w6_tex_rgb_ci4[] = {
#include "assets/inv_mushi/inv_mushi_w6_tex_rgb_ci4.inc"
};

static u8 inv_mushi_w7_tex_rgb_ci4[] = {
#include "assets/inv_mushi/inv_mushi_w7_tex_rgb_ci4.inc"
};

Vtx inv_mushi_v[] = {
#include "assets/inv_mushi_v.inc"
};

GFX_ARR_BEGIN(inv_mushi_w14_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w5_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, inv_mushi_w5_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(inv_mushi_v, 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_moji_model)
    gsDPSetPrimColor(0, 255, 255, 235, 235, 255),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 80, 16, inv_mushi_moji_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&inv_mushi_v[4], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w1T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w1_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, inv_mushi_w1_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[8], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w2T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w3_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 32, inv_mushi_w3_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[12], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w3T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w4_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, inv_mushi_w4_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[16], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 3, 0, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w4T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w3_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 32, inv_mushi_w3_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[20], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w5T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w1_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, inv_mushi_w1_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[24], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 3, 0, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w6T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w7_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 64, inv_mushi_w7_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[28], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w7T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w6_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 64, inv_mushi_w6_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[32], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w8T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w1_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, inv_mushi_w1_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[36], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 3, 0, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w9T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w3_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 32, inv_mushi_w3_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[40], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 3, 0, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w10T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w4_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, inv_mushi_w4_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[44], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w11T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w3_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 32, inv_mushi_w3_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[48], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 3, 0, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w12T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w1_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, inv_mushi_w1_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[52], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_w13T_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mushi_w2_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 64, inv_mushi_w2_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[56], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_waku2T_model)
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0),
    gsDPSetPrimColor(0, 255, 185, 40, 40, 255),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 64, inv_mwin_shirushi_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[60], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_ueT_model)
    gsDPSetPrimColor(0, 255, 255, 195, 195, 255),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 16, 16, inv_mushi_aw5_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[64], 18, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 64, inv_mushi_aw7_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(4, 4, 5, 6, 4, 6, 7, 7, 8, 9),
    gsSPNTriangles_5b(7, 6, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, inv_mushi_aw4_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(4, 10, 11, 12, 11, 13, 12, 14, 15, 16),
    gsSPNTriangles_5b(17, 14, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 64, 32, inv_mushi_aw3_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[82], 22, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 1, 3, 2, 4, 5, 6),
    gsSPNTriangles_5b(5, 7, 6, 8, 9, 10, 9, 11, 10, 12, 13, 14),
    gsSPNTriangles_5b(13, 15, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 64, inv_mushi_aw2_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(4, 16, 17, 18, 16, 19, 17, 20, 19, 16),
    gsSPNTriangles_5b(20, 21, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, inv_mushi_aw1_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[104], 25, 0),
    gsSPNTrianglesInit_5b(14, 0, 1, 2, 0, 3, 1, 3, 4, 5),
    gsSPNTriangles_5b(3, 6, 4, 7, 8, 9, 9, 10, 7, 11, 12, 13),
    gsSPNTriangles_5b(13, 14, 11, 15, 16, 17, 16, 18, 17, 19, 20, 21),
    gsSPNTriangles_5b(19, 16, 20, 22, 23, 24, 23, 0, 24, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_ue2T_model)
    gsDPSetPrimColor(0, 255, 255, 195, 195, 255),
    gsDPSetEnvColor(185, 100, 190, 255),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, inv_mwin_nwaku_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 0, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[129], 7, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 0, 4, 5, 6),
    gsSPNTriangles_5b(6, 2, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_daimeiT_model)
    gsDPSetPrimColor(0, 255, 145, 40, 40, 255),
    gsDPSetEnvColor(235, 60, 60, 255),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, inv_mushi_waku2_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 0, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[136], 6, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 1, 3, 2, 2, 3, 4),
    gsSPNTriangles_5b(3, 5, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_shirushiT_model)
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0),
    gsDPSetPrimColor(0, 255, 255, 225, 225, 255),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, inv_mwin_shirushi1_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&inv_mushi_v[142], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_scroll_mode)
    gsDPLoadTLUT_Dolphin(14, 16, 1, inv_mushi_nuno_tex_rgb_ci4_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, inv_mushi_nuno_tex_rgb_ci4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 14, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_model)
    gsSPDisplayList(inv_mushi_w1T_model),
    gsSPDisplayList(inv_mushi_w2T_model),
    gsSPDisplayList(inv_mushi_w3T_model),
    gsSPDisplayList(inv_mushi_w4T_model),
    gsSPDisplayList(inv_mushi_w5T_model),
    gsSPDisplayList(inv_mushi_w6T_model),
    gsSPDisplayList(inv_mushi_w7T_model),
    gsSPDisplayList(inv_mushi_w8T_model),
    gsSPDisplayList(inv_mushi_w9T_model),
    gsSPDisplayList(inv_mushi_w10T_model),
    gsSPDisplayList(inv_mushi_w11T_model),
    gsSPDisplayList(inv_mushi_w12T_model),
    gsSPDisplayList(inv_mushi_w13T_model),
    gsSPDisplayList(inv_mushi_w14_model),
    gsSPDisplayList(inv_mushi_waku2T_model),
    gsSPDisplayList(inv_mushi_ueT_model),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0, PRIMITIVE, ENVIRONMENT, TEXEL0,
                       ENVIRONMENT, 0, 0, 0, TEXEL0),
    gsDPSetRenderMode(G_RM_CLD_SURF, G_RM_CLD_SURF2),
    gsSPDisplayList(inv_mushi_ue2T_model),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsSPDisplayList(inv_mushi_daimeiT_model),
    gsSPDisplayList(inv_mushi_shirushiT_model),
    gsSPDisplayList(inv_mushi_moji_model),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(inv_mushi_part_model)
    gsSPDisplayList(inv_mushi_waku2T_model),
    gsSPDisplayList(inv_mushi_shirushiT_model),
    gsSPEndDisplayList(),
GFX_ARR_END
