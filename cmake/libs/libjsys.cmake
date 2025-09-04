# auto-generated file
add_library(libjsys STATIC
		"src/static/libjsys/jsyswrapper.cpp")
target_include_directories(libjsys PRIVATE ${INCLUDE})
target_compile_definitions(libjsys PRIVATE ${DEFINES})
target_compile_options(libjsys PRIVATE ${OPTIONS})
