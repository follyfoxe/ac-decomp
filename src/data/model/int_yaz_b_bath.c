#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_yaz_b_bath_v[];
u16 int_yaz_b_bath_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_yaz_b_bath_pal.inc"
};

u8 int_yaz_b_bath_kobu_tex_txt[] = {
#include "assets/int_yaz_b_bath_kobu_tex_txt.inc"
};

u8 int_yaz_b_bath_base_tex_txt[] = {
#include "assets/int_yaz_b_bath_base_tex_txt.inc"
};

u8 int_yaz_b_bath_sara2_tex_txt[] = {
#include "assets/int_yaz_b_bath_sara2_tex_txt.inc"
};

u8 int_yaz_b_bath_pole_tex_txt[] = {
#include "assets/int_yaz_b_bath_pole_tex_txt.inc"
};

u8 int_yaz_b_bath_water5_tex_4i4_pic_i4[] = {
#include "assets/int_yaz_b_bath_water5_tex_4i4_pic_i4.inc"
};

Vtx int_yaz_b_bath_v[] = {
#include "assets/int_yaz_b_bath_v.inc"
};

GFX_ARR_BEGIN(int_yaz_b_bath_water_model)
    gsSPTexture(4500, 4000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIM_LOD_FRAC, PRIMITIVE, COMBINED, 0,
                       SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 30, 155, 155, 225, 100),
    gsDPSetEnvColor(100, 100, 175, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 16, 16, int_yaz_b_bath_water5_tex_4i4_pic_i4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_REPEAT, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_SHADING_SMOOTH |
                         G_DECAL_LEQUAL),
    gsSPVertex(&int_yaz_b_bath_v[58], 6, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 3, 4, 5, 2, 3, 0),
    gsSPNTriangles_5b(5, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_yaz_b_bath_body_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_yaz_b_bath_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_yaz_b_bath_kobu_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_yaz_b_bath_v, 11, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 3, 4, 5, 4, 3, 2),
    gsSPNTriangles_5b(0, 3, 5, 3, 0, 2, 4, 1, 5, 1, 4, 2),
    gsSPNTriangles_5b(1, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_yaz_b_bath_base_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(4, 6, 7, 8, 8, 9, 6, 10, 7, 6),
    gsSPNTriangles_5b(6, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_yaz_b_bath_sara2_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_yaz_b_bath_v[11], 32, 0),
    gsSPNTrianglesInit_5b(15, 0, 1, 2, 3, 4, 5, 3, 5, 6),
    gsSPNTriangles_5b(7, 8, 9, 7, 9, 10, 11, 12, 13, 14, 15, 13),
    gsSPNTriangles_5b(13, 16, 17, 13, 18, 19, 20, 21, 13, 22, 23, 13),
    gsSPNTriangles_5b(24, 25, 26, 24, 26, 27, 28, 29, 30, 28, 30, 31),
    gsSPVertex(&int_yaz_b_bath_v[43], 15, 0),
    gsSPNTrianglesInit_5b(3, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_yaz_b_bath_pole_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 188, 124),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(8, 7, 8, 9, 10, 11, 12, 10, 12, 8),
    gsSPNTriangles_5b(11, 13, 14, 11, 14, 12, 13, 7, 9, 13, 9, 14),
    gsSPNTriangles_5b(7, 10, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
