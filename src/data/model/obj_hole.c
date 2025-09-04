#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"

u8 obj_hole_tex[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_hole_tex.inc"
};

Vtx obj_hole0_v[] = {
#include "assets/obj_hole0_v.inc"
};

Vtx obj_hole1_v[] = {
#include "assets/obj_hole1_v.inc"
};

Vtx obj_hole2_v[] = {
#include "assets/obj_hole2_v.inc"
};

Vtx obj_hole3_v[] = {
#include "assets/obj_hole3_v.inc"
};

Vtx obj_hole4_v[] = {
#include "assets/obj_hole4_v.inc"
};

Vtx obj_hole5_v[] = {
#include "assets/obj_hole5_v.inc"
};

Vtx obj_hole6_v[] = {
#include "assets/obj_hole6_v.inc"
};

Vtx obj_hole7_v[] = {
#include "assets/obj_hole7_v.inc"
};

Vtx obj_hole8_v[] = {
#include "assets/obj_hole8_v.inc"
};

Vtx obj_hole9_v[] = {
#include "assets/obj_hole9_v.inc"
};

Vtx obj_hole10_v[] = {
#include "assets/obj_hole10_v.inc"
};

Vtx obj_hole11_v[] = {
#include "assets/obj_hole11_v.inc"
};

Vtx obj_hole12_v[] = {
#include "assets/obj_hole12_v.inc"
};

Vtx obj_hole13_v[] = {
#include "assets/obj_hole13_v.inc"
};

Vtx obj_hole14_v[] = {
#include "assets/obj_hole14_v.inc"
};

Vtx obj_hole15_v[] = {
#include "assets/obj_hole15_v.inc"
};

Vtx obj_hole16_v[] = {
#include "assets/obj_hole16_v.inc"
};

Vtx obj_hole17_v[] = {
#include "assets/obj_hole17_v.inc"
};

Vtx obj_hole18_v[] = {
#include "assets/obj_hole18_v.inc"
};

Vtx obj_hole19_v[] = {
#include "assets/obj_hole19_v.inc"
};

Vtx obj_hole20_v[] = {
#include "assets/obj_hole20_v.inc"
};

Vtx obj_hole21_v[] = {
#include "assets/obj_hole21_v.inc"
};

Vtx obj_hole22_v[] = {
#include "assets/obj_hole22_v.inc"
};

Vtx obj_hole23_v[] = {
#include "assets/obj_hole23_v.inc"
};

Vtx obj_hole24_v[] = {
#include "assets/obj_hole24_v.inc"
};

GFX_ARR_BEGIN(obj_hole0T_g_mat_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, obj_hole_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 4, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole0T_s_mat_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, obj_hole_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 5, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole0T_gfx_model)
    gsSPVertex(obj_hole0_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole1T_gfx_model)
    gsSPVertex(obj_hole1_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole2T_gfx_model)
    gsSPVertex(obj_hole2_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole3T_gfx_model)
    gsSPVertex(obj_hole3_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole4T_gfx_model)
    gsSPVertex(obj_hole4_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole5T_gfx_model)
    gsSPVertex(obj_hole5_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole6T_gfx_model)
    gsSPVertex(obj_hole6_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole7T_gfx_model)
    gsSPVertex(obj_hole7_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole8T_gfx_model)
    gsSPVertex(obj_hole8_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole9T_gfx_model)
    gsSPVertex(obj_hole9_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole10T_gfx_model)
    gsSPVertex(obj_hole10_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole11T_gfx_model)
    gsSPVertex(obj_hole11_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole12T_gfx_model)
    gsSPVertex(obj_hole12_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole13T_gfx_model)
    gsSPVertex(obj_hole13_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole14T_gfx_model)
    gsSPVertex(obj_hole14_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole15T_gfx_model)
    gsSPVertex(obj_hole15_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole16T_gfx_model)
    gsSPVertex(obj_hole16_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole17T_gfx_model)
    gsSPVertex(obj_hole17_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole18T_gfx_model)
    gsSPVertex(obj_hole18_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole19T_gfx_model)
    gsSPVertex(obj_hole19_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole20T_gfx_model)
    gsSPVertex(obj_hole20_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole21T_gfx_model)
    gsSPVertex(obj_hole21_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole22T_gfx_model)
    gsSPVertex(obj_hole22_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole23T_gfx_model)
    gsSPVertex(obj_hole23_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(obj_hole24T_gfx_model)
    gsSPVertex(obj_hole24_v, 5, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 2, 3, 4, 2, 1, 3),
    gsSPNTriangles_5b(4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
