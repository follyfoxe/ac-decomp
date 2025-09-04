#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_ike_nikki_wafu1_v[];
u16 int_ike_nikki_wafu1_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_ike_nikki_wafu1_pal.inc"
};

u8 int_ike_nikki_wafu1face_tex[] = {
#include "assets/int_ike_nikki_wafu1face_tex.inc"
};

u8 int_ike_nikki_wafu1side_tex[] = {
#include "assets/int_ike_nikki_wafu1side_tex.inc"
};

u8 int_ike_nikki_wafu1pen_tex[] = {
#include "assets/int_ike_nikki_wafu1pen_tex.inc"
};

Vtx int_ike_nikki_wafu1_v[] = {
#include "assets/int_ike_nikki_wafu1_v.inc"
};

GFX_ARR_BEGIN(int_ike_nikki_wafu1_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_ike_nikki_wafu1_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 8, int_ike_nikki_wafu1pen_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_ike_nikki_wafu1_v, 22, 0),
    gsSPNTrianglesInit_5b(28, 0, 1, 2, 0, 2, 3, 0, 3, 4),
    gsSPNTriangles_5b(0, 4, 5, 6, 1, 0, 6, 0, 7, 8, 2, 1),
    gsSPNTriangles_5b(8, 1, 6, 9, 3, 2, 9, 2, 8, 10, 4, 3),
    gsSPNTriangles_5b(10, 3, 9, 11, 5, 4, 11, 4, 10, 7, 0, 5),
    gsSPNTriangles_5b(7, 5, 11, 12, 13, 14, 12, 15, 16, 12, 16, 17),
    gsSPNTriangles_5b(13, 12, 18, 18, 12, 17, 15, 12, 14, 13, 19, 14),
    gsSPNTriangles_5b(19, 20, 14, 13, 18, 19, 18, 21, 19, 21, 16, 19),
    gsSPNTriangles_5b(16, 20, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 8, int_ike_nikki_wafu1side_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&int_ike_nikki_wafu1_v[22], 20, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_ike_nikki_wafu1face_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(2, 16, 17, 18, 16, 18, 19, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
