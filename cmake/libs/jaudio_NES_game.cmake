# auto-generated file
add_library(jaudio_NES_game STATIC
		"src/static/jaudio_NES/game/audioheaders.c"
		"src/static/jaudio_NES/game/dummyprobe.c"
		"src/static/jaudio_NES/game/emusound.c"
		"src/static/jaudio_NES/game/game64.c"
		"src/static/jaudio_NES/game/kappa.c"
		"src/static/jaudio_NES/game/melody.c"
		"src/static/jaudio_NES/game/radio.c"
		"src/static/jaudio_NES/game/rhythm.c"
		"src/static/jaudio_NES/game/staff.c"
		"src/static/jaudio_NES/game/verysimple.c")
target_include_directories(jaudio_NES_game PRIVATE ${INCLUDE})
target_compile_definitions(jaudio_NES_game PRIVATE ${DEFINES})
target_compile_options(jaudio_NES_game PRIVATE ${OPTIONS})
