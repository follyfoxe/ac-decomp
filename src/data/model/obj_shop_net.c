#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

u16 obj_shop_net_pal[] ATTRIBUTE_ALIGN(32)= {
#include "assets/obj_shop_net_pal.inc"
};

u8 obj_shop_net_tex[] ATTRIBUTE_ALIGN(32)= {
#include "assets/obj_shop_net_tex.inc"
};

Vtx obj_shop_net_v[] = {
#include "assets/obj_shop_net_v.inc"
};

GFX_ARR_BEGIN(obj_netT_mat_model)
gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
gsDPLoadTLUT_Dolphin(15, 16, 1, obj_shop_net_pal),
gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, obj_shop_net_tex),
gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_CLAMP, 0, 0),
gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_netT_gfx_model)
gsSPVertex(obj_shop_net_v, 17, 0),
gsSPNTrianglesInit_5b(13, 0, 1, 2, 0, 2, 3, 0, 4, 1),
gsSPNTriangles_5b(2, 5, 3, 6, 7, 8, 9, 5, 10, 9, 10, 6),
gsSPNTriangles_5b(9, 6, 8, 11, 12, 13, 11, 13, 14, 12, 15, 16),
gsSPNTriangles_5b(12, 16, 13, 12, 11, 15, 0, 0, 0, 0, 0, 0),
gsSPEndDisplayList(),
GFX_ARR_END

