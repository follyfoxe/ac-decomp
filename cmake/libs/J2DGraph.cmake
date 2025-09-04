# auto-generated file
add_library(J2DGraph STATIC
		"src/static/JSystem/J2DGraph/J2DGrafContext.cpp"
		"src/static/JSystem/J2DGraph/J2DOrthoGraph.cpp")
target_include_directories(J2DGraph PRIVATE ${INCLUDE})
target_compile_definitions(J2DGraph PRIVATE ${DEFINES})
target_compile_options(J2DGraph PRIVATE ${OPTIONS})
