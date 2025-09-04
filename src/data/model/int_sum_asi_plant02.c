#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_asi_plant02_v[];
u16 int_sum_asi_plant02_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_asi_plant02_pal.inc"
};

u8 int_sum_asi_plant02_bin_tex[] = {
#include "assets/int_sum_asi_plant02_bin_tex.inc"
};

u8 int_sum_asi_plant02_tuchi_tex[] = {
#include "assets/int_sum_asi_plant02_tuchi_tex.inc"
};

u8 int_sum_asi_plant02_leaf_tex[] = {
#include "assets/int_sum_asi_plant02_leaf_tex.inc"
};

u8 int_sum_asi_plant02_miki_tex[] = {
#include "assets/int_sum_asi_plant02_miki_tex.inc"
};

u8 int_sum_asi_plant02_kuki_tex[] = {
#include "assets/int_sum_asi_plant02_kuki_tex.inc"
};

Vtx int_sum_asi_plant02_v[] = {
#include "assets/int_sum_asi_plant02_v.inc"
};

GFX_ARR_BEGIN(int_sum_asi_plant02_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_asi_plant02_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_asi_plant02_kuki_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_asi_plant02_v, 21, 0),
    gsSPNTrianglesInit_5b(5, 0, 1, 2, 3, 4, 5, 6, 7, 8),
    gsSPNTriangles_5b(9, 10, 11, 12, 13, 14, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_asi_plant02_tuchi_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(4, 15, 16, 17, 18, 16, 15, 18, 19, 16),
    gsSPNTriangles_5b(15, 17, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_asi_plant02_onT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_asi_plant02_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_asi_plant02_miki_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_asi_plant02_v[21], 29, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 3, 4, 2, 5, 6, 7),
    gsSPNTriangles_5b(8, 9, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 48, int_sum_asi_plant02_leaf_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(9, 10, 11, 12, 10, 13, 11, 14, 15, 16),
    gsSPNTriangles_5b(17, 14, 16, 18, 19, 20, 19, 21, 20, 22, 23, 24),
    gsSPNTriangles_5b(25, 22, 24, 26, 27, 28, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_asi_plant02_bin_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&int_sum_asi_plant02_v[50], 20, 0),
    gsSPNTrianglesInit_5b(18, 0, 1, 2, 3, 1, 4, 4, 0, 5),
    gsSPNTriangles_5b(4, 5, 6, 7, 4, 6, 8, 9, 10, 11, 8, 10),
    gsSPNTriangles_5b(12, 9, 8, 8, 11, 13, 8, 13, 14, 15, 8, 14),
    gsSPNTriangles_5b(16, 17, 1, 18, 2, 1, 17, 18, 1, 19, 14, 17),
    gsSPNTriangles_5b(18, 17, 14, 18, 14, 13, 0, 4, 1, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
