# auto-generated file
add_library(JUtility STATIC
		"src/static/JSystem/JUtility/JUTAssert.cpp"
		"src/static/JSystem/JUtility/JUTConsole.cpp"
		"src/static/JSystem/JUtility/JUTDbPrint.cpp"
		"src/static/JSystem/JUtility/JUTDirectFile.cpp"
		"src/static/JSystem/JUtility/JUTDirectPrint.cpp"
		"src/static/JSystem/JUtility/JUTException.cpp"
		"src/static/JSystem/JUtility/JUTFader.cpp"
		"src/static/JSystem/JUtility/JUTFont.cpp"
		"src/static/JSystem/JUtility/JUTFontData_Ascfont_fix12.s"
		"src/static/JSystem/JUtility/JUTGamePad.cpp"
		"src/static/JSystem/JUtility/JUTGraphFifo.cpp"
		"src/static/JSystem/JUtility/JUTProcBar.cpp"
		"src/static/JSystem/JUtility/JUTResFont.cpp"
		"src/static/JSystem/JUtility/JUTVideo.cpp"
		"src/static/JSystem/JUtility/JUTXfb.cpp")
target_include_directories(JUtility PRIVATE ${INCLUDE})
target_compile_definitions(JUtility PRIVATE ${DEFINES})
target_compile_options(JUtility PRIVATE ${OPTIONS})
