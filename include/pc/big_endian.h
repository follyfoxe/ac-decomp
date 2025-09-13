#ifndef ANIMAL_CROSSING_BIG_ENDIAN_H
#define ANIMAL_CROSSING_BIG_ENDIAN_H

#include "dolphin/types.h"

#define LITTLE_ENDIAN

#ifdef LITTLE_ENDIAN
#define BE16(num) num = swap16(num)
#define BE32(num) num = swap32(num)
#define BE64(num) num = swap64(num)
#else
#define BE16(num)
#define BE32(num)
#define BE64(num)
#endif

static u16 swap16(const u16 val) {
    return (val >> 8) | (val << 8);
}

static u32 swap32(const u32 val) {
    return ((val >> 24) & 0xFF) | ((val << 8) & 0xFF0000) | ((val >> 8) & 0xFF00) | ((val << 24) & 0xFF000000);
}

static u64 swap64(u64 val) {
    val = ((val << 8) & 0xFF00FF00FF00FF00ULL) | ((val >> 8) & 0x00FF00FF00FF00FFULL);
    val = ((val << 16) & 0xFFFF0000FFFF0000ULL) | ((val >> 16) & 0x0000FFFF0000FFFFULL);
    return (val << 32) | (val >> 32);
}

#ifdef __cplusplus
#include "PR/gbi.h"
#include "libforest/gbi_extensions.h"

static u16 swap(const u16 val) { return swap16(val); }
static u32 swap(const u32 val) { return swap32(val); }
static u64 swap(const u64 val) { return swap64(val); }
static Gfx swap(const Gfx& val) { return {{swap32(val.words.w0), swap32(val.words.w1)}}; }

static Gdma swap(Gdma val) {
    val.len = swap16(val.len);
    val.addr = swap32(val.addr);
    return val;
}
static Gtri swap(Gtri val) {
    val.pad = swap32(val.pad);
    return val;
}
static Gtri2 swap(const Gtri2& val) { return val; }

// TODO: check if value is modified in emu64
template<typename TExt>
static TExt get(const Gfx& gfx) {
#ifdef LITTLE_ENDIAN
    Gfx g = swap(gfx);
    return swap(*(TExt*)&g);
#else
    return *(TExt*)&gfx;
#endif
}

template<typename TExt>
static void set(Gfx& gfx, const TExt& ext) {
#ifdef LITTLE_ENDIAN
    gfx = swap(*(Gfx*)&ext);
#else
    gfx = *(Gfx*)&ext;
#endif
}
#endif

#endif // ANIMAL_CROSSING_BIG_ENDIAN_H
