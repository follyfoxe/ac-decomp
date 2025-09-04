# auto-generated file
add_library(actor_npc_event STATIC
		"src/actor/npc/event/ac_ev_angler.c"
		"src/actor/npc/event/ac_ev_artist.c"
		"src/actor/npc/event/ac_ev_broker.c"
		"src/actor/npc/event/ac_ev_broker2.c"
		"src/actor/npc/event/ac_ev_carpetPeddler.c"
		"src/actor/npc/event/ac_ev_castaway.c"
		"src/actor/npc/event/ac_ev_designer.c"
		"src/actor/npc/event/ac_ev_dokutu.c"
		"src/actor/npc/event/ac_ev_dozaemon.c"
		"src/actor/npc/event/ac_ev_ghost.c"
		"src/actor/npc/event/ac_ev_gypsy.c"
		"src/actor/npc/event/ac_ev_kabuPeddler.c"
		"src/actor/npc/event/ac_ev_majin.c"
		"src/actor/npc/event/ac_ev_miko.c"
		"src/actor/npc/event/ac_ev_pumpkin.c"
		"src/actor/npc/event/ac_ev_santa.c"
		"src/actor/npc/event/ac_ev_soncho.c"
		"src/actor/npc/event/ac_ev_soncho2.c"
		"src/actor/npc/event/ac_ev_speech_soncho.c"
		"src/actor/npc/event/ac_ev_turkey.c"
		"src/actor/npc/event/ac_ev_yomise.c")
target_include_directories(actor_npc_event PRIVATE ${INCLUDE})
target_compile_definitions(actor_npc_event PRIVATE ${DEFINES})
target_compile_options(actor_npc_event PRIVATE ${OPTIONS})
