#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

u8 obj_car_shadow[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_car_shadow.inc"
};

Vtx obj_car_shadow_v[] = {
#include "assets/obj_car_shadow_v.inc"
};

GFX_ARR_BEGIN(obj_car_shadowT_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIM_LOD_FRAC, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 32, 32, obj_car_shadow),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(anime_1_txt, 23, 0),
    gsSPNTrianglesInit_5b(18, 0, 1, 2, 0, 3, 1, 2, 1, 4),
    gsSPNTriangles_5b(1, 5, 4, 6, 7, 8, 6, 9, 7, 9, 10, 7),
    gsSPNTriangles_5b(9, 11, 10, 12, 13, 14, 13, 9, 14, 13, 15, 9),
    gsSPNTriangles_5b(15, 11, 9, 1, 16, 17, 16, 18, 17, 16, 19, 18),
    gsSPNTriangles_5b(1, 20, 16, 20, 21, 16, 21, 22, 16, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
