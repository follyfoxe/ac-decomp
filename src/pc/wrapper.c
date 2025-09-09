#include "dolphin/PPCArch.h"
#include "os/OSLink.h"
#include "boot.h"
#include "JSystem/JUtility/JUTFont.h"

#include <stdlib.h>

// big endian :(
const u8 Ascfont_fix12_data[] = {
#embed "../../build/GAFE01_00/bin/assets/JSystem/JUtility/FontData/Ascfont_fix12.bfn"
};

void* cachedMemory = NULL;
void* uncachedMemory = NULL;

u8* __ArenaLo = NULL;
u8* __ArenaHi = NULL;
char _stack_addr = {};

void* BOOT_REGION_START = NULL;
void* BOOT_REGION_END = NULL;

OSModuleQueue __OSModuleList = {};
void* __OSStringTable = NULL;

u8 OS_REBOOT_BOOL = false;
u32 UNK_817FFFF8 = 0;
u32 UNK_817FFFFC = 0;

u8 _stack_end[] = {};

u32 PPCMfwpar() {
}

void __VIInitPhilips() {
}

int __OSReadROM(void* buffer, long length, long offset) {
}

OSModuleHeader* BaseModule = NULL;

void __OSSystemCallVectorStart() {
}
void __OSSystemCallVectorEnd() {
}

void __OSEVStart(void) {
}
void __OSEVEnd(void) {
}
void __OSEVSetNumber(void) {
}
void __OSExceptionVector(void) {
}

void __DBVECTOR(void) {
}
void __OSDBINTSTART(void) {
}
void __OSDBINTEND(void) {
}
void __OSDBJUMPSTART(void) {
}
void __OSDBJUMPEND(void) {
}