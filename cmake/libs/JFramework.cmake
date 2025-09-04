# auto-generated file
add_library(JFramework STATIC
		"src/static/JSystem/JFramework/JFWDisplay.cpp"
		"src/static/JSystem/JFramework/JFWSystem.cpp")
target_include_directories(JFramework PRIVATE ${INCLUDE})
target_compile_definitions(JFramework PRIVATE ${DEFINES})
target_compile_options(JFramework PRIVATE ${OPTIONS})
