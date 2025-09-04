# auto-generated file
add_library(ar STATIC
		"src/static/dolphin/ar/ar.c"
		"src/static/dolphin/ar/arq.c")
target_include_directories(ar PRIVATE ${INCLUDE})
target_compile_definitions(ar PRIVATE ${DEFINES})
target_compile_options(ar PRIVATE ${OPTIONS})
