#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_fruittable02_v[];
u16 int_sum_fruittable02_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_fruittable02_pal.inc"
};

u8 int_sum_fruittable02_side_tex_txt[] = {
#include "assets/int_sum_fruittable02_side_tex_txt.inc"
};

u8 int_sum_fruittable02_top_tex_txt[] = {
#include "assets/int_sum_fruittable02_top_tex_txt.inc"
};

u8 int_sum_fruittable02_douwnside_tex_txt[] = {
#include "assets/int_sum_fruittable02_douwnside_tex_txt.inc"
};

u8 int_sum_fruittable02_douwntop_tex_txt[] = {
#include "assets/int_sum_fruittable02_douwntop_tex_txt.inc"
};

Vtx int_sum_fruittable02_v[] = {
#include "assets/int_sum_fruittable02_v.inc"
};

GFX_ARR_BEGIN(int_sum_fruittable02_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_fruittable02_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 48, int_sum_fruittable02_side_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 764, 188),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_fruittable02_v, 25, 0),
    gsSPNTrianglesInit_5b(22, 0, 1, 2, 0, 3, 4, 5, 6, 2),
    gsSPNTriangles_5b(7, 8, 9, 10, 11, 9, 10, 12, 4, 13, 9, 11),
    gsSPNTriangles_5b(9, 8, 10, 4, 11, 10, 14, 15, 9, 9, 15, 7),
    gsSPNTriangles_5b(4, 12, 0, 16, 17, 4, 2, 6, 18, 2, 1, 5),
    gsSPNTriangles_5b(2, 3, 0, 16, 3, 2, 2, 18, 16, 11, 4, 17),
    gsSPNTriangles_5b(17, 13, 11, 4, 3, 16, 9, 13, 14, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_sum_fruittable02_top_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 252, 252),
    gsSPNTrianglesInit_5b(4, 19, 20, 21, 21, 22, 19, 23, 24, 21),
    gsSPNTriangles_5b(21, 20, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_fruittable02_douwnside_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 252, 124),
    gsSPVertex(&int_sum_fruittable02_v[25], 16, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 3, 4, 5, 6, 7, 0),
    gsSPNTriangles_5b(8, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_fruittable02_douwntop_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 124, 124),
    gsSPNTrianglesInit_5b(4, 11, 12, 13, 11, 14, 15, 15, 12, 11),
    gsSPNTriangles_5b(13, 14, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
