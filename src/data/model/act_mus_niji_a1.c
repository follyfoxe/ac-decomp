#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx act_mus_niji_a1_v[];
static u16 int_sum_niji_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/act_mus_niji_a1/int_sum_niji_pal.inc"
};

u8 act_mus_niji_body_txt[] = {
#include "assets/act_mus_niji_body_txt.inc"
};

Vtx act_mus_niji_a1_v[] = {
#include "assets/act_mus_niji_a1_v.inc"
};

GFX_ARR_BEGIN(act_mus_niji_sakana_body_model)
    gsSPMatrix(anime_6_mdl, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(act_mus_niji_a1_v, 8, 0),
    gsSPMatrix(&anime_6_mdl[1], G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_niji_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 48, 32, act_mus_niji_body_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&act_mus_niji_a1_v[8], 14, 8),
    gsSPNTrianglesInit_5b(10, 6, 8, 2, 4, 9, 6, 7, 10, 5),
    gsSPNTriangles_5b(0, 2, 11, 2, 13, 12, 6, 15, 14, 7, 17, 16),
    gsSPNTriangles_5b(3, 19, 18, 3, 20, 7, 3, 1, 21, 0, 0, 0),
    gsSPVertex(&act_mus_niji_a1_v[22], 18, 0),
    gsSPNTrianglesInit_5b(18, 0, 1, 2, 0, 3, 4, 5, 0, 2),
    gsSPNTriangles_5b(6, 7, 8, 0, 4, 1, 0, 5, 9, 8, 10, 11),
    gsSPNTriangles_5b(11, 6, 8, 10, 8, 12, 13, 9, 5, 12, 14, 15),
    gsSPNTriangles_5b(9, 3, 0, 8, 7, 14, 9, 16, 3, 13, 16, 9),
    gsSPNTriangles_5b(14, 12, 8, 7, 17, 14, 14, 17, 15, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(act_mus_niji_sakana_head_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_niji_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 48, 32, act_mus_niji_body_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&act_mus_niji_a1_v[40], 22, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 3, 4, 5, 3, 6, 4),
    gsSPNTriangles_5b(1, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPNTrianglesInit_5b(12, 8, 9, 10, 11, 12, 13, 8, 14, 15),
    gsSPNTriangles_5b(16, 17, 13, 13, 17, 11, 10, 14, 8, 10, 18, 14),
    gsSPNTriangles_5b(15, 9, 8, 19, 17, 16, 13, 12, 16, 17, 20, 11),
    gsSPNTriangles_5b(15, 14, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

cKF_Joint_R_c cKF_je_r_act_mus_niji_a1_tbl[] = {
    { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 74, 65488, 1103 } },
    { act_mus_niji_sakana_head_model, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
    { act_mus_niji_sakana_body_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 1200, 0, 0 } }
};

cKF_Skeleton_R_c cKF_bs_r_act_mus_niji_a1 = { ARRAY_COUNT(cKF_je_r_act_mus_niji_a1_tbl), 2,
                                              cKF_je_r_act_mus_niji_a1_tbl };
