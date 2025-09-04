#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern u8 obj_s_palm_cutL_tex_txt[];
extern Vtx ef_s_palm4_cutR_v[];
extern u8 ef_s_palm_trunk_modeset[];
extern u8 ef_s_palm_leaf_modeset[];
Vtx ef_s_palm4_cutR_v[] = {
#include "assets/ef_s_palm4_cutR_v.inc"
};

GFX_ARR_BEGIN(ef_s_palm4_cutR_leaf_model)
    gsSPDisplayList(ef_s_palm_leaf_modeset),
    gsSPVertex(ef_s_palm4_cutR_v, 32, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 16, 17, 18, 16, 18, 19, 20, 21, 22),
    gsSPNTriangles_5b(20, 22, 23, 24, 25, 26, 24, 26, 27, 28, 29, 30),
    gsSPNTriangles_5b(28, 30, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(ef_s_palm4_cutR_trunk_model)
    gsSPDisplayList(ef_s_palm_trunk_modeset),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 64, 48, obj_s_palm_cutL_tex_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&ef_s_palm4_cutR_v[32], 6, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 0, 2, 3, 1, 4, 5),
    gsSPNTriangles_5b(1, 5, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

cKF_Joint_R_c cKF_je_r_ef_s_palm4_cutR_tbl[] = {
    { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 750, 0, 0 } },
    { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
    { ef_s_palm4_cutR_trunk_model, 1, cKF_JOINT_FLAG_DISP_OPA, { 2000, 0, 0 } },
    { ef_s_palm4_cutR_leaf_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 4000, 0, 0 } }
};

cKF_Skeleton_R_c cKF_bs_r_ef_s_palm4_cutR = { ARRAY_COUNT(cKF_je_r_ef_s_palm4_cutR_tbl), 2,
                                              cKF_je_r_ef_s_palm4_cutR_tbl };
