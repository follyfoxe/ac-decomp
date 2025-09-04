# auto-generated file
add_library(ai STATIC
		"src/static/dolphin/ai/ai.c")
target_include_directories(ai PRIVATE ${INCLUDE})
target_compile_definitions(ai PRIVATE ${DEFINES})
target_compile_options(ai PRIVATE ${OPTIONS})
