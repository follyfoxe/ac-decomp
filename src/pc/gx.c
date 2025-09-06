#include "dolphin/gx.h"

GXRenderModeObj GXNtsc480Int = {
    0, 640, 480, 480, 40, 0, 640, 480, 1, 0, 0, { 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6 }, { 0, 0, 21, 22, 21, 0, 0 }
};

void GXSetPointSize(u8 pointSize, GXTexOffset texOffsets) {
}

void GXEnableTexOffsets(GXTexCoordID coord, bool line_enable, bool point_enable) {
}

void GXSetCoPlanar(bool enable) {
}

void GXSetClipMode(GXClipMode mode) {
}

void GXSetScissorBoxOffset(s32 x_off, s32 y_off) {
}

void GXSetFogRangeAdj(GXBool enable, u16 center, GXFogAdjTable *table) {
}

void GXSetFieldMask(GXBool odd_mask, GXBool even_mask) {
}

void GXSetFieldMode(GXBool field_mode, GXBool half_aspect_ratio) {
}

void GXAbortFrame(void) {
}

void GXSetCopyClamp(GXFBClamp clamp) {
}

void GXReadXfRasMetric(u32 *xf_wait_in, u32 *xf_wait_out, u32 *ras_busy, u32 *clocks) {
}