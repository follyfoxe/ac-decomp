#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern u8 earth_pal_dummy[];
extern u8 beach_pal_dummy2[];
u8 ef_anahori01_00_tex[] ATTRIBUTE_ALIGN(32) = {
#include "assets/ef_anahori01_00_tex.inc"
};

Vtx ef_anahori01_00_v[] = {
#include "assets/ef_anahori01_00_v.inc"
};

GFX_ARR_BEGIN(ef_anahori01_00_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, earth_pal_dummy),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, ef_anahori01_00_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(ef_anahori01_00_v, 12, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 0, 3, 1, 3, 4, 1),
    gsSPNTriangles_5b(4, 2, 1, 5, 6, 7, 5, 8, 6, 8, 9, 6),
    gsSPNTriangles_5b(9, 7, 6, 4, 3, 9, 4, 9, 8, 10, 4, 8),
    gsSPNTriangles_5b(8, 5, 10, 10, 5, 11, 11, 5, 7, 3, 11, 7),
    gsSPNTriangles_5b(3, 7, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 ef_anahori01_01_tex[] ATTRIBUTE_ALIGN(32) = {
#include "assets/ef_anahori01_01_tex.inc"
};

Vtx ef_anahori01_01_v[] = {
#include "assets/ef_anahori01_01_v.inc"
};

GFX_ARR_BEGIN(ef_anahori01_01_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, earth_pal_dummy),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, ef_anahori01_01_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(ef_anahori01_01_v, 12, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 0, 3, 1, 3, 4, 1),
    gsSPNTriangles_5b(4, 2, 1, 5, 6, 7, 5, 8, 6, 8, 9, 6),
    gsSPNTriangles_5b(9, 7, 6, 4, 3, 9, 4, 9, 8, 10, 4, 8),
    gsSPNTriangles_5b(8, 5, 10, 10, 5, 11, 11, 5, 7, 3, 11, 7),
    gsSPNTriangles_5b(3, 7, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

Vtx ef_anahori01_02_v[] = {
#include "assets/ef_anahori01_02_v.inc"
};

GFX_ARR_BEGIN(ef_anahori01_02_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, beach_pal_dummy2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, ef_anahori01_01_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(ef_anahori01_02_v, 12, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 0, 3, 1, 3, 4, 1),
    gsSPNTriangles_5b(4, 2, 1, 5, 6, 7, 5, 8, 6, 8, 9, 6),
    gsSPNTriangles_5b(9, 7, 6, 4, 3, 9, 4, 9, 8, 10, 4, 8),
    gsSPNTriangles_5b(8, 5, 10, 10, 5, 11, 11, 5, 7, 3, 11, 7),
    gsSPNTriangles_5b(3, 7, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u16 obj_hole_pal[] = {
#include "assets/obj_hole_pal.inc"
};

u8 ef_anahori02_01_tex[] = {
#include "assets/ef_anahori02_01_tex.inc"
};

u8 ef_anahori02_02_tex[] = {
#include "assets/ef_anahori02_02_tex.inc"
};

u8 ef_anahori02_03_tex[] = {
#include "assets/ef_anahori02_03_tex.inc"
};

u8 ef_anahori02_04_tex[] = {
#include "assets/ef_anahori02_04_tex.inc"
};

Vtx ef_anahori02_00_v[] = {
#include "assets/ef_anahori02_00_v.inc"
};

GFX_ARR_BEGIN(ef_anahori02_00_modelT)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, obj_hole_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, anime_1_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(ef_anahori02_00_v, 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u16 ef_anahori03_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/ef_anahori03_pal.inc"
};

u8 ef_anahori03_03_tex[] = {
#include "assets/ef_anahori03_03_tex.inc"
};

u8 ef_anahori03_01_tex[] = {
#include "assets/ef_anahori03_01_tex.inc"
};

u8 ef_anahori03_02_tex[] = {
#include "assets/ef_anahori03_02_tex.inc"
};

u8 ef_anahori03_04_tex[] = {
#include "assets/ef_anahori03_04_tex.inc"
};

Vtx ef_anahori03_00_v[] = {
#include "assets/ef_anahori03_00_v.inc"
};

GFX_ARR_BEGIN(ef_anahori03_00_modelT)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, ef_anahori03_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, anime_1_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(ef_anahori03_00_v, 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u16 ef_mogura01_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/ef_mogura01_pal.inc"
};

u8 ef_mogura01_03_tex[] = {
#include "assets/ef_mogura01_03_tex.inc"
};

u8 ef_mogura01_01_tex[] = {
#include "assets/ef_mogura01_01_tex.inc"
};

u8 ef_mogura01_02_tex[] = {
#include "assets/ef_mogura01_02_tex.inc"
};

u8 ef_mogura01_04_tex[] = {
#include "assets/ef_mogura01_04_tex.inc"
};

Vtx ef_mogura01_00_v[] = {
#include "assets/ef_mogura01_00_v.inc"
};

GFX_ARR_BEGIN(ef_mogura01_00_modelT)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, ef_mogura01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, anime_1_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(ef_mogura01_00_v, 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
