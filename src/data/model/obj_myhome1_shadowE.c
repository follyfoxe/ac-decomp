#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

u8 obj_myhome1_shadowE[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_myhome1_shadowE.inc"
};

Vtx obj_myhome1_shadowE_v[] = {
#include "assets/obj_myhome1_shadowE_v.inc"
};

GFX_ARR_BEGIN(obj_myhome1_shadowET_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIM_LOD_FRAC, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, obj_myhome1_shadowE),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(anime_1_txt, 18, 0),
    gsSPNTrianglesInit_5b(20, 0, 1, 2, 0, 2, 3, 1, 4, 5),
    gsSPNTriangles_5b(1, 5, 2, 4, 6, 7, 4, 7, 5, 7, 8, 9),
    gsSPNTriangles_5b(7, 9, 6, 5, 7, 6, 5, 6, 4, 3, 2, 1),
    gsSPNTriangles_5b(3, 1, 0, 10, 11, 12, 10, 12, 13, 14, 10, 13),
    gsSPNTriangles_5b(14, 13, 15, 16, 12, 11, 16, 11, 17, 15, 16, 17),
    gsSPNTriangles_5b(15, 17, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 obj_myhome1_shadowW[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_myhome1_shadowW.inc"
};

Vtx obj_myhome1_shadowW_v[] = {
#include "assets/obj_myhome1_shadowW_v.inc"
};

GFX_ARR_BEGIN(obj_myhome1_shadowWT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIM_LOD_FRAC, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, obj_myhome1_shadowW),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(anime_1_txt, 18, 0),
    gsSPNTrianglesInit_5b(20, 0, 1, 2, 0, 2, 3, 1, 4, 5),
    gsSPNTriangles_5b(1, 5, 2, 4, 6, 7, 4, 7, 5, 7, 8, 9),
    gsSPNTriangles_5b(7, 9, 6, 5, 7, 6, 5, 6, 4, 3, 2, 1),
    gsSPNTriangles_5b(3, 1, 0, 10, 11, 12, 10, 12, 13, 14, 10, 13),
    gsSPNTriangles_5b(14, 13, 15, 16, 12, 11, 16, 11, 17, 15, 16, 17),
    gsSPNTriangles_5b(15, 17, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 obj_myhome2_shadowE[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_myhome2_shadowE.inc"
};

Vtx obj_myhome2_shadowE_v[] = {
#include "assets/obj_myhome2_shadowE_v.inc"
};

GFX_ARR_BEGIN(obj_myhome2_shadowET_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIM_LOD_FRAC, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, obj_myhome2_shadowE),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(anime_1_txt, 18, 0),
    gsSPNTrianglesInit_5b(20, 0, 1, 2, 0, 2, 3, 1, 4, 5),
    gsSPNTriangles_5b(1, 5, 2, 4, 6, 7, 4, 7, 5, 7, 8, 9),
    gsSPNTriangles_5b(7, 9, 6, 5, 7, 6, 5, 6, 4, 3, 2, 1),
    gsSPNTriangles_5b(3, 1, 0, 10, 11, 12, 10, 12, 13, 14, 10, 13),
    gsSPNTriangles_5b(14, 13, 15, 16, 12, 11, 16, 11, 17, 15, 16, 17),
    gsSPNTriangles_5b(15, 17, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 obj_myhome2_shadowW[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_myhome2_shadowW.inc"
};

Vtx obj_myhome2_shadowW_v[] = {
#include "assets/obj_myhome2_shadowW_v.inc"
};

GFX_ARR_BEGIN(obj_myhome2_shadowWT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIM_LOD_FRAC, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, obj_myhome2_shadowW),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(anime_1_txt, 18, 0),
    gsSPNTrianglesInit_5b(20, 0, 1, 2, 0, 2, 3, 1, 4, 5),
    gsSPNTriangles_5b(1, 5, 2, 4, 6, 7, 4, 7, 5, 7, 8, 9),
    gsSPNTriangles_5b(7, 9, 6, 5, 7, 6, 5, 6, 4, 3, 2, 1),
    gsSPNTriangles_5b(3, 1, 0, 10, 11, 12, 10, 12, 13, 14, 10, 13),
    gsSPNTriangles_5b(14, 13, 15, 16, 12, 11, 16, 11, 17, 15, 16, 17),
    gsSPNTriangles_5b(15, 17, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 obj_myhome3_shadowE[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_myhome3_shadowE.inc"
};

Vtx obj_myhome3_shadowE_v[] = {
#include "assets/obj_myhome3_shadowE_v.inc"
};

GFX_ARR_BEGIN(obj_myhome3_shadowET_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIM_LOD_FRAC, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, obj_myhome3_shadowE),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(anime_1_txt, 18, 0),
    gsSPNTrianglesInit_5b(20, 0, 1, 2, 0, 2, 3, 1, 4, 5),
    gsSPNTriangles_5b(1, 5, 2, 4, 6, 7, 4, 7, 5, 7, 8, 9),
    gsSPNTriangles_5b(7, 9, 6, 5, 7, 6, 5, 6, 4, 3, 2, 1),
    gsSPNTriangles_5b(3, 1, 0, 10, 11, 12, 10, 12, 13, 14, 10, 13),
    gsSPNTriangles_5b(14, 13, 15, 16, 12, 11, 16, 11, 17, 15, 16, 17),
    gsSPNTriangles_5b(15, 17, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 obj_myhome3_shadowW[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_myhome3_shadowW.inc"
};

Vtx obj_myhome3_shadowW_v[] = {
#include "assets/obj_myhome3_shadowW_v.inc"
};

GFX_ARR_BEGIN(obj_myhome3_shadowWT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIM_LOD_FRAC, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, obj_myhome3_shadowW),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(anime_1_txt, 18, 0),
    gsSPNTrianglesInit_5b(20, 0, 1, 2, 0, 2, 3, 1, 4, 5),
    gsSPNTriangles_5b(1, 5, 2, 4, 6, 7, 4, 7, 5, 7, 8, 9),
    gsSPNTriangles_5b(7, 9, 6, 5, 7, 6, 5, 6, 4, 3, 2, 1),
    gsSPNTriangles_5b(3, 1, 0, 10, 11, 12, 10, 12, 13, 14, 10, 13),
    gsSPNTriangles_5b(14, 13, 15, 16, 12, 11, 16, 11, 17, 15, 16, 17),
    gsSPNTriangles_5b(15, 17, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 obj_myhome4_shadowE[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_myhome4_shadowE.inc"
};

Vtx obj_myhome4_shadowE_v[] = {
#include "assets/obj_myhome4_shadowE_v.inc"
};

GFX_ARR_BEGIN(obj_myhome4_shadowET_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIM_LOD_FRAC, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, obj_myhome4_shadowE),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(anime_1_txt, 18, 0),
    gsSPNTrianglesInit_5b(20, 0, 1, 2, 0, 2, 3, 1, 4, 5),
    gsSPNTriangles_5b(1, 5, 2, 4, 6, 7, 4, 7, 5, 7, 8, 9),
    gsSPNTriangles_5b(7, 9, 6, 5, 7, 6, 5, 6, 4, 3, 2, 1),
    gsSPNTriangles_5b(3, 1, 0, 10, 11, 12, 10, 12, 13, 14, 10, 13),
    gsSPNTriangles_5b(14, 13, 15, 16, 12, 11, 16, 11, 17, 15, 16, 17),
    gsSPNTriangles_5b(15, 17, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 obj_myhome4_shadowW[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_myhome4_shadowW.inc"
};

Vtx obj_myhome4_shadowW_v[] = {
#include "assets/obj_myhome4_shadowW_v.inc"
};

GFX_ARR_BEGIN(obj_myhome4_shadowWT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIM_LOD_FRAC, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, obj_myhome4_shadowW),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(anime_1_txt, 18, 0),
    gsSPNTrianglesInit_5b(20, 0, 1, 2, 0, 2, 3, 1, 4, 5),
    gsSPNTriangles_5b(1, 5, 2, 4, 6, 7, 4, 7, 5, 7, 8, 9),
    gsSPNTriangles_5b(7, 9, 6, 5, 7, 6, 5, 6, 4, 3, 2, 1),
    gsSPNTriangles_5b(3, 1, 0, 10, 11, 12, 10, 12, 13, 14, 10, 13),
    gsSPNTriangles_5b(14, 13, 15, 16, 12, 11, 16, 11, 17, 15, 16, 17),
    gsSPNTriangles_5b(15, 17, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
