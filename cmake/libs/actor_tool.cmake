# auto-generated file
add_library(actor_tool STATIC
		"src/actor/tool/ac_t_anrium1.c"
		"src/actor/tool/ac_t_bag1.c"
		"src/actor/tool/ac_t_bag2.c"
		"src/actor/tool/ac_t_biscus1.c"
		"src/actor/tool/ac_t_biscus2.c"
		"src/actor/tool/ac_t_biscus3.c"
		"src/actor/tool/ac_t_biscus4.c"
		"src/actor/tool/ac_t_cobra1.c"
		"src/actor/tool/ac_t_cracker.c"
		"src/actor/tool/ac_t_flag.c"
		"src/actor/tool/ac_t_hanabi.c"
		"src/actor/tool/ac_t_hasu1.c"
		"src/actor/tool/ac_t_hat1.c"
		"src/actor/tool/ac_t_hat2.c"
		"src/actor/tool/ac_t_hat3.c"
		"src/actor/tool/ac_t_keitai.c"
		"src/actor/tool/ac_t_npc_sao.c"
		"src/actor/tool/ac_t_pistol.c"
		"src/actor/tool/ac_t_rei1.c"
		"src/actor/tool/ac_t_rei2.c"
		"src/actor/tool/ac_t_tama.c"
		"src/actor/tool/ac_t_tumbler.c"
		"src/actor/tool/ac_t_umbrella.c"
		"src/actor/tool/ac_t_utiwa.c"
		"src/actor/tool/ac_t_zinnia1.c"
		"src/actor/tool/ac_t_zinnia2.c")
target_include_directories(actor_tool PRIVATE ${INCLUDE})
target_compile_definitions(actor_tool PRIVATE ${DEFINES})
target_compile_options(actor_tool PRIVATE ${OPTIONS})
