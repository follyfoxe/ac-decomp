#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

u16 obj_art_fel_etc_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_art_fel_etc_pal.inc"
};

u16 obj_art_fel_art_pal[] = {
#include "assets/obj_art_fel_art_pal.inc"
};

u8 obj_art_fel_gaku_tex[] = {
#include "assets/obj_art_fel_gaku_tex.inc"
};

u8 obj_art_fel_name_tex[] = {
#include "assets/obj_art_fel_name_tex.inc"
};

u8 obj_art_fel_art_tex[] = {
#include "assets/obj_art_fel_art_tex.inc"
};

Vtx obj_art07_v[] = {
#include "assets/obj_art07_v.inc"
};

GFX_ARR_BEGIN(obj_art07_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, obj_art_fel_art_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 48, 48, obj_art_fel_art_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(obj_art07_v, 30, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 3, 1, 0, 0, 0),
    gsDPLoadTLUT_Dolphin(15, 16, 1, obj_art_fel_etc_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, obj_art_fel_name_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPNTrianglesInit_5b(2, 4, 5, 6, 4, 6, 7, 0, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 16, obj_art_fel_gaku_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_REPEAT, 0, 0),
    gsSPNTrianglesInit_5b(14, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 15, 16, 17, 15, 17, 12, 18, 19, 20),
    gsSPNTriangles_5b(18, 20, 21, 22, 23, 24, 22, 24, 25, 25, 26, 27),
    gsSPNTriangles_5b(25, 27, 22, 21, 28, 29, 21, 29, 18, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
