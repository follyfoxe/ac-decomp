#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

static u16 lat_letter01_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/dia_win/lat_letter01_pal.inc"
};

u8 dia_win_entry_tex[] ATTRIBUTE_ALIGN(32) = {
#include "assets/dia_win_entry_tex.inc"
};

static u8 lat_letter01_04_tex[] ATTRIBUTE_ALIGN(32) = {
#include "assets/dia_win/lat_letter01_04_tex.inc"
};

static u8 lat_tegami_fusen_tex[] ATTRIBUTE_ALIGN(32) = {
#include "assets/dia_win/lat_tegami_fusen_tex.inc"
};

u8 dia_win_april_tex_rgb_ia8[] = {
#include "assets/dia_win_april_tex_rgb_ia8.inc"
};

u8 dia_win_august_tex_rgb_ia8[] = {
#include "assets/dia_win_august_tex_rgb_ia8.inc"
};

u8 dia_win_december_tex_rgb_ia8[] = {
#include "assets/dia_win_december_tex_rgb_ia8.inc"
};

u8 dia_win_february_tex_rgb_ia8[] = {
#include "assets/dia_win_february_tex_rgb_ia8.inc"
};

u8 dia_win_january_tex_rgb_ia8[] = {
#include "assets/dia_win_january_tex_rgb_ia8.inc"
};

u8 dia_win_july_tex_rgb_ia8[] = {
#include "assets/dia_win_july_tex_rgb_ia8.inc"
};

u8 dia_win_june_tex_rgb_ia8[] = {
#include "assets/dia_win_june_tex_rgb_ia8.inc"
};

u8 dia_win_march_tex_rgb_ia8[] = {
#include "assets/dia_win_march_tex_rgb_ia8.inc"
};

u8 dia_win_may_tex_rgb_ia8[] = {
#include "assets/dia_win_may_tex_rgb_ia8.inc"
};

u8 dia_win_november_tex_rgb_ia8[] = {
#include "assets/dia_win_november_tex_rgb_ia8.inc"
};

u8 dia_win_october_tex_rgb_ia8[] = {
#include "assets/dia_win_october_tex_rgb_ia8.inc"
};

u8 dia_win_september_tex_rgb_ia8[] = {
#include "assets/dia_win_september_tex_rgb_ia8.inc"
};

Vtx dia_win_v[] = {
#include "assets/dia_win_v.inc"
};

GFX_ARR_BEGIN(dia_win_moji_model)
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0),
    gsDPSetPrimColor(0, 255, 50, 50, 115, 255),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 16, dia_win_entry_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(dia_win_v, 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(dia_win_wT_model)
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
    gsDPLoadTLUT_Dolphin(15, 16, 1, lat_letter01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, lat_letter01_04_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&dia_win_v[4], 15, 0),
    gsSPNTrianglesInit_5b(12, 0, 1, 2, 0, 3, 1, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 7, 9, 7, 6, 9, 2, 1, 10),
    gsSPNTriangles_5b(10, 11, 2, 10, 1, 12, 1, 13, 12, 1, 3, 13),
    gsSPNTriangles_5b(3, 14, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(dia_win_fusenT_model)
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, PRIMITIVE, PRIMITIVE, 0, TEXEL0, 0),
    gsDPSetPrimColor(0, 255, 100, 100, 135, 255),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 16, 16, lat_tegami_fusen_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(&dia_win_v[19], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(dia_win_tukiT_model)
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0, PRIMITIVE, ENVIRONMENT, TEXEL0,
                       ENVIRONMENT, 0, 0, 0, TEXEL0),
    gsDPSetPrimColor(0, 255, 30, 30, 90, 255),
    gsDPSetEnvColor(175, 205, 255, 255),
    gsSPVertex(&dia_win_v[23], 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
