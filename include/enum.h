/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** enum.h
*/

#ifndef ENUM_H_
    #define ENUM_H_

enum scene {
    MAIN_MENU,
    TOWN,
    BOSS,
    FOREST,
    BEACH,
    CAMP,
    VICTORY,
    DEFEAT
};

enum quest_state {
    Q_NOT_STARTED,
    Q_ACCEPTED,
    Q_IN_PROGRESS,
    Q_VALIDATED,
    Q_FINISHED
};

enum inventory {
    SLOT_0,
    SLOT_1,
    SLOT_2,
    SLOT_3,
    SLOT_4,
};

enum rewards {
    EMPTY,
    SWORD1_R,
    SWORD2_R,
    QBOOK_R,
    MINIMAP_R,
    BOOTS_R,
    AXE_R,
    GOLEMHEAD_R,
    LIFE_R,
    DAMAGE_R,
    XP50_R,
    XP100_R,
    XP500_R,
    XPMAX_R
};

enum quest {
    INTRO_Q,
    BLACKSMITH_Q,
    EMILY_Q,
    GOLEMS_Q,
    ROBIN_Q,
    FIND_LOST_Q,
    PIERRE_Q,
    GHOSTS_Q,
    GEORGE_Q,
    SHEEP_COUNT_Q,
    JODI_Q,
    SKELETONS_Q,
    BOSS_Q
};

enum main_menu {
    LEFT_B_S0,
    RIGHT_B_S0,
    OK_B_S0,
    CLOSE_B_S0,
    CREDITS_B_S0,
    LOAD_B_S0,
    EXIT_B_S0,
    BACK_B_S0,
    NEW_B_S0,
    NAME_T_S0 = 0,
    MUSIC_S_S0 = 0,
    CLICK_S_S0,
    BG_O_S0 = 0,
    CLOUD1_O_S0,
    CLOUD2_O_S0,
    LOGO_O_S0,
    CLOUD3_O_S0,
    FLAMINGO1_O_S0,
    FLAMINGO2_O_S0,
    BG1_O_S0,
    CHOOSE_O_S0,
    HTW_O_S0,
    CURSOR_O_S0
};

enum town {
    TITLE_B_S1,
    DESKTOP_B_S1,
    CLOSE_B_S1,
    V0_B_S1,
    V25_B_S1,
    V50_B_S1,
    V100_B_S1,
    F30_B_S1,
    F60_B_S1,
    ON_B_S1,
    OFF_B_S1,
    INVENTORY_B_S1,
    ME_B_S1,
    OPTION_B_S1,
    EXIT_B_S1,
    WALKABLE1_B_S1,
    WALKABLE2_B_S1,
    WALKABLE3_B_S1,
    WALKABLE4_B_S1,
    WALKABLE5_B_S1,
    WALKABLE6_B_S1,
    WALKABLE7_B_S1,
    WALKABLE8_B_S1,
    WALKABLE9_B_S1,
    WALKABLE10_B_S1,
    WALKABLE11_B_S1,
    WALKABLE12_B_S1,
    WALKABLE13_B_S1,
    WALKABLE14_B_S1,
    WALKABLE15_B_S1,
    WALKABLE16_B_S1,
    WALKABLE17_B_S1,
    OBSTACLE1_B_S1,
    OBSTACLE2_B_S1,
    OBSTACLE3_B_S1,
    OBSTACLE4_B_S1,
    OBSTACLE5_B_S1,
    OBSTACLE6_B_S1,
    OBSTACLE7_B_S1,
    ZONE1_B_S1,
    ZONE2_B_S1,
    ZONE3_B_S1,
    ZONE4_B_S1,
    ZONE5_B_S1,
    ZONE6_B_S1,
    ZONESPECIAL_B_S1,
    MUSIC_S_S1 = 0,
    CLICK_S_S1,
    WALK_S_S1,
    SWORD_S_S1,
    VOLUME_T_S1 = 0,
    VSYNC_T_S1,
    NAME_T_S1,
    XP_T_S1,
    FRAME_T_S1,
    QUEST_ANS_T_S1,
    TOWN_O_S1 = 0,
    AXE_O_S1,
    OBSTACLE_O_S1,
    DICK_O_S1,
    LEWIS_O_S1,
    EMILY_O_S1,
    ROBIN_O_S1,
    PIERRE_O_S1,
    GEORGE_O_S1,
    JODI_O_S1,
    SHEEP1_O_S1,
    SHEEP2_O_S1,
    SHEEP3_O_S1,
    SHEEP4_O_S1,
    SHEEP5_O_S1,
    LEAF_O_S1,
    STAR_O_S1,
    PANNEL_O_S1,
    MINIMAP_O_S1,
    QUEST_O_S1,
    LIFE_O_S1,
    ICON_O_S1,
    INVENTORY_O_S1,
    ME_O_S1,
    OPTION_O_S1,
    EXIT_O_S1,
    CURSOR_O_S1
};

