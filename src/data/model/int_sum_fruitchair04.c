#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_fruitchair04_v[];
u16 int_sum_fruitchair04_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_fruitchair04_pal.inc"
};

u8 int_sum_fruitchair04_turu_tex_txt[] = {
#include "assets/int_sum_fruitchair04_turu_tex_txt.inc"
};

u8 int_sum_fruitchair04_back2_tex_txt[] = {
#include "assets/int_sum_fruitchair04_back2_tex_txt.inc"
};

u8 int_sum_fruitchair04_back1_tex_txt[] = {
#include "assets/int_sum_fruitchair04_back1_tex_txt.inc"
};

u8 int_sum_fruitchair04_seat_tex_txt[] = {
#include "assets/int_sum_fruitchair04_seat_tex_txt.inc"
};

Vtx int_sum_fruitchair04_v[] = {
#include "assets/int_sum_fruitchair04_v.inc"
};

GFX_ARR_BEGIN(int_sum_fruitchair04_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_fruitchair04_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_fruitchair04_turu_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_fruitchair04_v, 25, 0),
    gsSPNTrianglesInit_5b(1, 0, 1, 2, 0, 0, 0, 0, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_fruitchair04_back2_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 188, 124),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(11, 3, 4, 5, 6, 7, 8, 9, 5, 4),
    gsSPNTriangles_5b(7, 6, 10, 4, 3, 8, 4, 7, 11, 10, 11, 7),
    gsSPNTriangles_5b(4, 11, 9, 8, 7, 4, 8, 12, 6, 5, 13, 3),
    gsSPNTrianglesInit_5b(11, 14, 15, 16, 14, 17, 18, 14, 16, 19),
    gsSPNTriangles_5b(15, 20, 21, 21, 16, 15, 20, 15, 18, 22, 23, 17),
    gsSPNTriangles_5b(19, 22, 14, 18, 24, 20, 17, 14, 22, 18, 15, 14),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_fruitchair04_back1_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 188, 124),
    gsSPVertex(&int_sum_fruitchair04_v[25], 16, 0),
    gsSPNTrianglesInit_5b(10, 0, 1, 2, 3, 4, 5, 0, 2, 6),
    gsSPNTriangles_5b(7, 1, 3, 6, 8, 0, 8, 4, 3, 5, 7, 3),
    gsSPNTriangles_5b(7, 2, 1, 1, 0, 3, 3, 0, 8, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_sum_fruitchair04_seat_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 252, 252),
    gsSPNTrianglesInit_5b(6, 9, 10, 11, 9, 11, 12, 13, 14, 9),
    gsSPNTriangles_5b(10, 9, 14, 12, 15, 9, 13, 9, 15, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
