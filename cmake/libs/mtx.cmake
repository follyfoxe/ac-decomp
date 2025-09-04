# auto-generated file
add_library(mtx STATIC
		"src/static/dolphin/mtx/mtx.c"
		"src/static/dolphin/mtx/mtx44.c"
		"src/static/dolphin/mtx/mtxvec.c"
		"src/static/dolphin/mtx/vec.c")
target_include_directories(mtx PRIVATE ${INCLUDE})
target_compile_definitions(mtx PRIVATE ${DEFINES})
target_compile_options(mtx PRIVATE ${OPTIONS})
