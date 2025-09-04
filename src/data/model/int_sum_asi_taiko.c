#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_asi_taiko_v[];
u16 int_sum_asi_taiko_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_asi_taiko_pal.inc"
};

u8 int_sum_asi_taiko_side_tex[] = {
#include "assets/int_sum_asi_taiko_side_tex.inc"
};

u8 int_sum_asi_taiko_top_tex[] = {
#include "assets/int_sum_asi_taiko_top_tex.inc"
};

u8 int_sum_asi_taiko_bese_tex[] = {
#include "assets/int_sum_asi_taiko_bese_tex.inc"
};

Vtx int_sum_asi_taiko_v[] = {
#include "assets/int_sum_asi_taiko_v.inc"
};

GFX_ARR_BEGIN(int_sum_asi_taiko_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_asi_taiko_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_asi_taiko_top_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_asi_taiko_v, 8, 0),
    gsSPNTrianglesInit_5b(6, 0, 1, 2, 0, 3, 1, 4, 3, 0),
    gsSPNTriangles_5b(4, 5, 3, 6, 5, 4, 6, 7, 5, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_asi_taiko_onT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_asi_taiko_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_asi_taiko_bese_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_asi_taiko_v[8], 13, 0),
    gsSPNTrianglesInit_5b(6, 0, 1, 2, 3, 0, 4, 5, 3, 6),
    gsSPNTriangles_5b(7, 8, 9, 8, 10, 11, 10, 5, 12, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_asi_taiko_side_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPVertex(&int_sum_asi_taiko_v[21], 26, 0),
    gsSPNTrianglesInit_5b(24, 0, 1, 2, 3, 0, 2, 2, 1, 4),
    gsSPNTriangles_5b(5, 2, 6, 3, 2, 5, 7, 3, 5, 8, 9, 10),
    gsSPNTriangles_5b(11, 8, 10, 10, 9, 12, 9, 13, 14, 15, 13, 9),
    gsSPNTriangles_5b(8, 15, 9, 16, 11, 10, 16, 10, 17, 17, 10, 18),
    gsSPNTriangles_5b(1, 17, 19, 0, 16, 17, 0, 17, 1, 20, 21, 22),
    gsSPNTriangles_5b(20, 22, 23, 23, 22, 24, 22, 5, 25, 21, 7, 5),
    gsSPNTriangles_5b(21, 5, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
