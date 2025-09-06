#include "dolphin/vi.h"
#include "dolphin/gx/GXStruct.h"

void VIWaitForRetrace() {
}

void VIConfigurePan(u16 xOrg, u16 yOrg, u16 width, u16 height) {
}

u32 VIGetDTVStatus(void) {
}

void VISetBlack(BOOL black) {
}

u32 VIGetRetraceCount(void) {
    return 0;
}

void VISetNextFrameBuffer(void* fb) {
}

void VIConfigure(const GXRenderModeObj* rm) {
}

VIRetraceCallback VISetPreRetraceCallback(VIRetraceCallback cb) {
    return NULL;
}

VIRetraceCallback VISetPostRetraceCallback(VIRetraceCallback cb) {
    return NULL;
}