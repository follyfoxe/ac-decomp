#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_nog_kingB_v[];
u16 int_nog_kingB_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_nog_kingB_pal.inc"
};

u8 int_nog_kingB_base_tex[] = {
#include "assets/int_nog_kingB_base_tex.inc"
};

u8 int_nog_kingB_circle_tex[] = {
#include "assets/int_nog_kingB_circle_tex.inc"
};

u8 int_nog_kingB_crown_tex[] = {
#include "assets/int_nog_kingB_crown_tex.inc"
};

Vtx int_nog_kingB_v[] = {
#include "assets/int_nog_kingB_v.inc"
};

GFX_ARR_BEGIN(int_nog_kingB_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_nog_kingB_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 16, int_nog_kingB_base_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_nog_kingB_v, 24, 0),
    gsSPNTrianglesInit_5b(18, 0, 1, 2, 3, 4, 5, 6, 7, 1),
    gsSPNTriangles_5b(8, 9, 10, 11, 12, 13, 14, 15, 9, 15, 6, 16),
    gsSPNTriangles_5b(17, 13, 4, 10, 16, 0, 18, 16, 19, 20, 21, 17),
    gsSPNTriangles_5b(16, 22, 23, 9, 23, 14, 21, 12, 11, 19, 9, 8),
    gsSPNTriangles_5b(1, 7, 22, 5, 20, 3, 2, 1, 18, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_nog_kingBT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_nog_kingB_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 16, int_nog_kingB_crown_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_nog_kingB_v[24], 32, 0),
    gsSPNTrianglesInit_5b(19, 0, 1, 2, 0, 3, 1, 4, 5, 0),
    gsSPNTriangles_5b(4, 0, 6, 7, 8, 9, 7, 10, 8, 8, 11, 4),
    gsSPNTriangles_5b(8, 4, 12, 13, 14, 15, 13, 16, 14, 17, 18, 13),
    gsSPNTriangles_5b(17, 13, 19, 14, 20, 21, 14, 22, 20, 20, 23, 7),
    gsSPNTriangles_5b(20, 7, 24, 25, 26, 27, 25, 27, 28, 29, 30, 31),
    gsSPVertex(&int_nog_kingB_v[56], 7, 0),
    gsSPNTrianglesInit_5b(1, 0, 1, 2, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_nog_kingB_circle_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(2, 3, 4, 5, 3, 5, 6, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
