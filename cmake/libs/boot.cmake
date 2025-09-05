add_library(boot STATIC
        "src/static/boot.c"
        "src/static/jsyswrap.cpp"
        "src/static/version.c"
        "src/static/initial_menu.c"
        "src/static/dvderr.c"
        "src/static/bootdata/gam_win1.c"
        "src/static/bootdata/gam_win2.c"
        "src/static/bootdata/gam_win3.c"
        "src/static/bootdata/logo_nin.c"
        "src/static/nintendo_hi_0.c"
        "src/static/GBA2/JoyBoot.c")
target_include_directories(boot PRIVATE ${INCLUDE})
target_compile_definitions(boot PRIVATE ${DEFINES})
target_compile_options(boot PRIVATE ${OPTIONS})
