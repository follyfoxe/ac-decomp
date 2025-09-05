#ifndef ANIMAL_CROSSING_MACROS_H
#define ANIMAL_CROSSING_MACROS_H

#define __sync(...)
#define __declspec(...)
#define __cntlzw
#define asm
#define nofralloc

#define CONCAT1(a, b) a##b
#define CONCAT2(a, b) CONCAT1(a, b)

#define CONSTRUCTOR __attribute__((constructor))

#define LAZY_ARR_BEGIN(type, name, ...) \
    type name[] __VA_ARGS__; \
    CONSTRUCTOR void CONCAT2(name##_INIT, __COUNTER__)() { \
        type* target = name; \
        type temp[] = {
#define LAZY_ARR_END }; \
        memcpy(target, temp, sizeof(temp)); \
    }

/*#define LAZY_ARR_BEGIN(type, name, ...) \
    type name[] __VA_ARGS__; \
    void CONCAT2(name##_INIT, __COUNTER__)() { \
        type* target = name; \
        type temp[] = {
#define LAZY_ARR_END }; \
        memcpy(target, temp, sizeof(temp)); \
    }*/

#define GFX_ARR_BEGIN(name, ...) LAZY_ARR_BEGIN(Gfx, name, __VA_ARGS__)
#define GFX_ARR_END LAZY_ARR_END

#endif

// Find: (asm \w+ \w+\([^\)]*\)\s*\{)\s(?!#)([^}]*)(})
// Replace: $1\n#ifdef ENABLE_ASM\n$2\#endif\n$3

// Find: extern (\w+) (\w+)\[];\nstatic \1 \2\[]
// Replace: extern $1 $2[];\n$1 $2[]

// Find: Scene_Word_u (\w+)\[] = \{([^}]*)(};)
// Replace: LAZY_ARR_BEGIN(Scene_Word_u, $1)$2LAZY_ARR_END

// Find: Gfx (\w+)\[] = \{([^}]*)(};)
// Replace: GFX_ARR_BEGIN($1)$2GFX_ARR_END