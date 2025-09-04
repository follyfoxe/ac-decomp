# auto-generated file
add_library(libforest STATIC
		"src/static/libforest/emu64/emu64.c"
		"src/static/libforest/osreport.c"
		"src/static/libforest/fault.c"
		"src/static/libforest/ReconfigBATs.c")
target_include_directories(libforest PRIVATE ${INCLUDE})
target_compile_definitions(libforest PRIVATE ${DEFINES})
target_compile_options(libforest PRIVATE ${OPTIONS})
