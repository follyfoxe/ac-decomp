# auto-generated file
add_library(dsp STATIC
		"src/static/dolphin/dsp/dsp.c")
target_include_directories(dsp PRIVATE ${INCLUDE})
target_compile_definitions(dsp PRIVATE ${DEFINES})
target_compile_options(dsp PRIVATE ${OPTIONS})
