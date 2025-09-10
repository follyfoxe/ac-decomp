# auto-generated file
add_library(foresta STATIC
		"src/audio.c"
		"src/c_keyframe.c"
		"src/ev_cherry_manager.c"
		"src/evw_anime.c"
		"src/executor.c"
		"src/f_furniture.c"
		#"src/famicom_emu.c"
		"src/first_game.c"
		"src/game.c"
		"src/gamealloc.c"
		"src/gfxalloc.c"
		"src/graph.c"
		"src/irqmgr.c"
		"src/lb_reki.c"
		"src/lb_rtc.c"
		"src/main.c"
		"src/padmgr.c"
		"src/player_select.c"
		"src/PreRender.c"
		"src/s_cpak.c"
		"src/save_menu.c"
		"src/second_game.c"
		"src/THA_GA.c"
		"src/TwoHeadArena.c"
		"src/zurumode.c")
target_include_directories(foresta PRIVATE ${INCLUDE})
target_compile_definitions(foresta PRIVATE ${DEFINES})
target_compile_options(foresta PRIVATE ${OPTIONS})
