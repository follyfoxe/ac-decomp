#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"

static u8 obj_w_palm_stump_tex[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_w_pstump4/obj_w_palm_stump_tex.inc"
};

Vtx obj_w_pstump4_v[] = {
#include "assets/obj_w_pstump4_v.inc"
};

GFX_ARR_BEGIN(obj_w_pstump4T_mat_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 32, obj_w_palm_stump_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 7, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_w_pstump4T_gfx_model)
    gsSPVertex(obj_w_pstump4_v, 7, 0),
    gsSPNTrianglesInit_5b(7, 0, 1, 2, 3, 0, 2, 3, 4, 0),
    gsSPNTriangles_5b(4, 5, 0, 5, 1, 0, 3, 6, 4, 6, 5, 4),
    gsSPEndDisplayList(),
GFX_ARR_END
