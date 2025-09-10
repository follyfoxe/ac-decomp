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
        jaudio_NES_internal
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
set(CPP_SOURCES
        "src/static/libforest/emu64/emu64.c"

        "src/static/jaudio_NES/game/audioheaders.c"
        "src/static/jaudio_NES/game/dummyprobe.c"
        "src/static/jaudio_NES/game/emusound.c"
        "src/static/jaudio_NES/game/game64.c"
        "src/static/jaudio_NES/game/kappa.c"
        "src/static/jaudio_NES/game/melody.c"
        "src/static/jaudio_NES/game/radio.c"
        "src/static/jaudio_NES/game/rhythm.c"
        "src/static/jaudio_NES/game/staff.c"
        "src/static/jaudio_NES/game/verysimple.c"

        "src/static/jaudio_NES/internal/aictrl.c"
        "src/static/jaudio_NES/internal/astest.c"
        "src/static/jaudio_NES/internal/audiothread.c"
        "src/static/jaudio_NES/internal/cpubuf.c"
        "src/static/jaudio_NES/internal/dspboot.c"
        "src/static/jaudio_NES/internal/dspbuf.c"
        "src/static/jaudio_NES/internal/dspproc.c"
        "src/static/jaudio_NES/internal/dummyrom.c"
        "src/static/jaudio_NES/internal/dvdthread.c"
        "src/static/jaudio_NES/internal/neosthread.c"
        "src/static/jaudio_NES/internal/os.c"
        "src/static/jaudio_NES/internal/playercall.c"
        "src/static/jaudio_NES/internal/random.c"
        "src/static/jaudio_NES/internal/sample.c"
        "src/static/jaudio_NES/internal/streamctrl.c"
        "src/static/jaudio_NES/internal/sub_sys.c"
        "src/static/jaudio_NES/internal/track.c"
        "src/static/jaudio_NES/internal/aramcall.c"
        "src/static/jaudio_NES/internal/audioconst.c"
        "src/static/jaudio_NES/internal/audiotable.c"
        "src/static/jaudio_NES/internal/audiowork.c"
        "src/static/jaudio_NES/internal/bankdrv.c"
        "src/static/jaudio_NES/internal/bankread.c"
        "src/static/jaudio_NES/internal/centcalc.c"
        "src/static/jaudio_NES/internal/channel.c"
        "src/static/jaudio_NES/internal/cmdstack.c"
        "src/static/jaudio_NES/internal/connect.c"
        "src/static/jaudio_NES/internal/driver.c"
        "src/static/jaudio_NES/internal/driverinterface.c"
        "src/static/jaudio_NES/internal/dsp_cardunlock.c"
        "src/static/jaudio_NES/internal/dsp_GBAKey.c"
        "src/static/jaudio_NES/internal/dspdriver.c"
        "src/static/jaudio_NES/internal/dspinterface.c"
        "src/static/jaudio_NES/internal/effect.c"
        "src/static/jaudio_NES/internal/fat.c"
        "src/static/jaudio_NES/internal/fxinterface.c"
        "src/static/jaudio_NES/internal/heapctrl.c"
        "src/static/jaudio_NES/internal/ipldec.c"
        "src/static/jaudio_NES/internal/ja_calc.c"
        "src/static/jaudio_NES/internal/jammain_2.c"
        "src/static/jaudio_NES/internal/jamosc.c"
        "src/static/jaudio_NES/internal/memory.c"
        "src/static/jaudio_NES/internal/midplay.c"
        "src/static/jaudio_NES/internal/noteon.c"
        "src/static/jaudio_NES/internal/oneshot.c"
        "src/static/jaudio_NES/internal/rate.c"
        "src/static/jaudio_NES/internal/rspsim.c"
        "src/static/jaudio_NES/internal/seqsetup.c"
        "src/static/jaudio_NES/internal/system.c"
        "src/static/jaudio_NES/internal/tables.c"
        "src/static/jaudio_NES/internal/waveread.c")
set_source_files_properties(${CPP_SOURCES} PROPERTIES LANGUAGE CXX)

# Declare libraries
foreach (LIB IN LISTS AC_LIBS)
        include("cmake/libs/${LIB}.cmake")
endforeach ()

# Linking
#target_link_libraries(os exi db)
#target_link_libraries(JKernel ar os)
#target_link_libraries(JUtility JGadget)