#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_nog_tri_sofa01_v[];
u16 int_nog_tri_sofa01_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_nog_tri_sofa01_pal.inc"
};

u8 obj_nog_tri_sofa01_tex[] = {
#include "assets/obj_nog_tri_sofa01_tex.inc"
};

Vtx int_nog_tri_sofa01_v[] = {
#include "assets/int_nog_tri_sofa01_v.inc"
};

GFX_ARR_BEGIN(int_nog_tri_sofa01_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_nog_tri_sofa01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 128, 32, obj_nog_tri_sofa01_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_nog_tri_sofa01_v, 32, 0),
    gsSPNTrianglesInit_5b(23, 0, 1, 2, 1, 3, 2, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 4, 7, 8, 7, 9, 10, 11, 12),
    gsSPNTriangles_5b(10, 12, 13, 3, 10, 13, 3, 13, 2, 14, 1, 15),
    gsSPNTriangles_5b(1, 0, 15, 16, 17, 18, 17, 19, 18, 20, 16, 18),
    gsSPNTriangles_5b(20, 18, 21, 22, 23, 24, 22, 24, 25, 26, 25, 27),
    gsSPNTriangles_5b(26, 22, 25, 27, 28, 29, 27, 25, 28, 25, 30, 28),
    gsSPVertex(&int_nog_tri_sofa01_v[31], 29, 0),
    gsSPNTrianglesInit_5b(15, 0, 1, 2, 0, 3, 1, 3, 4, 1),
    gsSPNTriangles_5b(5, 6, 7, 5, 8, 6, 9, 10, 11, 10, 12, 11),
    gsSPNTriangles_5b(13, 14, 15, 13, 15, 16, 17, 18, 19, 17, 19, 20),
    gsSPNTriangles_5b(21, 22, 23, 21, 23, 24, 25, 26, 27, 25, 27, 28),
    gsSPEndDisplayList(),
GFX_ARR_END
