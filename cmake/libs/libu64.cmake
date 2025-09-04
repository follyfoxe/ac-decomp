# auto-generated file
add_library(libu64 STATIC
		"src/static/libu64/debug.c"
		"src/static/libu64/gfxprint.c"
		"src/static/libu64/gfxprint_data.c"
		"src/static/libu64/pad.c")
target_include_directories(libu64 PRIVATE ${INCLUDE})
target_compile_definitions(libu64 PRIVATE ${DEFINES})
target_compile_options(libu64 PRIVATE ${OPTIONS})
