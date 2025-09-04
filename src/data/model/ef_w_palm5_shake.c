#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx ef_w_palm5_shake_v[];
extern u8 ef_w_palm_leaf_modeset[];
Vtx ef_w_palm5_shake_v[] = {
#include "assets/ef_w_palm5_shake_v.inc"
};

GFX_ARR_BEGIN(ef_w_palm5_shake_model)
    gsSPDisplayList(ef_w_palm_leaf_modeset),
    gsSPVertex(ef_w_palm5_shake_v, 32, 0),
    gsSPNTrianglesInit_5b(16, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 16, 17, 18, 16, 18, 19, 20, 21, 22),
    gsSPNTriangles_5b(20, 22, 23, 24, 25, 26, 24, 26, 27, 28, 29, 30),
    gsSPNTriangles_5b(28, 30, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPVertex(&ef_w_palm5_shake_v[32], 16, 0),
    gsSPNTrianglesInit_5b(8, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 8, 9, 10, 8, 10, 11, 12, 13, 14),
    gsSPNTriangles_5b(12, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

cKF_Joint_R_c cKF_je_r_ef_w_palm5_shake_tbl[] = { { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 7000, 0 } },
                                                  { ef_w_palm5_shake_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } } };

cKF_Skeleton_R_c cKF_bs_r_ef_w_palm5_shake = { ARRAY_COUNT(cKF_je_r_ef_w_palm5_shake_tbl), 1,
                                               cKF_je_r_ef_w_palm5_shake_tbl };