enum boss {
    TITLE_B_S2,
    DESKTOP_B_S2,
    CLOSE_B_S2,
    V0_B_S2,
    V25_B_S2,
    V50_B_S2,
    V100_B_S2,
    F30_B_S2,
    F60_B_S2,
    ON_B_S2,
    OFF_B_S2,
    INVENTORY_B_S2,
    ME_B_S2,
    OPTION_B_S2,
    EXIT_B_S2,
    WALKABLE1_B_S2,
    WALKABLE2_B_S2,
    WALKABLE3_B_S2,
    WALKABLE4_B_S2,
    WALKABLE5_B_S2,
    WALKABLE6_B_S2,
    WALKABLE7_B_S2,
    WALKABLE8_B_S2,
    WALKABLE9_B_S2,
    WALKABLE10_B_S2,
    WALKABLE11_B_S2,
    WALKABLE12_B_S2,
    WALKABLE13_B_S2,
    WALKABLE14_B_S2,
    WALKABLE15_B_S2,
    WALKABLE16_B_S2,
    WALKABLE17_B_S2,
    MUSIC_S_S2 = 0,
    CLICK_S_S2,
    WALK_S_S2,
    SWORD_S_S2,
    VOLUME_T_S2 = 0,
    NAME_T_S2,
    VSYNC_T_S2,
    XP_T_S2,
    FRAME_T_S2,
    TOWN_O_S2 = 0,
    OBSTACLE_O_S2,
    SHAMAN_O_S2,
    PANNEL_O_S2,
    MINIMAP_O_S2,
    QUEST_O_S2,
    LIFE_O_S2,
    ICON_O_S2,
    INVENTORY_O_S2,
    ME_O_S2,
    OPTION_O_S2,
    EXIT_O_S2,
    CURSOR_O_S2
};

enum forest {
    TITLE_B_S3,
    DESKTOP_B_S3,
    CLOSE_B_S3,
    V0_B_S3,
    V25_B_S3,
    V50_B_S3,
    V100_B_S3,
    F30_B_S3,
    F60_B_S3,
    ON_B_S3,
    OFF_B_S3,
    INVENTORY_B_S3,
    ME_B_S3,
    OPTION_B_S3,
    EXIT_B_S3,
    WALKABLE1_B_S3,
    WALKABLE2_B_S3,
    WALKABLE3_B_S3,
    WALKABLE4_B_S3,
    WALKABLE6_B_S3,
    WALKABLE7_B_S3,
    WALKABLE8_B_S3,
    WALKABLE9_B_S3,
    WALKABLE10_B_S3,
    WALKABLE11_B_S3,
    MUSIC_S_S3 = 0,
    CLICK_S_S3,
    WALK_S_S3,
    SWORD_S_S3,
    VOLUME_T_S3 = 0,
    NAME_T_S3,
    VSYNC_T_S3,
    XP_T_S3,
    FRAME_T_S3,
    FOREST_O_S3 = 0,
    GHOST1_O_S3,
    GHOST2_O_S3,
    GHOST3_O_S3,
    GHOST4_O_S3,
    GHOST5_O_S3,
    GHOST6_O_S3,
    GHOST7_O_S3,
    GHOST8_O_S3,
    GHOST9_O_S3,
    GHOST10_O_S3,
    GHOST11_O_S3,
    GHOST12_O_S3,
    GHOST13_O_S3,
    GHOST14_O_S3,
    GHOST15_O_S3,
    MINIMAP_O_S3,
    QUEST_O_S3,
    LIFE_O_S3,
    ICON_O_S3,
    INVENTORY_O_S3,
    ME_O_S3,
    OPTION_O_S3,
    EXIT_O_S3,
    CURSOR_O_S3
};

