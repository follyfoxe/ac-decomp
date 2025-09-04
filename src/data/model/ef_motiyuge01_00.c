#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

u8 ef_mitiyuge01_0_int_i4[] ATTRIBUTE_ALIGN(32) = {
#include "assets/ef_mitiyuge01_0_int_i4.inc"
};

u8 ef_motiyuge01_1_int_i4[] = {
#include "assets/ef_motiyuge01_1_int_i4.inc"
};

u8 ef_motiyuge01_2_int_i4[] = {
#include "assets/ef_motiyuge01_2_int_i4.inc"
};

Vtx ef_motiyuge01_00_v[] = {
#include "assets/ef_motiyuge01_00_v.inc"
};

GFX_ARR_BEGIN(ef_motiyuge01_00_modelT)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_I, G_IM_SIZ_4b, 16, 16, anime_1_txt),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(ef_motiyuge01_00_v, 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
