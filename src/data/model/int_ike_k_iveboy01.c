#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_ike_k_iveboy01_v[];
u16 int_ike_k_iveboy01_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_ike_k_iveboy01_pal.inc"
};

u8 int_ike_k_iveboyseat2_tex[] = {
#include "assets/int_ike_k_iveboyseat2_tex.inc"
};

u8 int_ike_k_iveboymir1_tex[] = {
#include "assets/int_ike_k_iveboymir1_tex.inc"
};

u8 int_ike_k_iveboylighttex[] = {
#include "assets/int_ike_k_iveboylighttex.inc"
};

u8 int_ike_k_iveboyhand_tex[] = {
#include "assets/int_ike_k_iveboyhand_tex.inc"
};

u8 int_ike_k_iveboyback_tex[] = {
#include "assets/int_ike_k_iveboyback_tex.inc"
};

u8 int_ike_k_iveboybase1_tex[] = {
#include "assets/int_ike_k_iveboybase1_tex.inc"
};

u8 int_ike_k_iveboymir2_tex[] = {
#include "assets/int_ike_k_iveboymir2_tex.inc"
};

u8 int_ike_k_iveboyside1_tex[] = {
#include "assets/int_ike_k_iveboyside1_tex.inc"
};

u8 int_ike_k_iveboyseat_tex[] = {
#include "assets/int_ike_k_iveboyseat_tex.inc"
};

u8 int_ike_k_iveboytire_tex[] = {
#include "assets/int_ike_k_iveboytire_tex.inc"
};

u8 int_ike_k_iveboysidein_tex[] = {
#include "assets/int_ike_k_iveboysidein_tex.inc"
};

u8 int_ike_k_iveboyfront1_tex[] = {
#include "assets/int_ike_k_iveboyfront1_tex.inc"
};

u8 int_ike_k_iveboybase3_rgb_i4[] = {
#include "assets/int_ike_k_iveboybase3_rgb_i4.inc"
};

Vtx int_ike_k_iveboy01_v[] = {
#include "assets/int_ike_k_iveboy01_v.inc"
};

GFX_ARR_BEGIN(int_ike_k_iveboy01_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_ike_k_iveboy01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_ike_k_iveboysidein_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_ike_k_iveboy01_v, 31, 0),
    gsSPNTrianglesInit_5b(9, 0, 1, 2, 1, 3, 2, 1, 4, 3),
    gsSPNTriangles_5b(5, 6, 7, 8, 5, 7, 8, 7, 9, 10, 11, 12),
    gsSPNTriangles_5b(10, 12, 13, 10, 14, 11, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 8, int_ike_k_iveboybase1_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(6, 15, 16, 17, 15, 17, 18, 19, 20, 21),
    gsSPNTriangles_5b(19, 21, 22, 23, 24, 25, 23, 25, 26, 0, 0, 0),
    gsSPNTrianglesInit_5b(2, 27, 28, 29, 27, 29, 30, 0, 0, 0),
    gsSPVertex(&int_ike_k_iveboy01_v[31], 20, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 8, int_ike_k_iveboyback_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(2, 4, 5, 6, 4, 6, 7, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_ike_k_iveboylighttex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(6, 8, 9, 10, 8, 11, 12, 13, 14, 15),
    gsSPNTriangles_5b(16, 17, 15, 17, 18, 15, 8, 19, 9, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_ike_k_iveboy01_off_model)
    gsSPTexture(8000, 4000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0,
                       0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 150, 190, 220, 200),
    gsDPSetEnvColor(185, 185, 185, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, int_ike_k_iveboybase3_rgb_i4),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_REPEAT, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_ike_k_iveboy01_v[51], 18, 0),
    gsSPNTrianglesInit_5b(10, 0, 1, 2, 0, 2, 3, 4, 0, 5),
    gsSPNTriangles_5b(4, 5, 6, 7, 8, 9, 7, 9, 10, 11, 12, 1),
    gsSPNTriangles_5b(11, 1, 13, 14, 15, 16, 14, 16, 17, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_ike_k_iveboy01_onT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_ike_k_iveboy01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 16, int_ike_k_iveboyfront1_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_ike_k_iveboy01_v[69], 32, 0),
    gsSPNTrianglesInit_5b(15, 0, 1, 2, 0, 2, 3, 4, 5, 0),
    gsSPNTriangles_5b(6, 7, 2, 3, 8, 5, 7, 9, 2, 10, 11, 12),
    gsSPNTriangles_5b(19, 20, 21, 22, 23, 24, 21, 10, 12, 21, 12, 25),
    gsSPNTriangles_5b(25, 26, 20, 27, 22, 24, 28, 29, 30, 28, 30, 31),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(3, 13, 14, 15, 16, 17, 13, 14, 18, 16),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_ike_k_iveboytire_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_ike_k_iveboy01_v[101], 25, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 16, int_ike_k_iveboyseat_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(3, 16, 17, 18, 19, 16, 18, 19, 18, 20),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(2, 21, 22, 23, 21, 23, 24, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 16, int_ike_k_iveboyside1_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&int_ike_k_iveboy01_v[126], 28, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 1, 3, 4, 2, 1, 4),
    gsSPNTriangles_5b(2, 4, 5, 6, 7, 8, 7, 9, 8, 7, 10, 9),
    gsSPNTriangles_5b(8, 9, 11, 9, 12, 11, 12, 9, 13, 12, 14, 15),
    gsSPNTriangles_5b(14, 12, 13, 16, 17, 18, 19, 18, 17, 16, 1, 17),
    gsSPNTriangles_5b(0, 17, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 8, int_ike_k_iveboymir2_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(2, 20, 21, 22, 20, 22, 23, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_ike_k_iveboyhand_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(2, 24, 25, 26, 24, 26, 27, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_ike_k_iveboymir1_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPVertex(&int_ike_k_iveboy01_v[154], 16, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 8, int_ike_k_iveboyseat2_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(4, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
