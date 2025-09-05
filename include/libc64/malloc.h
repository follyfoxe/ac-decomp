#ifndef MALLOC_H
#define MALLOC_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

    extern void* osmalloc(size_t size);
    extern void osfree(void* ptr);

    extern void MallocInit(void* base, u32 len);
    extern void MallocCleanup();
    extern int  MallocIsInitalized();
    extern void GetFreeArena(u32* max_size, u32* free_size, u32* alloc_size);
    extern int CheckArena(); /* @unused */
    extern void DisplayArena();

#ifdef __cplusplus
}
#endif

#endif
