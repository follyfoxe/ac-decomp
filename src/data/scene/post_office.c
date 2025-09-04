#include "m_scene.h"

extern Door_data_c POST_OFFICE_door_data[];
extern Actor_data POST_OFFICE_player_data[];
extern s16 POST_OFFICE_ctrl_actor_data[];
extern Actor_data POST_OFFICE_actor_data[];
extern s16 POST_OFFICE_object_bank[];

extern LAZY_ARR_BEGIN(Scene_Word_u, post_office_info)
    mSc_DATA_SOUND(0, 0),                                  // Sound data
    mSc_DATA_DOOR_DATA(1, POST_OFFICE_door_data),          // Door data
    mSc_DATA_PLAYER(POST_OFFICE_player_data),              // Player Data
    mSc_DATA_ARRANGE_FTR(6),                               // Arrange furniture params
    mSc_DATA_CTRL_ACTORS(10, POST_OFFICE_ctrl_actor_data), // Control actors
    mSc_DATA_ACTORS(3, POST_OFFICE_actor_data),            // Player Data
    mSc_DATA_OBJ_BANK(1, POST_OFFICE_object_bank),         // Required object banks
    mSc_DATA_FIELDCT(mSc_ITEM_TYPE_BGPOSTITEM, 1, 0xA000, mSc_ROOM_TYPE_MISC_ROOM,
                     FIELD_DRAW_TYPE_INDOORS), // Field construct params
    mSc_DATA_END(),                            // End of scene data
LAZY_ARR_END

extern Actor_data POST_OFFICE_player_data[] = {
    {
        mAc_PROFILE_PLAYER, // profile
        { 100, 0, 200 },    // position
        { 0, 0, 0 },        // rotation
        0                   // ct arg
    },
};

extern s16 POST_OFFICE_ctrl_actor_data[] = {
    mAc_PROFILE_BIRTH_CONTROL,  // 0
    mAc_PROFILE_NPC2,           // 1
    mAc_PROFILE_TOOLS,          // 2
    mAc_PROFILE_HANDOVERITEM,   // 3
    mAc_PROFILE_EFFECT_CONTROL, // 4
    mAc_PROFILE_SHOP_LEVEL,     // 5
    mAc_PROFILE_QUEST_MANAGER,  // 6
    mAc_PROFILE_EVENT_MANAGER,  // 7
    mAc_PROFILE_WEATHER,        // 8
    mAc_PROFILE_HOUSE_CLOCK,    // 9
};

extern Actor_data POST_OFFICE_actor_data[] = {
    {
        mAc_PROFILE_ROOM_SUNSHINE_POSTHOUSE, // profile
        { 40, 0, 160 },                      // position
        { 0, 0, 0 },                         // rotation
        2                                    // ct arg
    },
    {
        mAc_PROFILE_ROOM_SUNSHINE_POSTHOUSE, // profile
        { 280, 0, 160 },                     // position
        { 0, 0, 0 },                         // rotation
        3                                    // ct arg
    },
    {
        mAc_PROFILE_PTERMINAL, // profile
        { 60, 0, 240 },        // position
        { 0, 0, 0 },           // rotation
        3                      // ct arg
    },
};

extern s16 POST_OFFICE_object_bank[] = {
    ACTOR_OBJ_BANK_POSTHOUSE, // 0
};

extern Door_data_c POST_OFFICE_door_data[] = {
    {
        SCENE_TEST2,     // scene
        1,               // exit orientation
        0,               // exit type
        0,               // arg
        { 40, 0, 1730 }, // exit position
        0x0000,          // exit door item name
        2,               // wipe type
        { 0, 0, 0 },     // padding
    },
};
