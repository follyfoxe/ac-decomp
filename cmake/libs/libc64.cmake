# auto-generated file
add_library(libc64 STATIC
		"src/static/libc64/__osMalloc.c"
		#"src/static/libc64/aprintf.c"
		#"src/static/libc64/math64.c"
		"src/static/libc64/qrand.c"
		#"src/static/libc64/sleep.c"
		#"src/static/libc64/sprintf.c"
		"src/static/libc64/malloc.c")
target_include_directories(libc64 PRIVATE ${INCLUDE})
target_compile_definitions(libc64 PRIVATE ${DEFINES})
target_compile_options(libc64 PRIVATE ${OPTIONS})
