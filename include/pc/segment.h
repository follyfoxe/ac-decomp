#ifndef ANIMAL_CROSSING_SEGMENT_H
#define ANIMAL_CROSSING_SEGMENT_H

// Not the best solution but eh I'll take my chances
#define IS_SEGMENT_PC(a) (((a) >> 31) & 1)
#define SEGMENT_OFFSET_PC(a) 0 // We don't seem to use this anyways
#define	SEGMENT_NUMBER_PC(a) ((a) & ~(1 << 31))
#define	SEGMENT_ADDR_PC(num, off) ((num) | (1 << 31))

// Find: gsSPDisplayList\(0x([^\)]*?)\)
// Replace gsSPDisplayList(SEGMENT_DOL_TO_PC(0x$1))
#define SEGMENT_DOL_TO_PC(a) SEGMENT_ADDR_PC(SEGMENT_NUMBER(a), SEGMENT_OFFSET(a))

#endif // ANIMAL_CROSSING_SEGMENT_H
