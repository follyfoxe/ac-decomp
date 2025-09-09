#include <aurora/aurora.h>
#include <aurora/event.h>
#include <dolphin/gx.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "dolphin/os.h"
#include "boot.h"
#include "os/__ppc_eabi_init.h"

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

void customInit(const int argc, char** argv) {
    printf("hi");

    const int size = 24 * 1024 * 1024;
    cachedMemory = malloc(size);
    uncachedMemory = malloc(size);

    __ArenaLo = cachedMemory;
    __ArenaHi = __ArenaLo + size;

    /*const AuroraConfig config = {
        .appName = "ac",
        .logCallback = &log_callback,
    };
    aurora_initialize(argc, argv, &config);*/
}

void customShutdown() {
    //aurora_shutdown();

    if (cachedMemory != NULL)
        free(cachedMemory);
    if (uncachedMemory != NULL)
        free(uncachedMemory);
}

/*int main(int argc, char* argv[]) {
    const AuroraConfig config = {
        .appName = "ac",
        .logCallback = &log_callback,
    };
    AuroraInfo initInfo = aurora_initialize(argc, argv, &config);

    bool exiting = false;
    bool paused = false;
    while (!exiting) {
        const AuroraEvent* event = aurora_update();
        while (event != NULL && event->type != AURORA_NONE) {
            switch (event->type) {
                case AURORA_EXIT:
                    exiting = true;
                    break;
                case AURORA_PAUSED:
                    paused = true;
                    break;
                case AURORA_UNPAUSED:
                    paused = false;
                    break;
                case AURORA_WINDOW_RESIZED:
                    initInfo.windowSize = event->windowSize;
                    break;
                default:
                    break;
            }
            ++event;
        }
        if (exiting || paused || !aurora_begin_frame())
            continue;
        aurora_end_frame();
    }

    aurora_shutdown();
    return 0;
}*/