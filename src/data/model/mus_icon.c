#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"
#include "ac_npc.h"
#include "ef_effect_control.h"

u16 inv_mwin_audio_pal[] ATTRIBUTE_ALIGN(32) = {
#include "assets/inv_mwin_audio_pal.inc"
};

u8 inv_mwin_audio_tex[] = {
#include "assets/inv_mwin_audio_tex.inc"
};

Vtx mus_icon_v[] = {
#include "assets/mus_icon_v.inc"
};

GFX_ARR_BEGIN(mus_icon_model_before)
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_XLU_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, inv_mwin_audio_pal),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_CI, G_IM_SIZ_4b, 32, 32, inv_mwin_audio_tex),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 15, GX_MIRROR, GX_MIRROR, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPEndDisplayList(),
GFX_ARR_END

GFX_ARR_BEGIN(mus_icon_model)
    gsSPVertex(mus_icon_v, 4, 0),
    gsSPNTrianglesInit_5b(2, 0, 1, 2, 1, 3, 2, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
