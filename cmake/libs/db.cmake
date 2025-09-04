# auto-generated file
add_library(db STATIC
		"src/static/dolphin/db/db.c")
target_include_directories(db PRIVATE ${INCLUDE})
target_compile_definitions(db PRIVATE ${DEFINES})
target_compile_options(db PRIVATE ${OPTIONS})
