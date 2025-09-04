#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"

u8 obj_f_tree_trunk_tex[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_f_tree_trunk_tex.inc"
};

Vtx obj_f_tree4_v[] = {
#include "assets/obj_f_tree4_v.inc"
};

extern u8 obj_f_tree_leaf_tex[];

GFX_ARR_BEGIN(obj_f_tree4_leafT_mat_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 64, obj_f_tree_leaf_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 6, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_f_gold_tree4_leafT_mat_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 64, obj_f_tree_leaf_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 8, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_f_tree4_leafT_gfx_model)
    gsSPVertex(obj_f_tree4_v, 10, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 1, 3, 2, 0, 2, 4),
    gsSPNTriangles_5b(3, 4, 2, 5, 6, 7, 8, 5, 7, 9, 7, 6),
    gsSPNTriangles_5b(9, 8, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_f_tree4_trunkT_mat_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 64, obj_f_tree_trunk_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 6, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_f_gold_tree4_trunkT_mat_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 64, obj_f_tree_trunk_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 8, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_f_tree4_trunkT_gfx_model)
    gsSPVertex(&obj_f_tree4_v[10], 7, 0),
    gsSPNTrianglesInit_5b(6, 0, 1, 2, 1, 3, 2, 4, 2, 5),
    gsSPNTriangles_5b(4, 0, 2, 5, 2, 6, 2, 3, 6, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
