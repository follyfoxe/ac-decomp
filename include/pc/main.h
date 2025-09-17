#ifndef ANIMAL_CROSSING_MAIN_H
#define ANIMAL_CROSSING_MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

enum PC_STATE {
    PC_UNINITIALIZED = 0,
    PC_READY,
    PC_PAUSED,
    PC_EXITING
};

extern enum PC_STATE pcState;
extern void pcInit(int argc, char** argv);
extern bool pcBeginFrame();
extern void pcEndFrame();
extern void pcShutdown();

#ifdef __cplusplus
}
#endif

#endif // ANIMAL_CROSSING_MAIN_H
