# auto-generated file
add_library(gx STATIC
		"src/static/dolphin/gx/GXAttr.c"
		"src/static/dolphin/gx/GXBump.c"
		"src/static/dolphin/gx/GXDisplayList.c"
		"src/static/dolphin/gx/GXFifo.c"
		"src/static/dolphin/gx/GXFrameBuf.c"
		"src/static/dolphin/gx/GXGeometry.c"
		"src/static/dolphin/gx/GXInit.c"
		"src/static/dolphin/gx/GXLight.c"
		"src/static/dolphin/gx/GXMisc.c"
		"src/static/dolphin/gx/GXPerf.c"
		"src/static/dolphin/gx/GXPixel.c"
		"src/static/dolphin/gx/GXStubs.c"
		"src/static/dolphin/gx/GXTev.c"
		"src/static/dolphin/gx/GXTexture.c"
		"src/static/dolphin/gx/GXTransform.c")
target_include_directories(gx PRIVATE ${INCLUDE})
target_compile_definitions(gx PRIVATE ${DEFINES})
target_compile_options(gx PRIVATE ${OPTIONS})
