# auto-generated file
add_library(si STATIC
		"src/static/dolphin/si/SIBios.c"
		"src/static/dolphin/si/SISamplingRate.c")
target_include_directories(si PRIVATE ${INCLUDE})
target_compile_definitions(si PRIVATE ${DEFINES})
target_compile_options(si PRIVATE ${OPTIONS})
