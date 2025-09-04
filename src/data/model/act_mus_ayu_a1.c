#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

extern Vtx act_mus_ayu_a1_v[];
static u16 int_sum_ayu_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/act_mus_ayu_a1/int_sum_ayu_pal.inc"
};

static u8 act_mus_ayu_body_txt[] = {
#include "assets/act_mus_ayu_a1/act_mus_ayu_body_txt.inc"
};

Vtx act_mus_ayu_a1_v[] = {
#include "assets/act_mus_ayu_a1_v.inc"
};

GFX_ARR_BEGIN(act_mus_ayu_sakana_body_model)
    gsSPMatrix(anime_6_mdl, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(act_mus_ayu_a1_v, 8, 0),
    gsSPMatrix(&anime_6_mdl[1], G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_ayu_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 48, 32, act_mus_ayu_body_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&act_mus_ayu_a1_v[8], 18, 8),
    gsSPNTrianglesInit_5b(12, 3, 8, 9, 7, 10, 6, 0, 11, 5),
    gsSPNTriangles_5b(4, 12, 13, 3, 6, 14, 3, 15, 16, 0, 17, 18),
    gsSPNTriangles_5b(0, 4, 19, 0, 21, 20, 6, 23, 22, 1, 3, 24),
    gsSPNTriangles_5b(4, 2, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPVertex(&act_mus_ayu_a1_v[26], 16, 0),
    gsSPNTrianglesInit_5b(14, 0, 1, 2, 0, 3, 4, 5, 0, 2),
    gsSPNTriangles_5b(6, 7, 8, 0, 4, 1, 0, 5, 9, 8, 10, 11),
    gsSPNTriangles_5b(11, 6, 8, 10, 8, 12, 9, 3, 0, 8, 7, 13),
    gsSPNTriangles_5b(14, 3, 9, 13, 12, 8, 7, 15, 13, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(act_mus_ayu_sakana_head_model)
    gsDPLoadTLUT_Dolphin(15, 16, 1, int_sum_ayu_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 48, 32, act_mus_ayu_body_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_CLAMP, GX_CLAMP, 0, 0),
    gsSPVertex(&act_mus_ayu_a1_v[42], 24, 0),
    gsSPNTrianglesInit_5b(6, 0, 1, 2, 3, 4, 5, 2, 6, 0),
    gsSPNTriangles_5b(5, 7, 3, 1, 8, 2, 5, 9, 7, 0, 0, 0),
    gsSPNTrianglesInit_5b(12, 10, 11, 12, 13, 14, 15, 16, 17, 12),
    gsSPNTriangles_5b(13, 18, 19, 13, 20, 14, 12, 21, 10, 19, 20, 13),
    gsSPNTriangles_5b(13, 22, 18, 15, 22, 13, 12, 23, 16, 17, 21, 12),
    gsSPNTriangles_5b(11, 23, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END

cKF_Joint_R_c cKF_je_r_act_mus_ayu_a1_tbl[] = {
    { NULL, 1, cKF_JOINT_FLAG_DISP_OPA, { 73, 65488, 999 } },
    { act_mus_ayu_sakana_head_model, 1, cKF_JOINT_FLAG_DISP_OPA, { 0, 0, 0 } },
    { act_mus_ayu_sakana_body_model, 0, cKF_JOINT_FLAG_DISP_OPA, { 1145, 0, 0 } }
};

cKF_Skeleton_R_c cKF_bs_r_act_mus_ayu_a1 = { ARRAY_COUNT(cKF_je_r_act_mus_ayu_a1_tbl), 2, cKF_je_r_act_mus_ayu_a1_tbl };
