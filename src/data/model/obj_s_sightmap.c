#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"

static u16 obj_sightmap_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_s_sightmap/obj_sightmap_pal.inc"
};

u8 obj_s_sightmap_tex[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_s_sightmap_tex.inc"
};

Vtx obj_s_sightmap_v[] = {
#include "assets/obj_s_sightmap_v.inc"
};

GFX_ARR_BEGIN(obj_s_sightmapT_mat_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_Dolphin(15, 16, 1, obj_sightmap_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 64, obj_s_sightmap_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_s_sightmapT_gfx_model)
    gsSPVertex(obj_s_sightmap_v, 8, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
