#ifndef ANIMAL_CROSSING_MACROS_H
#define ANIMAL_CROSSING_MACROS_H

#define __sync(...)
#define __declspec(...)
#define __cntlzw
#define asm

// Find: extern (\w+) (\w+)\[];\nstatic \1 \2\[]
// Replace: extern $1 $2[];\n$1 $2[]

// Find: Scene_Word_u (\w+)\[] = \{([^}]*)(};)
// Replace: LAZY_ARR_BEGIN(Scene_Word_u, $1)$2LAZY_ARR_END

// Find: Gfx (\w+)\[] = \{([^}]*)(};)
// Replace: GFX_ARR_BEGIN($1)$2GFX_ARR_END

#define LAZY_ARR_BEGIN(type, name, ...) \
    type name[] __VA_ARGS__; \
    __attribute__((constructor)) \
    void name##_INIT() { \
        type* target = name; \
        type temp[] = {
#define LAZY_ARR_END }; \
        memcpy(target, temp, sizeof(temp)); \
    }

#define GFX_ARR_BEGIN(name, ...) LAZY_ARR_BEGIN(Gfx, name, __VA_ARGS__)
#define GFX_ARR_END LAZY_ARR_END

#endif
