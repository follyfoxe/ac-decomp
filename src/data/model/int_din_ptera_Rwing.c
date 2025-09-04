#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_din_ptera_Rwing_v[];
static u16 int_din_ptera_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_din_ptera_Rwing/int_din_ptera_pal.inc"
};

static u8 int_din_ptera_baceA_tex[] = {
#include "assets/int_din_ptera_Rwing/int_din_ptera_baceA_tex.inc"
};

static u8 int_din_ptera_poleA_tex[] = {
#include "assets/int_din_ptera_Rwing/int_din_ptera_poleA_tex.inc"
};

u8 int_din_ptera_Rleg_tex[] = {
#include "assets/int_din_ptera_Rleg_tex.inc"
};

u8 int_din_ptera_Rthigh_tex[] = {
#include "assets/int_din_ptera_Rthigh_tex.inc"
};

static u8 int_din_ptera_Lwing_tex[] = {
#include "assets/int_din_ptera_Rwing/int_din_ptera_Lwing_tex.inc"
};

Vtx int_din_ptera_Rwing_v[] = {
#include "assets/int_din_ptera_Rwing_v.inc"
};

GFX_ARR_BEGIN(int_din_ptera_Rwing_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_din_ptera_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_din_ptera_baceA_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_din_ptera_Rwing_v, 8, 0),
    gsSPNTrianglesInit_5b(10, 0, 1, 2, 0, 2, 3, 0, 3, 4),
    gsSPNTriangles_5b(0, 4, 5, 3, 2, 6, 3, 6, 4, 5, 7, 1),
    gsSPNTriangles_5b(5, 1, 0, 4, 6, 7, 4, 7, 5, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_din_ptera_RwingT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_din_ptera_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 8, int_din_ptera_Lwing_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_din_ptera_Rwing_v[8], 17, 0),
    gsSPNTrianglesInit_5b(10, 0, 1, 2, 3, 2, 4, 2, 1, 4),
    gsSPNTriangles_5b(3, 5, 2, 3, 6, 5, 7, 6, 8, 7, 8, 9),
    gsSPNTriangles_5b(9, 10, 11, 7, 9, 11, 12, 10, 9, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 16, int_din_ptera_Rthigh_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(2, 13, 14, 15, 15, 16, 13, 0, 0, 0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_din_ptera_Rleg_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_din_ptera_Rwing_v[25], 3, 0),
    gsSPNTrianglesInit_5b(1, 0, 1, 2, 0, 0, 0, 0, 0, 0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_din_ptera_poleA_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_din_ptera_Rwing_v[28], 5, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 3, 1, 4, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
