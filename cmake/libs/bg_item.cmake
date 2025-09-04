# auto-generated file
add_library(bg_item STATIC
		"src/bg_item/bg_cherry_item.c"
		"src/bg_item/bg_item.c"
		"src/bg_item/bg_police_item.c"
		"src/bg_item/bg_post_item.c"
		"src/bg_item/bg_winter_item.c"
		"src/bg_item/bg_xmas_item.c")
target_include_directories(bg_item PRIVATE ${INCLUDE})
target_compile_definitions(bg_item PRIVATE ${DEFINES})
target_compile_options(bg_item PRIVATE ${OPTIONS})
