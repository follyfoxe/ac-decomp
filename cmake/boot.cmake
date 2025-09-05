set(AC_LIBS
        libforest
        libu64
        libc64
        libultra
        libjsys
        ai
        ar
        amcstubs
        base
        card
        db
        dsp
        dvd
        exi
        gba
        gx
        mtx
        OdemuExi2
        odenotstub
        os
        pad
        si
        vi
        J2DGraph
        JFramework
        JGadget
        JKernel
        JSupport
        JUtility
        #jaudio_NES_game
        #jaudio_NES_internal
        #Famicom
        #MSL_C.PPCEABI.bare.H
        #Runtime.PPCEABI.H
        #TRK_MINNOW_DOLPHIN
        foresta
        actor
        actor_npc
        actor_npc_event
        actor_tool
        bg_item
        effect
        game
        system
        dataobject)

foreach (LIB IN LISTS AC_LIBS)
        include("cmake/libs/${LIB}.cmake")
endforeach ()

foreach (LIB IN LISTS AC_LIBS)
        set(TEMP ${AC_LIBS})
        list(REMOVE_ITEM TEMP ${LIB})
        target_link_libraries(${LIB} ${TEMP})
endforeach ()

set_source_files_properties("src/static/libforest/emu64/emu64.c" PROPERTIES LANGUAGE CXX)
add_executable(boot
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
        "src/static/GBA2/JoyBoot.c"
        "src/pc/wrapper.c")

target_include_directories(boot PRIVATE ${INCLUDE})
target_compile_definitions(boot PRIVATE ${DEFINES})
target_compile_options(boot PRIVATE ${OPTIONS})
target_link_libraries(boot PRIVATE ${AC_LIBS})