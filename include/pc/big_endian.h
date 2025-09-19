#ifndef ANIMAL_CROSSING_BIG_ENDIAN_H
#define ANIMAL_CROSSING_BIG_ENDIAN_H

#include "dolphin/types.h"

#define LITTLE_ENDIAN
#define SWAP16(num) (num) = swap16(num)
#define SWAP32(num) (num) = swap32(num)
#define SWAP64(num) (num) = swap64(num)

#ifdef LITTLE_ENDIAN
#define BE16(num) SWAP16(num)
#define BE32(num) SWAP32(num)
#define BE64(num) SWAP64(num)
#else
#define BE16(num)
#define BE32(num)
#define BE64(num)
#endif

static u16 swap16(const u16 val) {
#if defined(_MSC_VER)
    return _byteswap_ushort(val);
#elif defined(__GNUC__)
    return __builtin_bswap16(val);
#else
    return (val >> 8) | (val << 8);
#endif
}

static u32 swap32(const u32 val) {
#if defined(_MSC_VER)
    return _byteswap_ulong(val);
#elif defined(__GNUC__)
    return __builtin_bswap32(val);
#else
    return ((val >> 24) & 0xFF) | ((val << 8) & 0xFF0000) | ((val >> 8) & 0xFF00) | ((val << 24) & 0xFF000000);
#endif
}

static u64 swap64(u64 val) {
#if defined(_MSC_VER)
    return _byteswap_uint64(val);
#elif defined(__GNUC__)
    return __builtin_bswap64(val);
#else
    val = ((val << 8) & 0xFF00FF00FF00FF00ULL) | ((val >> 8) & 0x00FF00FF00FF00FFULL);
    val = ((val << 16) & 0xFFFF0000FFFF0000ULL) | ((val >> 16) & 0x0000FFFF0000FFFFULL);
    return (val << 32) | (val >> 32);
#endif
}

#ifdef __cplusplus
static u16 swap(const u16 val) { return swap16(val); }
static u32 swap(const u32 val) { return swap32(val); }
static u64 swap(const u64 val) { return swap64(val); }
#endif

#endif // ANIMAL_CROSSING_BIG_ENDIAN_H
