# auto-generated file
add_library(dvd STATIC
		"src/static/dolphin/dvd/dvd.c"
		"src/static/dolphin/dvd/dvderror.c"
		"src/static/dolphin/dvd/dvdfs.c"
		"src/static/dolphin/dvd/dvdlow.c"
		"src/static/dolphin/dvd/dvdqueue.c"
		"src/static/dolphin/dvd/fstload.c")
target_include_directories(dvd PRIVATE ${INCLUDE})
target_compile_definitions(dvd PRIVATE ${DEFINES})
target_compile_options(dvd PRIVATE ${OPTIONS})