enum beach {
    TITLE_B_S4,
    DESKTOP_B_S4,
    CLOSE_B_S4,
    V0_B_S4,
    V25_B_S4,
    V50_B_S4,
    V100_B_S4,
    F30_B_S4,
    F60_B_S4,
    ON_B_S4,
    OFF_B_S4,
    INVENTORY_B_S4,
    ME_B_S4,
    OPTION_B_S4,
    EXIT_B_S4,
    WALKABLE1_B_S4,
    WALKABLE2_B_S4,
    WALKABLE3_B_S4,
    MUSIC_S_S4 = 0,
    CLICK_S_S4,
    WALK_S_S4,
    SWORD_S_S4,
    VOLUME_T_S4 = 0,
    NAME_T_S4,
    VSYNC_T_S4,
    XP_T_S4,
    FRAME_T_S4,
    BEACH_O_S4 = 0,
    SKELETON1_O_S4,
    SKELETON2_O_S4,
    SKELETON3_O_S4,
    SKELETON4_O_S4,
    SKELETON5_O_S4,
    SKELETON6_O_S4,
    SKELETON7_O_S4,
    SKELETON8_O_S4,
    SKELETON9_O_S4,
    SKELETON10_O_S4,
    SKELETON11_O_S4,
    SKELETON12_O_S4,
    SKELETON13_O_S4,
    SKELETON14_O_S4,
    SKELETON15_O_S4,
    SKELETON16_O_S4,
    SKELETON17_O_S4,
    SKELETON18_O_S4,
    SKELETON19_O_S4,
    SKELETON20_O_S4,
    MINIMAP_O_S4,
    QUEST_O_S4,
    LIFE_O_S4,
    ICON_O_S4,
    INVENTORY_O_S4,
    ME_O_S4,
    OPTION_O_S4,
    EXIT_O_S4,
    CURSOR_O_S4
};

enum camp {
    TITLE_B_S5,
    DESKTOP_B_S5,
    CLOSE_B_S5,
    V0_B_S5,
    V25_B_S5,
    V50_B_S5,
    V100_B_S5,
    F30_B_S5,
    F60_B_S5,
    ON_B_S5,
    OFF_B_S5,
    INVENTORY_B_S5,
    ME_B_S5,
    OPTION_B_S5,
    EXIT_B_S5,
    WALKABLE1_B_S5,
    WALKABLE2_B_S5,
    WALKABLE3_B_S5,
    WALKABLE4_B_S5,
    WALKABLE5_B_S5,
    MUSIC_S_S5 = 0,
    CLICK_S_S5,
    WALK_S_S5,
    SWORD_S_S5,
    VOLUME_T_S5 = 0,
    NAME_T_S5,
    VSYNC_T_S5,
    XP_T_S5,
    FRAME_T_S5,
    CAMP_O_S5 = 0,
    GOLEM1_O_S5,
    GOLEM2_O_S5,
    GOLEM3_O_S5,
    GOLEM4_O_S5,
    GOLEM5_O_S5,
    GOLEM6_O_S5,
    GOLEM7_O_S5,
    GOLEM8_O_S5,
    GOLEM9_O_S5,
    GOLEM10_O_S5,
    MINIMAP_O_S5,
    LIFE_O_S5,
    QUEST_O_S5,
    ICON_O_S5,
    INVENTORY_O_S5,
    ME_O_S5,
    OPTION_O_S5,
    EXIT_O_S5,
    CURSOR_O_S5
};

enum victory {
    EXIT_B_S6,
    DESKTOP_B_S6,
    VICTORY_T_S6 = 0,
    SOUND_S_S6 = 0,
    BG_O_S6 = 0,
    LOGO_O_S6,
    CURSOR_O_S6
};

enum defeat {
    EXIT_B_S7,
    DESKTOP_B_S7,
    DEFEAT_T_S7 = 0,
    SOUND_S_S7 = 0,
    BG_O_S7 = 0,
    LOGO_O_S7,
    CURSOR_O_S7
};

#endif /* ENUM_H_ */
