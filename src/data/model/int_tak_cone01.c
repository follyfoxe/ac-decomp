#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_tak_cone01_v[];
static u16 int_tak_cone02_asi_tex_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_tak_cone01/int_tak_cone02_asi_tex_pal.inc"
};

u8 int_tak_cone01_asi_tex[] = {
#include "assets/int_tak_cone01_asi_tex.inc"
};

u8 int_tak_cone01_body_tex[] = {
#include "assets/int_tak_cone01_body_tex.inc"
};

u8 int_tak_cone01_top_tex[] = {
#include "assets/int_tak_cone01_top_tex.inc"
};

Vtx int_tak_cone01_v[] = {
#include "assets/int_tak_cone01_v.inc"
};

GFX_ARR_BEGIN(int_tak_cone01_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_tak_cone02_asi_tex_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_tak_cone01_asi_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_tak_cone01_v, 12, 0),
    gsSPNTrianglesInit_5b(10, 0, 1, 2, 0, 3, 1, 2, 4, 5),
    gsSPNTriangles_5b(2, 6, 4, 5, 0, 2, 5, 7, 0, 7, 8, 0),
    gsSPNTriangles_5b(7, 9, 8, 5, 10, 7, 5, 11, 10, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_tak_cone01_onT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_tak_cone02_asi_tex_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_tak_cone01_top_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_tak_cone01_v[12], 20, 0),
    gsSPNTrianglesInit_5b(1, 0, 1, 2, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_tak_cone01_body_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPNTrianglesInit_5b(8, 3, 4, 5, 4, 6, 7, 6, 8, 9),
    gsSPNTriangles_5b(8, 10, 11, 10, 12, 13, 12, 14, 15, 14, 16, 17),
    gsSPNTriangles_5b(18, 3, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
