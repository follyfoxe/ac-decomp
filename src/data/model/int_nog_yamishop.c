#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_nog_yamishop_v[];
u16 int_nog_yamishop_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_nog_yamishop_pal.inc"
};

u8 int_nog_yamishop_body_tex[] = {
#include "assets/int_nog_yamishop_body_tex.inc"
};

u8 int_nog_yamishop_grass_tex[] = {
#include "assets/int_nog_yamishop_grass_tex.inc"
};

Vtx int_nog_yamishop_v[] = {
#include "assets/int_nog_yamishop_v.inc"
};

GFX_ARR_BEGIN(int_nog_yamishop_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_nog_yamishop_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_nog_yamishop_grass_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_nog_yamishop_v, 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_nog_yamishop_onT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_nog_yamishop_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 64, int_nog_yamishop_body_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_nog_yamishop_v[4], 32, 0),
    gsSPNTrianglesInit_5b(25, 0, 1, 2, 1, 3, 2, 1, 4, 3),
    gsSPNTriangles_5b(0, 5, 1, 5, 6, 1, 6, 4, 1, 7, 8, 9),
    gsSPNTriangles_5b(7, 9, 10, 11, 12, 13, 11, 13, 14, 15, 16, 17),
    gsSPNTriangles_5b(16, 18, 17, 15, 19, 16, 17, 12, 11, 17, 18, 12),
    gsSPNTriangles_5b(20, 21, 19, 20, 19, 15, 22, 23, 24, 22, 24, 25),
    gsSPNTriangles_5b(26, 6, 5, 0, 27, 5, 3, 28, 2, 4, 29, 3),
    gsSPNTriangles_5b(29, 30, 3, 30, 31, 3, 0, 0, 0, 0, 0, 0),
    gsSPVertex(&int_nog_yamishop_v[36], 16, 0),
    gsSPNTrianglesInit_5b(10, 0, 1, 2, 1, 3, 2, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 4, 7, 8, 4, 8, 9, 10, 11, 12),
    gsSPNTriangles_5b(10, 12, 13, 10, 13, 14, 10, 14, 15, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_nog_yamishop_offT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, anime_1_txt),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 64, int_nog_yamishop_body_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_nog_yamishop_v[52], 9, 0),
    gsSPNTrianglesInit_5b(5, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(6, 7, 8, 4, 6, 8, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
