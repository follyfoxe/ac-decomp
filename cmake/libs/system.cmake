# auto-generated file
add_library(system STATIC
		"src/system/sys_dynamic.c"
		"src/system/sys_math.c"
		"src/system/sys_math3d.c"
		"src/system/sys_math_atan.c"
		"src/system/sys_matrix.c"
		"src/system/sys_romcheck.c"
		"src/system/sys_stacks.c"
		"src/system/sys_ucode.c"
		"src/system/sys_vimgr.c")
target_include_directories(system PRIVATE ${INCLUDE})
target_compile_definitions(system PRIVATE ${DEFINES})
target_compile_options(system PRIVATE ${OPTIONS})
