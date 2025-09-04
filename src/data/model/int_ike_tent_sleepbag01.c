#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

u16 int_ike_tent_sleepbag01_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_ike_tent_sleepbag01_pal.inc"
};

u8 int_ike_tent_sleepbag_side1_tex_txt[] = {
#include "assets/int_ike_tent_sleepbag_side1_tex_txt.inc"
};

u8 int_ike_tent_sleepbag_in1_tex_txt[] = {
#include "assets/int_ike_tent_sleepbag_in1_tex_txt.inc"
};

Vtx int_ike_tent_sleepbag01_v[] = {
#include "assets/int_ike_tent_sleepbag01_v.inc"
};

GFX_ARR_BEGIN(int_ike_tent_sleepbag01_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_ike_tent_sleepbag01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 32, int_ike_tent_sleepbag_side1_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_ike_tent_sleepbag01_v, 27, 0),
    gsSPNTrianglesInit_5b(31, 0, 1, 2, 3, 4, 5, 3, 5, 6),
    gsSPNTriangles_5b(7, 5, 8, 9, 10, 11, 2, 3, 6, 12, 11, 13),
    gsSPNTriangles_5b(6, 14, 2, 14, 6, 15, 11, 12, 16, 11, 16, 17),
    gsSPNTriangles_5b(11, 17, 9, 15, 6, 5, 7, 13, 18, 13, 11, 10),
    gsSPNTriangles_5b(9, 1, 0, 19, 15, 18, 13, 7, 12, 5, 7, 15),
    gsSPNTriangles_5b(16, 12, 8, 8, 12, 7, 8, 5, 4, 8, 4, 16),
    gsSPNTriangles_5b(0, 14, 19, 19, 10, 0, 19, 14, 15, 13, 10, 19),
    gsSPNTriangles_5b(2, 14, 0, 0, 10, 9, 18, 13, 19, 18, 15, 7),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_ike_tent_sleepbag_in1_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(6, 20, 21, 22, 23, 24, 20, 20, 24, 25),
    gsSPNTriangles_5b(26, 21, 20, 22, 23, 20, 25, 26, 20, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
