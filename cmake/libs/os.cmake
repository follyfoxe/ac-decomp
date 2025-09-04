# auto-generated file
add_library(os STATIC
		"src/static/dolphin/os/__ppc_eabi_init.cpp"
		"src/static/dolphin/os/__start.c"
		"src/static/dolphin/os/OS.c"
		"src/static/dolphin/os/OSAlarm.c"
		"src/static/dolphin/os/OSAlloc.c"
		"src/static/dolphin/os/OSArena.c"
		"src/static/dolphin/os/OSAudioSystem.c"
		"src/static/dolphin/os/OSCache.c"
		"src/static/dolphin/os/OSContext.c"
		"src/static/dolphin/os/OSError.c"
		"src/static/dolphin/os/OSFont.c"
		"src/static/dolphin/os/OSInterrupt.c"
		"src/static/dolphin/os/OSLink.c"
		"src/static/dolphin/os/OSMemory.c"
		"src/static/dolphin/os/OSMessage.c"
		"src/static/dolphin/os/OSMutex.c"
		"src/static/dolphin/os/OSReboot.c"
		"src/static/dolphin/os/OSReset.c"
		"src/static/dolphin/os/OSResetSW.c"
		"src/static/dolphin/os/OSRtc.c"
		"src/static/dolphin/os/OSSync.c"
		"src/static/dolphin/os/OSThread.c"
		"src/static/dolphin/os/OSTime.c")
target_include_directories(os PRIVATE ${INCLUDE})
target_compile_definitions(os PRIVATE ${DEFINES})
target_compile_options(os PRIVATE ${OPTIONS})
