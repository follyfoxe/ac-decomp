#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_sum_chikuon01_v[];
u16 int_sum_chikuon01_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_sum_chikuon01_pal.inc"
};

u8 int_sum_chikuon01_front_tex[] = {
#include "assets/int_sum_chikuon01_front_tex.inc"
};

u8 int_sum_chikuon01_side_tex[] = {
#include "assets/int_sum_chikuon01_side_tex.inc"
};

u8 int_sum_chikuon01_rapa_f_tex[] = {
#include "assets/int_sum_chikuon01_rapa_f_tex.inc"
};

u8 int_sum_chikuon01_rapa_b_tex[] = {
#include "assets/int_sum_chikuon01_rapa_b_tex.inc"
};

u8 int_sum_chikuon01_reco_tex[] = {
#include "assets/int_sum_chikuon01_reco_tex.inc"
};

u8 int_sum_chikuon01_hari_tex[] = {
#include "assets/int_sum_chikuon01_hari_tex.inc"
};

Vtx int_sum_chikuon01_v[] = {
#include "assets/int_sum_chikuon01_v.inc"
};

GFX_ARR_BEGIN(int_sum_chikuon01_on_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_chikuon01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_chikuon01_side_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_sum_chikuon01_v, 20, 0),
    gsSPNTrianglesInit_5b(6, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 9, 10, 8, 10, 11, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_chikuon01_front_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPNTrianglesInit_5b(4, 12, 13, 14, 12, 14, 15, 16, 17, 18),
    gsSPNTriangles_5b(16, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_sum_chikuon01_onT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_chikuon01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_chikuon01_hari_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_sum_chikuon01_v[20], 14, 0),
    gsSPNTrianglesInit_5b(1, 0, 1, 2, 0, 0, 0, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, int_sum_chikuon01_reco_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(2, 3, 4, 5, 3, 6, 4, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, int_sum_chikuon01_rapa_b_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(3, 7, 8, 9, 10, 11, 8, 12, 9, 13),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, int_sum_chikuon01_rapa_f_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
    gsSPVertex(&int_sum_chikuon01_v[34], 20, 0),
    gsSPNTrianglesInit_5b(24, 0, 1, 2, 1, 3, 2, 4, 2, 3),
    gsSPNTriangles_5b(4, 5, 2, 5, 6, 2, 6, 0, 2, 7, 8, 9),
    gsSPNTriangles_5b(7, 9, 10, 8, 11, 9, 8, 12, 11, 8, 7, 13),
    gsSPNTriangles_5b(8, 13, 12, 12, 14, 11, 12, 13, 15, 12, 15, 14),
    gsSPNTriangles_5b(9, 16, 17, 9, 17, 10, 9, 11, 16, 16, 18, 19),
    gsSPNTriangles_5b(16, 19, 17, 16, 11, 18, 14, 15, 19, 18, 14, 19),
    gsSPNTriangles_5b(18, 11, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
