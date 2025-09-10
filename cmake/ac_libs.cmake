set(AC_LIBS
        boot
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
        #gx
        #mtx
        OdemuExi2
        odenotstub
        os
        #pad
        #si
        #vi
        J2DGraph
        JFramework
        JGadget
        JKernel
        JSupport
        JUtility
        jaudio_NES_game
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

# Special file properties
set_source_files_properties("src/static/libforest/emu64/emu64.c" PROPERTIES LANGUAGE CXX)

# Declare libraries
foreach (LIB IN LISTS AC_LIBS)
        include("cmake/libs/${LIB}.cmake")
endforeach ()

# Linking
#target_link_libraries(os exi db)
#target_link_libraries(JKernel ar os)
#target_link_libraries(JUtility JGadget)