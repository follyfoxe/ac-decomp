# auto-generated file
add_library(gba STATIC
		"src/static/dolphin/gba/GBA.c"
		"src/static/dolphin/gba/GBAGetProcessStatus.c"
		"src/static/dolphin/gba/GBAJoyBoot.c"
		"src/static/dolphin/gba/GBARead.c"
		"src/static/dolphin/gba/GBAWrite.c"
		"src/static/dolphin/gba/GBAXfer.c")
target_include_directories(gba PRIVATE ${INCLUDE})
target_compile_definitions(gba PRIVATE ${DEFINES})
target_compile_options(gba PRIVATE ${OPTIONS})
