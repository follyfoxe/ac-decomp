# auto-generated file
add_library(JKernel STATIC
		"src/static/JSystem/JKernel/JKRAram.cpp"
		"src/static/JSystem/JKernel/JKRAramArchive.cpp"
		"src/static/JSystem/JKernel/JKRAramBlock.cpp"
		"src/static/JSystem/JKernel/JKRAramHeap.cpp"
		"src/static/JSystem/JKernel/JKRAramPiece.cpp"
		"src/static/JSystem/JKernel/JKRAramStream.cpp"
		"src/static/JSystem/JKernel/JKRArchivePri.cpp"
		"src/static/JSystem/JKernel/JKRArchivePub.cpp"
		"src/static/JSystem/JKernel/JKRCompArchive.cpp"
		"src/static/JSystem/JKernel/JKRDecomp.cpp"
		"src/static/JSystem/JKernel/JKRDisposer.cpp"
		"src/static/JSystem/JKernel/JKRDvdAramRipper.cpp"
		"src/static/JSystem/JKernel/JKRDvdArchive.cpp"
		"src/static/JSystem/JKernel/JKRDvdFile.cpp"
		"src/static/JSystem/JKernel/JKRDvdRipper.cpp"
		"src/static/JSystem/JKernel/JKRExpHeap.cpp"
		"src/static/JSystem/JKernel/JKRFileFinder.cpp"
		"src/static/JSystem/JKernel/JKRFileLoader.cpp"
		"src/static/JSystem/JKernel/JKRHeap.cpp"
		"src/static/JSystem/JKernel/JKRMemArchive.cpp"
		"src/static/JSystem/JKernel/JKRThread.cpp")
target_include_directories(JKernel PRIVATE ${INCLUDE})
target_compile_definitions(JKernel PRIVATE ${DEFINES})
target_compile_options(JKernel PRIVATE ${OPTIONS})
