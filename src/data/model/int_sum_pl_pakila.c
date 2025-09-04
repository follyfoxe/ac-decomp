#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_pl_pakila_v[];
u16 int_sum_pl_pakila_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_pl_pakila_pal.inc"
};

u8 int_sum_pl_pakila_hachi_tex[] = {
#include "assets/int_sum_pl_pakila_hachi_tex.inc"
};

u8 int_sum_pl_pakila_earth_tex[] = {
#include "assets/int_sum_pl_pakila_earth_tex.inc"
};

u8 int_sum_pl_pakila_kuki_tex[] = {
#include "assets/int_sum_pl_pakila_kuki_tex.inc"
};

u8 int_sum_pl_pakila_leaf_tex[] = {
#include "assets/int_sum_pl_pakila_leaf_tex.inc"
};

u8 int_sum_pl_pakila_wood_tex[] = {
#include "assets/int_sum_pl_pakila_wood_tex.inc"
};

Vtx int_sum_pl_pakila_v[] = {
#include "assets/int_sum_pl_pakila_v.inc"
};

GFX_ARR_BEGIN(int_sum_pl_pakila_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_pl_pakila_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_pl_pakila_earth_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_pl_pakila_v, 6, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 0, 3, 1, 4, 3, 0),
    gsSPNTriangles_5b(4, 5, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_pl_pakila_onT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_pl_pakila_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_sum_pl_pakila_wood_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_pl_pakila_v[6], 29, 0),
    gsSPNTrianglesInit_5b(3, 0, 1, 2, 3, 4, 2, 2, 5, 6),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 64, int_sum_pl_pakila_leaf_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(10, 7, 8, 9, 8, 10, 9, 10, 11, 9),
    gsSPNTriangles_5b(12, 13, 14, 15, 12, 14, 16, 15, 14, 17, 16, 14),
    gsSPNTriangles_5b(13, 17, 14, 11, 18, 9, 18, 7, 9, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_pl_pakila_kuki_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(4, 19, 20, 21, 22, 23, 24, 22, 25, 26),
    gsSPNTriangles_5b(19, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_pl_pakila_hachi_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&int_sum_pl_pakila_v[35], 20, 0),
    gsSPNTrianglesInit_5b(18, 0, 1, 2, 3, 4, 5, 6, 3, 5),
    gsSPNTriangles_5b(7, 4, 3, 3, 6, 8, 3, 8, 9, 10, 3, 9),
    gsSPNTriangles_5b(11, 12, 13, 14, 15, 13, 12, 14, 13, 16, 9, 12),
    gsSPNTriangles_5b(14, 12, 9, 14, 9, 8, 17, 1, 13, 17, 13, 15),
    gsSPNTriangles_5b(18, 13, 1, 1, 17, 19, 1, 19, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
