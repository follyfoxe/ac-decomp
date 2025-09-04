#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern u8 ef_s_cedar_trunk_modeset[];
extern Vtx ef_s_cedar4_cutL_v[];
extern u8 ef_s_cedar_leaf_modeset[];
extern u8 obj_s_cedar_cutL_tex_txt[];
Vtx ef_s_cedar4_cutL_v[] = {
#include "assets/ef_s_cedar4_cutL_v.inc"
};

GFX_ARR_BEGIN(ef_s_cedar4_cutL_leaf_model)
    gsSPDisplayList(ef_s_cedar_leaf_modeset),
    gsSPVertex(ef_s_cedar4_cutL_v, 32, 0),
    gsSPNTrianglesInit_5b(13, 0, 1, 2, 2, 3, 4, 5, 6, 0),
    gsSPNTriangles_5b(7, 8, 5, 9, 10, 11, 11, 12, 13, 14, 15, 9),
    gsSPNTriangles_5b(16, 17, 14, 18, 19, 20, 21, 22, 23, 23, 24, 16),
    gsSPNTriangles_5b(25, 26, 7, 27, 28, 29, 0, 0, 0, 0, 0, 0),
    gsSPVertex(&ef_s_cedar4_cutL_v[30], 17, 0),
    gsSPNTrianglesInit_5b(7, 0, 1, 2, 3, 4, 5, 6, 7, 8),
    gsSPNTriangles_5b(8, 9, 10, 10, 11, 12, 13, 14, 15, 12, 16, 13),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(ef_s_cedar4_cutL_trunk_model)
    gsSPDisplayList(ef_s_cedar_trunk_modeset),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 48, obj_s_cedar_cutL_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&ef_s_cedar4_cutL_v[47], 6, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 1, 3, 2, 1, 4, 3),
    gsSPNTriangles_5b(1, 5, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

cKF_Joint_R_c cKF_je_r_ef_s_cedar4_cutL_tbl[] = {
    { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 64786, 0, 0 } },
    { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
    { ef_s_cedar4_cutL_trunk_model, 1, cKF_JOINT_FLAG_DISP_OPA, { 2000, 0, 0 } },
    { ef_s_cedar4_cutL_leaf_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 4750, 0, 0 } }
};

cKF_Skeleton_R_c cKF_bs_r_ef_s_cedar4_cutL = { ARRAY_COUNT(cKF_je_r_ef_s_cedar4_cutL_tbl), 2,
                                               cKF_je_r_ef_s_cedar4_cutL_tbl };
