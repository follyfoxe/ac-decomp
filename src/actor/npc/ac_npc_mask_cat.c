#include "ac_npc_mask_cat.h"

#include "dolphin/os/OSRtc.h"
#include "libc64/qrand.h"
#include "libultra/libultra.h"
#include "m_actor_type.h"
#include "m_bgm.h"
#include "m_card.h"
#include "m_choice.h"
#include "m_common_data.h"
#include "m_config.h"
#include "m_demo.h"
#include "m_msg.h"
#include "m_play.h"
#include "m_player_lib.h"
#include "m_soncho.h"
#include "m_vibctl.h"

static void aNMC_actor_ct(ACTOR* actorx, GAME* game);
static void aNMC_actor_save(ACTOR* actorx, GAME* game);
static void aNMC_actor_dt(ACTOR* actorx, GAME* game);
static void aNMC_actor_init(ACTOR* actorx, GAME* game);
static void aNMC_actor_draw(ACTOR* actorx, GAME* game);

static void aNMC_set_painter_name_str();
static void aNMC_set_talk_info(ACTOR* actorx);
static void aNMC_actor_move(ACTOR* actorx, GAME* game);
static void aNMC_talk_request(ACTOR* actorx, GAME* game);
static int aNMC_talk_init(ACTOR* actorx, GAME* game);
static int aNMC_talk_end_chk(ACTOR* actorx, GAME* game);

static void aNMC_actor_ct(ACTOR* actorx, GAME* game);
static void aNMC_actor_dt(ACTOR* actorx, GAME* game);
static void aNMC_actor_init(ACTOR* actorx, GAME* game);
static void aNMC_actor_save(ACTOR* actorx, GAME* game);

// clang-format off
ACTOR_PROFILE Npc_Mask_Cat_Profile = {
    mAc_PROFILE_NPC_MASK_CAT,
    ACTOR_PART_NPC,
    ACTOR_STATE_NONE,
    SP_NPC_MASK_CAT,
    ACTOR_OBJ_BANK_KEEP,
    sizeof(NPC_MASK_CAT_ACTOR),
    aNMC_actor_ct,
    aNMC_actor_dt,
    aNMC_actor_init,
    mActor_NONE_PROC1,
    aNMC_actor_save,
};
// clang-format on

static void aNMC_actor_ct(ACTOR* actorx, GAME* game) {
    // clang-format off
    static aNPC_ct_data_c ct_data = {
        &aNMC_actor_move, 
        &aNMC_actor_draw,   
        aNPC_CT_SCHED_TYPE_WANDER, 
        &aNMC_talk_request,
        &aNMC_talk_init,  
        &aNMC_talk_end_chk, 
        0,
    };
    // clang-format on
    
    if (NPC_CLIP->birth_check_proc(actorx, game) == TRUE) {
        if (Common_Get(spnpc_first_talk_flags) & (1 << aNPC_SPNPC_BIT_MASK_CAT)) {
            Actor_delete(actorx);
            actorx->sv_proc = NULL;
            actorx->dt_proc = NULL;
            mNpc_RenewalSetNpc(actorx);
        } else {
            NPC_CLIP->ct_proc(actorx, game, &ct_data);
        }
    }
}

static void aNMC_actor_save(ACTOR* actorx, GAME* game) {
    NPC_CLIP->save_proc(actorx, game);
}

static void aNMC_actor_dt(ACTOR* actorx, GAME* game) {
    NPC_CLIP->dt_proc(actorx, game);
    mEv_actor_dying_message(mEv_EVENT_MASK_NPC, actorx);
}

static void aNMC_actor_init(ACTOR* actorx, GAME* game) {
    NPC_CLIP->init_proc(actorx, game);
}

static void aNMC_actor_draw(ACTOR* actorx, GAME* game) {
    NPC_CLIP->draw_proc(actorx, game);
}

#include "../src/actor/npc/ac_npc_mask_cat_move.c_inc"
