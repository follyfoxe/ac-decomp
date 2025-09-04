# auto-generated file
add_library(TRK_MINNOW_DOLPHIN STATIC
		"src/static/TRK_MINNOW_DOLPHIN/__exception.s"
		"src/static/TRK_MINNOW_DOLPHIN/dispatch.c"
		"src/static/TRK_MINNOW_DOLPHIN/dolphin_trk.c"
		"src/static/TRK_MINNOW_DOLPHIN/dolphin_trk_glue.c"
		"src/static/TRK_MINNOW_DOLPHIN/flush_cache.c"
		"src/static/TRK_MINNOW_DOLPHIN/main_TRK.c"
		"src/static/TRK_MINNOW_DOLPHIN/mainloop.c"
		"src/static/TRK_MINNOW_DOLPHIN/mem_TRK.c"
		"src/static/TRK_MINNOW_DOLPHIN/mpc_7xx_603e.c"
		"src/static/TRK_MINNOW_DOLPHIN/msg.c"
		"src/static/TRK_MINNOW_DOLPHIN/msgbuf.c"
		"src/static/TRK_MINNOW_DOLPHIN/msghndlr.c"
		"src/static/TRK_MINNOW_DOLPHIN/mslsupp.c"
		"src/static/TRK_MINNOW_DOLPHIN/mutex_TRK.c"
		"src/static/TRK_MINNOW_DOLPHIN/notify.c"
		"src/static/TRK_MINNOW_DOLPHIN/nubevent.c"
		"src/static/TRK_MINNOW_DOLPHIN/nubinit.c"
		"src/static/TRK_MINNOW_DOLPHIN/serpoll.c"
		"src/static/TRK_MINNOW_DOLPHIN/support.c"
		"src/static/TRK_MINNOW_DOLPHIN/targcont.c"
		"src/static/TRK_MINNOW_DOLPHIN/target_options.c"
		"src/static/TRK_MINNOW_DOLPHIN/targimpl.c"
		"src/static/TRK_MINNOW_DOLPHIN/targsupp.s"
		"src/static/TRK_MINNOW_DOLPHIN/usr_put.c")
target_include_directories(TRK_MINNOW_DOLPHIN PRIVATE ${INCLUDE})
target_compile_definitions(TRK_MINNOW_DOLPHIN PRIVATE ${DEFINES})
target_compile_options(TRK_MINNOW_DOLPHIN PRIVATE ${OPTIONS})
