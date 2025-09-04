# auto-generated file
add_library(JSupport STATIC
		"src/static/JSystem/JSupport/JSUFileStream.cpp"
		"src/static/JSystem/JSupport/JSUInputStream.cpp"
		"src/static/JSystem/JSupport/JSUList.cpp")
target_include_directories(JSupport PRIVATE ${INCLUDE})
target_compile_definitions(JSupport PRIVATE ${DEFINES})
target_compile_options(JSupport PRIVATE ${OPTIONS})
