#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx int_nog_tri_chest01_v[];
u16 int_nog_tri_chest01_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/int_nog_tri_chest01_pal.inc"
};

u8 obj_nog_tri_chest01_tex_txt[] = {
#include "assets/obj_nog_tri_chest01_tex_txt.inc"
};

Vtx int_nog_tri_chest01_v[] = {
#include "assets/int_nog_tri_chest01_v.inc"
};

GFX_ARR_BEGIN(int_nog_tri_chest01_door_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_nog_tri_chest01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 128, 32, obj_nog_tri_chest01_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(int_nog_tri_chest01_v, 30, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPNTrianglesInit_5b(10, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24),
    gsSPNTriangles_5b(22, 24, 25, 26, 27, 28, 26, 28, 29, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(int_nog_tri_chest01_base_model)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_nog_tri_chest01_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 128, 32, obj_nog_tri_chest01_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(&int_nog_tri_chest01_v[30], 26, 0),
    gsSPNTrianglesInit_5b(12, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 16, 17, 18, 16, 18, 19, 20, 21, 22),
    gsSPNTriangles_5b(23, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

u8 cKF_ckcb_r_int_nog_tri_chest01_tbl[] = { 56, 7, 7 };

s16 cKF_kn_int_nog_tri_chest01_tbl[] = { 2, 2, 2, 2, 2, 2, 2, 2, 2 };

s16 cKF_c_int_nog_tri_chest01_tbl[] = { 0, 900, 0 };

s16 cKF_ds_int_nog_tri_chest01_tbl[] = {
    1,  2000, 0, 10, 2000, 0, 1,  -24000, 0, 10, -24000, 0, 1,  1500, 0, 10, 1500, 0, 1,  0, 0, 10, 0, 0, 1,  0,  0,
    10, 0,    0, 1,  900,  0, 10, 900,    0, 1,  0,      0, 10, 0,    0, 1,  0,    0, 10, 0, 0, 1,  0, 0, 10, 28, 83
};

cKF_Animation_R_c cKF_ba_r_int_nog_tri_chest01 = { cKF_ckcb_r_int_nog_tri_chest01_tbl,
                                                   cKF_ds_int_nog_tri_chest01_tbl,
                                                   cKF_kn_int_nog_tri_chest01_tbl,
                                                   cKF_c_int_nog_tri_chest01_tbl,
                                                   -1,
                                                   10 };

cKF_Joint_R_c cKF_je_r_int_nog_tri_chest01_tbl[] = {
    { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 2000, 41536, 1500 } },
    { int_nog_tri_chest01_base_model, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
    { int_nog_tri_chest01_door_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 1, 0, 0 } }
};

cKF_Skeleton_R_c cKF_bs_r_int_nog_tri_chest01 = { ARRAY_COUNT(cKF_je_r_int_nog_tri_chest01_tbl), 2,
                                                  cKF_je_r_int_nog_tri_chest01_tbl };
