#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_ike_jny_gojyu01_v[];
u16 int_ike_jny_gojyu01_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_ike_jny_gojyu01_pal.inc"
};

u8 int_ike_jny_gojyuname2_tex_txt[] = {
#include "assets/int_ike_jny_gojyuname2_tex_txt.inc"
};

u8 int_ike_jny_gojyuname1_tex_txt[] = {
#include "assets/int_ike_jny_gojyuname1_tex_txt.inc"
};

u8 int_ike_jny_gojyubase_tex_txt[] = {
#include "assets/int_ike_jny_gojyubase_tex_txt.inc"
};

u8 int_ike_jny_gojyuroof_tex_txt[] = {
#include "assets/int_ike_jny_gojyuroof_tex_txt.inc"
};

u8 int_ike_jny_gojyuwall2_tex_txt[] = {
#include "assets/int_ike_jny_gojyuwall2_tex_txt.inc"
};

u8 int_ike_jny_gojyuwall1_tex_txt[] = {
#include "assets/int_ike_jny_gojyuwall1_tex_txt.inc"
};

u8 int_ike_jny_gojyutop_tex_txt[] = {
#include "assets/int_ike_jny_gojyutop_tex_txt.inc"
};

Vtx int_ike_jny_gojyu01_v[] = {
#include "assets/int_ike_jny_gojyu01_v.inc"
};

GFX_ARR_BEGIN(int_ike_jny_gojyu01_body_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_ike_jny_gojyu01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 8, int_ike_jny_gojyuname2_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_ike_jny_gojyu01_v, 20, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsSPNTrianglesInit_5b(2, 4, 5, 6, 4, 6, 7, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_ike_jny_gojyuname1_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(2, 8, 9, 10, 8, 10, 11, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 8, int_ike_jny_gojyubase_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(2, 12, 13, 14, 15, 12, 14, 0, 0, 0),
    gsSPNTrianglesInit_5b(2, 16, 17, 18, 19, 16, 18, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_ike_jny_gojyuroof_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_ike_jny_gojyu01_v[20], 26, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 9, 1, 8, 1, 0, 10, 11, 5),
    gsSPNTriangles_5b(10, 5, 4, 12, 13, 9, 12, 9, 8, 14, 15, 11),
    gsSPNTriangles_5b(14, 11, 10, 3, 2, 13, 3, 13, 12, 7, 6, 15),
    gsSPNTriangles_5b(7, 15, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_ike_jny_gojyuwall2_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 508, 60),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(8, 16, 17, 18, 16, 18, 19, 17, 20, 21),
    gsSPNTriangles_5b(17, 21, 18, 22, 16, 19, 22, 19, 23, 20, 24, 25),
    gsSPNTriangles_5b(20, 25, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_ike_jny_gojyuroof_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_ike_jny_gojyu01_v[46], 24, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 5, 0, 3, 5, 3, 6, 1, 4, 7),
    gsSPNTriangles_5b(1, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPNTrianglesInit_5b(16, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 16, 17, 18, 16, 18, 19, 13, 20, 21),
    gsSPNTriangles_5b(13, 21, 14, 17, 8, 11, 17, 11, 18, 22, 12, 15),
    gsSPNTriangles_5b(22, 15, 23, 9, 16, 19, 9, 19, 10, 20, 22, 23),
    gsSPNTriangles_5b(20, 23, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPVertex(&int_ike_jny_gojyu01_v[70], 16, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 0, 2, 3, 1, 4, 5),
    gsSPNTriangles_5b(1, 5, 2, 4, 6, 7, 4, 7, 5, 6, 0, 3),
    gsSPNTriangles_5b(6, 3, 7, 8, 9, 10, 8, 10, 11, 11, 10, 12),
    gsSPNTriangles_5b(11, 12, 13, 13, 12, 14, 13, 14, 15, 15, 14, 9),
    gsSPNTriangles_5b(15, 9, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPVertex(&int_ike_jny_gojyu01_v[86], 17, 0),
    gsSPNTrianglesInit_5b(20, 0, 1, 2, 3, 4, 2, 4, 0, 2),
    gsSPNTriangles_5b(1, 3, 2, 5, 6, 7, 5, 7, 8, 8, 7, 9),
    gsSPNTriangles_5b(8, 9, 10, 11, 12, 6, 11, 6, 5, 10, 9, 12),
    gsSPNTriangles_5b(10, 12, 11, 4, 13, 14, 4, 14, 0, 0, 14, 15),
    gsSPNTriangles_5b(0, 15, 1, 1, 15, 16, 1, 16, 3, 3, 16, 13),
    gsSPNTriangles_5b(3, 13, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPVertex(&int_ike_jny_gojyu01_v[103], 30, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 0, 2, 3, 3, 2, 4),
    gsSPNTriangles_5b(3, 4, 5, 5, 4, 6, 5, 6, 7, 7, 6, 1),
    gsSPNTriangles_5b(7, 1, 0, 8, 9, 10, 8, 10, 11, 11, 10, 12),
    gsSPNTriangles_5b(11, 12, 13, 13, 12, 14, 13, 14, 15, 15, 14, 9),
    gsSPNTriangles_5b(15, 9, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_ike_jny_gojyuwall1_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 252, 380),
    gsSPNTrianglesInit_5b(8, 16, 17, 18, 16, 18, 19, 20, 21, 22),
    gsSPNTriangles_5b(20, 22, 23, 21, 24, 25, 21, 25, 22, 24, 16, 19),
    gsSPNTriangles_5b(24, 19, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 8, int_ike_jny_gojyutop_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_MIRROR, 0, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 124, 60),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(2, 26, 27, 28, 26, 28, 29, 0, 0, 0),
    gsSPVertex(&int_ike_jny_gojyu01_v[133], 16, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsSPNTrianglesInit_5b(2, 4, 5, 6, 4, 6, 7, 0, 0, 0),
    gsSPNTrianglesInit_5b(2, 8, 9, 10, 8, 10, 11, 0, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 8, int_ike_jny_gojyuname2_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(2, 12, 13, 14, 12, 14, 15, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
