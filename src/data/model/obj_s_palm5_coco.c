#include "libforest/gbi_extensions.h"
#include "PR/gbi.h"
#include "evw_anime.h"
#include "c_keyframe.h"

Vtx obj_s_palm5_coco_v[] ATTRIBUTE_ALIGN(32) = {
#include "assets/obj_s_palm5_coco_v.inc"
};

GFX_ARR_BEGIN(obj_s_palm5_cocoT_gfx_model)
    gsSPVertex(obj_s_palm5_coco_v, 8, 0),
    gsSPNTrianglesInit_5b(4, 0, 1, 2, 0, 2, 3, 4, 5, 6),
    gsSPNTriangles_5b(4, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    gsSPEndDisplayList(),
GFX_ARR_END
