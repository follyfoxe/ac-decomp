# auto-generated file
add_library(pad STATIC
		"src/static/dolphin/pad/Pad.c"
		"src/static/dolphin/pad/Padclamp.c")
target_include_directories(pad PRIVATE ${INCLUDE})
target_compile_definitions(pad PRIVATE ${DEFINES})
target_compile_options(pad PRIVATE ${OPTIONS})
