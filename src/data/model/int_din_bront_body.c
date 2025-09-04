#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_din_bront_body_v[];
static u16 int_din_bront_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_din_bront_body/int_din_bront_pal.inc"
};

u8 int_din_bront_body_tex[] = {
#include "assets/int_din_bront_body_tex.inc"
};

u8 int_din_bront_leg_tex[] = {
#include "assets/int_din_bront_leg_tex.inc"
};

u8 int_din_bront_shin_tex[] = {
#include "assets/int_din_bront_shin_tex.inc"
};

u8 int_din_bront_thigh_tex[] = {
#include "assets/int_din_bront_thigh_tex.inc"
};

u8 int_din_bront_baceB_tex[] = {
#include "assets/int_din_bront_baceB_tex.inc"
};

Vtx int_din_bront_body_v[] = {
#include "assets/int_din_bront_body_v.inc"
};

GFX_ARR_BEGIN(int_din_bront_body_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_din_bront_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_din_bront_baceB_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_din_bront_body_v, 8, 0),
    gsSPNTrianglesInit_5b(10, 0, 1, 2, 0, 2, 3, 2, 4, 5),
    gsSPNTriangles_5b(2, 5, 3, 3, 5, 6, 3, 6, 0, 0, 6, 7),
    gsSPNTriangles_5b(0, 7, 1, 1, 7, 4, 1, 4, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_din_bront_bodyT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_din_bront_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 16, int_din_bront_thigh_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_din_bront_body_v[8], 18, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 2, 3, 0, 4, 5, 6),
    gsSPNTriangles_5b(6, 7, 4, 8, 9, 10, 10, 11, 8, 12, 13, 14),
    gsSPNTriangles_5b(15, 16, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 16, int_din_bront_shin_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&int_din_bront_body_v[26], 16, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 2, 3, 0, 4, 5, 6),
    gsSPNTriangles_5b(6, 7, 4, 8, 9, 10, 10, 11, 8, 12, 13, 14),
    gsSPNTriangles_5b(14, 15, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_din_bront_leg_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&int_din_bront_body_v[42], 29, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 3, 1, 0, 4, 5, 6),
    gsSPNTriangles_5b(7, 5, 4, 8, 9, 10, 11, 9, 8, 12, 13, 14),
    gsSPNTriangles_5b(15, 13, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 48, int_din_bront_body_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(15, 16, 17, 18, 16, 18, 19, 20, 21, 22),
    gsSPNTriangles_5b(20, 22, 23, 24, 21, 18, 17, 16, 25, 26, 23, 22),
    gsSPNTriangles_5b(17, 25, 27, 17, 27, 24, 22, 24, 27, 26, 22, 27),
    gsSPNTriangles_5b(17, 24, 18, 21, 24, 22, 27, 25, 28, 27, 28, 26),
    gsSPEndDisplayList(),
GFX_ARR_END
