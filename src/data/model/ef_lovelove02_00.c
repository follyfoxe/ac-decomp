#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

u8 ef_lovelove02_0[] ATTRIBUTE_ALIGN(32) = {
#include "assets/ef_lovelove02_0.inc"
};

Vtx ef_lovelove02_00_v[] = {
#include "assets/ef_lovelove02_00_v.inc"
};

GFX_ARR_BEGIN(ef_lovelove02_00_modelT)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetEnvColor(255, 0, 100, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_XLU_SURF2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, ef_lovelove02_0),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 0, GX_MIRROR, GX_MIRROR, 0, 0),
    gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_DECAL_LEQUAL),
    gsSPVertex(ef_lovelove02_00_v, 4, 0),
    gsSPNTrianglesInit_5b(3, 0, 1, 2, 1, 3, 2, 1, 3, 2),
    gsSPEndDisplayList(),
GFX_ARR_END
