#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_din_stego_tail_v[];
static u16 int_din_stego_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_din_stego_tail/int_din_stego_pal.inc"
};

static u8 int_din_stego_fin_tex[] = {
#include "assets/int_din_stego_tail/int_din_stego_fin_tex.inc"
};

u8 int_din_stego_kubi2C_tex[] = {
#include "assets/int_din_stego_kubi2C_tex.inc"
};

u8 int_din_stego_baceC_tex[] = {
#include "assets/int_din_stego_baceC_tex.inc"
};

u8 int_din_stego_poleC_tex[] = {
#include "assets/int_din_stego_poleC_tex.inc"
};

Vtx int_din_stego_tail_v[] = {
#include "assets/int_din_stego_tail_v.inc"
};

GFX_ARR_BEGIN(int_din_stego_tail_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_din_stego_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_din_stego_baceC_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_din_stego_tail_v, 8, 0),
    gsSPNTrianglesInit_5b(10, 0, 1, 2, 0, 2, 3, 4, 5, 0),
    gsSPNTriangles_5b(4, 0, 3, 5, 6, 1, 5, 1, 0, 3, 2, 7),
    gsSPNTriangles_5b(3, 7, 4, 4, 7, 6, 4, 6, 5, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_din_stego_tailT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_din_stego_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_din_stego_poleC_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_din_stego_tail_v[8], 10, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 3, 1, 4, 5, 6, 7),
    gsSPNTriangles_5b(8, 6, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_din_stego_kubi2C_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&int_din_stego_tail_v[18], 32, 0),
    gsSPNTrianglesInit_5b(18, 0, 1, 2, 3, 1, 0, 2, 4, 5),
    gsSPNTriangles_5b(6, 7, 8, 9, 10, 11, 9, 11, 12, 10, 13, 14),
    gsSPNTriangles_5b(10, 14, 11, 15, 16, 17, 15, 17, 18, 19, 20, 21),
    gsSPNTriangles_5b(19, 21, 22, 23, 7, 6, 24, 25, 26, 26, 25, 27),
    gsSPNTriangles_5b(5, 4, 3, 28, 29, 30, 28, 30, 31, 0, 0, 0),
    gsSPVertex(&int_din_stego_tail_v[50], 10, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_din_stego_fin_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(2, 4, 5, 6, 7, 8, 9, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
