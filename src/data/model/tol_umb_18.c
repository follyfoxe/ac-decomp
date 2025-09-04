#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx tol_umb_18_v[];
static u16 tol_umb18_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/tol_umb_18/tol_umb18_pal.inc"
};

static u8 tol_umb18_kasa1_tex_txt[] = {
#include "assets/tol_umb_18/tol_umb18_kasa1_tex_txt.inc"
};

static u8 tol_umb18_kasa2_tex_txt[] = {
#include "assets/tol_umb_18/tol_umb18_kasa2_tex_txt.inc"
};

static u8 tol_umb18_tuka_tex_txt[] = {
#include "assets/tol_umb_18/tol_umb18_tuka_tex_txt.inc"
};

Vtx tol_umb_18_v[] = {
#include "assets/tol_umb_18_v.inc"
};

GFX_ARR_BEGIN(kasa_umb18_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, tol_umb18_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, tol_umb18_kasa1_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(tol_umb_18_v, 30, 0),
    gsSPNTrianglesInit_5b(18, 0, 1, 2, 3, 1, 0, 0, 4, 3),
    gsSPNTriangles_5b(5, 6, 7, 5, 8, 9, 9, 6, 5, 10, 11, 12),
    gsSPNTriangles_5b(11, 13, 14, 14, 12, 11, 15, 16, 17, 18, 15, 19),
    gsSPNTriangles_5b(20, 21, 22, 23, 24, 25, 24, 26, 27, 21, 28, 29),
    gsSPNTriangles_5b(17, 19, 15, 29, 22, 21, 27, 25, 24, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(e_umb18_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, tol_umb18_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 8, 16, tol_umb18_kasa2_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&tol_umb_18_v[30], 27, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 0, 3, 1, 4, 5, 6),
    gsSPNTriangles_5b(4, 7, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, tol_umb18_tuka_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(15, 8, 9, 10, 9, 11, 10, 12, 13, 14),
    gsSPNTriangles_5b(13, 15, 14, 16, 17, 18, 19, 18, 20, 17, 16, 21),
    gsSPNTriangles_5b(22, 21, 11, 13, 23, 24, 13, 24, 25, 13, 25, 15),
    gsSPNTriangles_5b(20, 26, 19, 18, 19, 16, 21, 22, 17, 11, 9, 22),
    gsSPEndDisplayList(),
GFX_ARR_END
