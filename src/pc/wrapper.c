#include "dolphin/PPCArch.h"
#include "os/OSLink.h"

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

// TODO: Estimate size
unsigned char __ArenaLo[] = {};
char _stack_addr = {};
unsigned char __ArenaHi = {};

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