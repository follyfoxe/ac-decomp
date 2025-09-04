#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_nog_beachbed_v[];
u16 int_nog_beachbed_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_nog_beachbed_pal.inc"
};

u8 int_nog_beachbed_body_tex[] = {
#include "assets/int_nog_beachbed_body_tex.inc"
};

u8 int_nog_beachbed_side_tex[] = {
#include "assets/int_nog_beachbed_side_tex.inc"
};

Vtx int_nog_beachbed_v[] = {
#include "assets/int_nog_beachbed_v.inc"
};

GFX_ARR_BEGIN(int_nog_beachbedT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_nog_beachbed_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_nog_beachbed_side_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_nog_beachbed_v, 28, 0),
    gsSPNTrianglesInit_5b(32, 0, 1, 2, 0, 3, 1, 0, 2, 4),
    gsSPNTriangles_5b(0, 4, 5, 5, 6, 3, 5, 3, 0, 2, 1, 7),
    gsSPNTriangles_5b(2, 7, 4, 6, 7, 1, 6, 1, 3, 4, 7, 5),
    gsSPNTriangles_5b(7, 6, 5, 8, 9, 10, 8, 10, 11, 9, 8, 12),
    gsSPNTriangles_5b(13, 9, 12, 14, 10, 9, 14, 9, 13, 12, 8, 11),
    gsSPNTriangles_5b(12, 11, 15, 15, 11, 10, 15, 10, 14, 15, 14, 13),
    gsSPNTriangles_5b(15, 13, 12, 16, 17, 18, 16, 18, 19, 20, 21, 17),
    gsSPNTriangles_5b(20, 17, 16, 22, 23, 24, 22, 24, 25, 26, 27, 23),
    gsSPNTriangles_5b(26, 23, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 32, int_nog_beachbed_body_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&int_nog_beachbed_v[28], 24, 0),
    gsSPNTrianglesInit_5b(36, 0, 1, 2, 0, 2, 3, 3, 2, 4),
    gsSPNTriangles_5b(3, 4, 5, 6, 7, 8, 6, 8, 9, 10, 11, 0),
    gsSPNTriangles_5b(10, 0, 3, 12, 10, 3, 12, 3, 5, 11, 13, 14),
    gsSPNTriangles_5b(11, 14, 0, 9, 8, 5, 9, 5, 4, 15, 16, 17),
    gsSPNTriangles_5b(15, 17, 14, 16, 18, 17, 19, 9, 4, 17, 18, 1),
    gsSPNTriangles_5b(18, 20, 1, 16, 21, 18, 21, 20, 18, 1, 20, 22),
    gsSPNTriangles_5b(1, 22, 2, 20, 21, 6, 20, 6, 22, 2, 19, 4),
    gsSPNTriangles_5b(2, 22, 19, 22, 6, 19, 6, 9, 19, 14, 17, 1),
    gsSPNTriangles_5b(14, 1, 0, 16, 15, 23, 16, 23, 21, 21, 23, 7),
    gsSPNTriangles_5b(21, 7, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
