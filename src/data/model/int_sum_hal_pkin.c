#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_hal_pkin_v[];
u16 int_sum_hal_pkin_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_hal_pkin_pal.inc"
};

u8 int_sum_hal_pkin_front_tex[] = {
#include "assets/int_sum_hal_pkin_front_tex.inc"
};

u8 int_sum_hal_pkin_back_tex[] = {
#include "assets/int_sum_hal_pkin_back_tex.inc"
};

u8 int_sum_hal_pkin_kuki_tex[] = {
#include "assets/int_sum_hal_pkin_kuki_tex.inc"
};

u8 int_sum_hal_pkin_kukitop_tex[] = {
#include "assets/int_sum_hal_pkin_kukitop_tex.inc"
};

Vtx int_sum_hal_pkin_v[] = {
#include "assets/int_sum_hal_pkin_v.inc"
};

GFX_ARR_BEGIN(int_sum_hal_pkin_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_hal_pkin_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_hal_pkin_kukitop_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_hal_pkin_v, 11, 0),
    gsSPNTrianglesInit_5b(1, 0, 1, 2, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_hal_pkin_kuki_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(6, 3, 4, 5, 3, 5, 6, 7, 8, 5),
    gsSPNTriangles_5b(4, 7, 5, 9, 10, 8, 7, 9, 8, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_hal_pkin_onT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_hal_pkin_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 48, 32, int_sum_hal_pkin_back_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_hal_pkin_v[11], 17, 0),
    gsSPNTrianglesInit_5b(15, 0, 1, 2, 1, 3, 2, 1, 4, 3),
    gsSPNTriangles_5b(2, 3, 5, 6, 4, 0, 7, 8, 9, 8, 2, 9),
    gsSPNTriangles_5b(8, 0, 2, 9, 2, 10, 11, 0, 7, 12, 7, 13),
    gsSPNTriangles_5b(14, 9, 15, 13, 16, 14, 16, 9, 14, 16, 7, 9),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 48, 32, int_sum_hal_pkin_front_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&int_sum_hal_pkin_v[28], 17, 0),
    gsSPNTrianglesInit_5b(15, 0, 1, 2, 3, 4, 5, 2, 6, 3),
    gsSPNTriangles_5b(6, 4, 3, 6, 1, 4, 7, 8, 1, 4, 9, 10),
    gsSPNTriangles_5b(1, 11, 4, 11, 9, 4, 11, 8, 9, 8, 12, 9),
    gsSPNTriangles_5b(12, 13, 9, 12, 14, 13, 9, 13, 15, 16, 14, 8),
    gsSPEndDisplayList(),
GFX_ARR_END
