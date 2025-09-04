# auto-generated file
add_library(card STATIC
		"src/static/dolphin/card/CARDBios.c"
		"src/static/dolphin/card/CARDBlock.c"
		"src/static/dolphin/card/CARDCheck.c"
		"src/static/dolphin/card/CARDCreate.c"
		"src/static/dolphin/card/CARDDelete.c"
		"src/static/dolphin/card/CARDDir.c"
		"src/static/dolphin/card/CARDFormat.c"
		"src/static/dolphin/card/CARDMount.c"
		"src/static/dolphin/card/CARDNet.c"
		"src/static/dolphin/card/CARDOpen.c"
		"src/static/dolphin/card/CARDRdwr.c"
		"src/static/dolphin/card/CARDRead.c"
		"src/static/dolphin/card/CARDRename.c"
		"src/static/dolphin/card/CARDStat.c"
		"src/static/dolphin/card/CARDStatEx.c"
		"src/static/dolphin/card/CARDWrite.c")
target_include_directories(card PRIVATE ${INCLUDE})
target_compile_definitions(card PRIVATE ${DEFINES})
target_compile_options(card PRIVATE ${OPTIONS})
