#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern u8 lat_letter31_xk_tex[];
extern u16 lat_letter31_pal[];
extern u8 lat_letter31_ed_tex[];
Vtx lat_letter31_v[] = {
#include "assets/lat_letter31_v.inc"
};

GFX_ARR_BEGIN(lat_letter31_model)
    gsDPSetRenderMode(G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, lat_letter31_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 32, lat_letter31_ed_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(lat_letter31_v, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 3, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 0, 9, 0),
    gsSP2Triangles(7, 9, 8, 0, 0, 2, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(11, 13, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 13, 16, 18, 0),
    gsSP2Triangles(13, 18, 19, 0, 13, 19, 14, 0),
    gsSPVertex(&lat_letter31_v[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(lat_letter31_sen_model)
    gsDPSetPrimColor(0, 255, 215, 215, 0, 255),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, lat_letter31_xk_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 0, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(&lat_letter31_v[24], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
