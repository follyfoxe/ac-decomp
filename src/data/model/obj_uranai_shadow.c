#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

u8 obj_uranai_shadow_tex[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_uranai_shadow_tex.inc"
};

Vtx obj_uranai_shadow_v[] = {
#include "assets/obj_uranai_shadow_v.inc"
};

GFX_ARR_BEGIN(obj_uranai_shadowT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIM_LOD_FRAC, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, obj_uranai_shadow_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(anime_1_txt, 14, 0),
    gsSPNTrianglesInit_5b(11, 0, 1, 2, 3, 4, 5, 3, 6, 4),
    gsSPNTriangles_5b(6, 7, 4, 6, 0, 7, 0, 2, 7, 8, 2, 9),
    gsSPNTriangles_5b(8, 9, 10, 11, 8, 10, 11, 10, 12, 13, 11, 12),
    gsSPEndDisplayList(),
GFX_ARR_END
