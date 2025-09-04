# auto-generated file
add_library(Famicom STATIC
		"src/static/Famicom/ks_nes_core.cpp"
		"src/static/Famicom/ks_nes_draw.cpp"
		"src/static/Famicom/famicom.cpp"
		"src/static/Famicom/famicom_nesinfo.cpp")
target_include_directories(Famicom PRIVATE ${INCLUDE})
target_compile_definitions(Famicom PRIVATE ${DEFINES})
target_compile_options(Famicom PRIVATE ${OPTIONS})
