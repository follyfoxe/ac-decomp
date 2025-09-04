set(SOURCES
        "src/static/libc64/qrand.c"
        "src/static/libc64/__osMalloc.c"

        # libu64
        "src/static/libu64/debug.c"
        "src/static/libu64/gfxprint.c"
        "src/static/libu64/gfxprint_data.c"
        "src/static/libu64/pad.c"

        #"src/static/boot.c"
        #"src/static/jsyswrap.cpp"
        "src/static/version.c"
        "src/static/initial_menu.c"
        "src/static/dvderr.c"
        "src/static/bootdata/gam_win1.c"
        "src/static/bootdata/gam_win2.c"
        "src/static/bootdata/gam_win3.c"
        "src/static/bootdata/logo_nin.c"
        "src/static/nintendo_hi_0.c"
        "src/static/GBA2/JoyBoot.c"
)
#set_source_files_properties(${SOURCES} PROPERTIES LANGUAGE CXX)
add_library(static STATIC ${SOURCES})
target_include_directories(static PRIVATE ${INCLUDE})
target_compile_definitions(static PRIVATE ${DEFINES})
target_compile_options(static PRIVATE ${OPTIONS})