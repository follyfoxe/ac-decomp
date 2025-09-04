#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

static u16 obj_shop_akican_pal[] ATTRIBUTE_ALIGN(32)= {
#include "assets/obj_shop_nagagutu/obj_shop_akican_pal.inc"
};

u8 obj_shop_nagagutu_tex[] ATTRIBUTE_ALIGN(32)= {
#include "assets/obj_shop_nagagutu_tex.inc"
};

Vtx obj_shop_nagagutu_v[] = {
#include "assets/obj_shop_nagagutu_v.inc"
};

GFX_ARR_BEGIN(obj_nagagutuT_mat_model)
gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
gsDPLoadTLUT_Dolphin(15, 16, 1, obj_shop_akican_pal),
gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 16, 64, obj_shop_nagagutu_tex),
gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_nagagutuT_gfx_model)
gsSPVertex(obj_shop_nagagutu_v, 31, 0),
gsSPNTrianglesInit_5b(24, 0, 1, 2, 3, 4, 5, 5, 4, 6),
gsSPNTriangles_5b(1, 7, 2, 8, 9, 10, 11, 10, 9, 12, 13, 14),
gsSPNTriangles_5b(15, 12, 14, 12, 15, 16, 12, 16, 17, 18, 12, 17),
gsSPNTriangles_5b(18, 13, 12, 19, 20, 21, 20, 22, 21, 22, 23, 21),
gsSPNTriangles_5b(22, 24, 25, 22, 25, 23, 26, 27, 28, 26, 28, 25),
gsSPNTriangles_5b(24, 26, 25, 29, 28, 27, 29, 27, 30, 19, 29, 30),
gsSPNTriangles_5b(19, 30, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0),
gsSPVertex(&obj_shop_nagagutu_v[31], 12, 0),
gsSPNTrianglesInit_5b(2, 0, 1, 2, 0, 2, 3, 0, 0, 0),
gsSPNTrianglesInit_5b(4, 4, 5, 6, 7, 8, 9, 10, 8, 7),
gsSPNTriangles_5b(11, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0),
gsSPEndDisplayList(),
GFX_ARR_END

