#include "dolphin/BASE/ppcarch.h"

asm u32 PPCMfmsr(void){
#ifdef ENABLE_ASM
    nofralloc
    mfmsr r3
    blr
#endif
}

asm void PPCMtmsr(register u32 value){
#ifdef ENABLE_ASM
    nofralloc
    mtmsr value
    blr
#endif
}

asm u32 PPCMfhid0(void){
#ifdef ENABLE_ASM
    nofralloc
    mfspr r3, 0x3f0
    blr
#endif
}

asm void PPCMthid0(register u32 value) {
#ifdef ENABLE_ASM
    nofralloc
    mtspr 0x3f0, value
    blr
#endif
} 

asm u32 PPCMfl2cr(void) {
#ifdef ENABLE_ASM
    nofralloc
    mfspr r3, 0x3f9
    blr
#endif
}

asm void PPCMtl2cr(register u32 value) {
#ifdef ENABLE_ASM
    nofralloc
    mtspr 0x3f9, value
    blr
#endif
}
asm void PPCMtdec(register u32 value) {
#ifdef ENABLE_ASM
    nofralloc
    mtspr 0x16, value
    blr
#endif
}

asm void PPCSync(void){
#ifdef ENABLE_ASM
    nofralloc
    sc
    blr
#endif
}

asm void PPCHalt(void){
#ifdef ENABLE_ASM
    nofralloc
    sync

loop:
    nop
    li r3, 0
    nop
    b loop
#endif
}
asm u32 PPCMfhid2(void){
#ifdef ENABLE_ASM
    nofralloc
    mfspr r3, 0x398
    blr
#endif
}

asm void PPCMthid2(u32 register value){
#ifdef ENABLE_ASM
    nofralloc
    mtspr 0x398, value
    blr
#endif
}
asm void PPCMtwpar(u32 register value){
#ifdef ENABLE_ASM
    nofralloc
    mtspr 0x399, value
    blr
#endif
}

void PPCDisableSpeculation(void) { 
    PPCMthid0(PPCMfhid0() | (1 << (31 - 22))); 
}

asm void PPCSetFpNonIEEEMode(void){
#ifdef ENABLE_ASM
    nofralloc
    mtfsb1 0x1D
    blr
#endif
}
 