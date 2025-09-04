# auto-generated file
add_library(vi STATIC
		"src/static/dolphin/vi/vi.c")
target_include_directories(vi PRIVATE ${INCLUDE})
target_compile_definitions(vi PRIVATE ${DEFINES})
target_compile_options(vi PRIVATE ${OPTIONS})
