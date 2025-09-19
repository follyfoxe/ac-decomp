#include <aurora/aurora.h>
#include <aurora/event.h>
#include <dolphin/gx.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "dolphin/os.h"
#include "boot.h"
#include "os/__ppc_eabi_init.h"

#include "pc/main.h"

static void log_callback(AuroraLogLevel level, const char* module, const char* message, unsigned int len) {
    const char* levelStr;
    FILE* out = stdout;
    switch (level) {
        case LOG_DEBUG:
            levelStr = "DEBUG";
            break;
        case LOG_INFO:
            levelStr = "INFO";
            break;
        case LOG_WARNING:
            levelStr = "WARNING";
            break;
        case LOG_ERROR:
            levelStr = "ERROR";
            out = stderr;
            break;
        case LOG_FATAL:
            levelStr = "FATAL";
            out = stderr;
            break;
    }
    fprintf(out, "[%s: %s]\n", levelStr, message);
    if (level == LOG_FATAL) {
        fflush(out);
        abort();
    }
}

AuroraInfo initInfo = {};
enum PC_STATE pcState = PC_UNINITIALIZED;
bool drawing = false;
int test = 0;

void pcInit(const int argc, char** argv) {
    const int size = 24 * 1024 * 1024;
    cachedMemory = malloc(size);
    uncachedMemory = malloc(size);

    memset(cachedMemory, 0, size);
    memset(uncachedMemory, 0, size);

    __ArenaLo = cachedMemory;
    __ArenaHi = __ArenaLo + size;

    OSBootInfo* bootInfo = OSPhysicalToCached(0);
    bootInfo->memorySize = size * 2;

    pcState = PC_UNINITIALIZED;
    drawing = false;
}

bool pcBeginFrame() {
    if (pcState == PC_UNINITIALIZED) {
        const AuroraConfig config = {
            .appName = "ac",
            .logCallback = &log_callback,
            .windowPosX = 32,
            .windowPosY = 32
        };
        initInfo = aurora_initialize(0, NULL, &config);
        pcState = PC_READY;
    }

    pcEndFrame();
    const AuroraEvent* event = aurora_update();
    while (event != NULL && event->type != AURORA_NONE) {
        switch (event->type) {
            case AURORA_EXIT:
                pcState = PC_EXITING;
                break;
            case AURORA_PAUSED:
                pcState = PC_PAUSED;
                break;
            case AURORA_UNPAUSED:
                pcState = PC_READY;
                break;
            case AURORA_WINDOW_RESIZED:
                initInfo.windowSize = event->windowSize;
                break;
            default:
                break;
        }
        ++event;
    }
    //if (exiting || paused || !aurora_begin_frame())
    //    return false;
    if (!aurora_begin_frame())
        printf("Couldn't begin frame\n");
    test++;
    if (test > 255)
        test = 0;
    GXSetCopyClear(
      (GXColor){
          .r = test,
          .g = 0,
          .b = 100,
          .a = 255,
      },
      GX_MAX_Z24);
    drawing = true;
    return true;
}

void pcEndFrame() {
    if (drawing) {
        aurora_end_frame();
        drawing = false;
    }
}

void pcShutdown() {
    pcEndFrame();
    aurora_shutdown();

    if (cachedMemory != NULL)
        free(cachedMemory);
    if (uncachedMemory != NULL)
        free(uncachedMemory);
}