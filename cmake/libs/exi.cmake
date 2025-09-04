# auto-generated file
add_library(exi STATIC
		"src/static/dolphin/exi/EXIBios.c"
		"src/static/dolphin/exi/EXIUart.c")
target_include_directories(exi PRIVATE ${INCLUDE})
target_compile_definitions(exi PRIVATE ${DEFINES})
target_compile_options(exi PRIVATE ${OPTIONS})
