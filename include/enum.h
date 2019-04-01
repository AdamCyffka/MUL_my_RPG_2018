/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** enum.h
*/

#ifndef ENUM_H_
#define ENUM_H_

enum scene {main_menu, town, boss, forest, beach, camp, victory, defeat};

enum main_menu {BG_O_S0, BG1_O_S0, BG2_O_S0, CLOUD1_O_S0, CLOUD2_O_S0,
FLAMINGO_O_S0, LOGO_O_S0, HTW_O_S0, CHOOSE_O_S0, LEFT_B_S0 = 0, RIGHT_B_S0,
OK_B_S0, CLOSE_B_S0, CREDITS_B_S0, LOAD_B_S0, EXIT_B_S0, BACK_B_S0, NEW_B_S0,
NAME_T_S0 = 0, MUSIC_S_S0 = 0, CLICK_S_S0, CURSOR_O_S0 = 0};

enum town {TOWN_O_S1, EXIT_B_S1 = 0, DESKTOP_B_S1, CLOSE_B_S1, PLUS_B_S1, MINUS_B_S1,
BOSS_S_S1 = 0, MUSIC_S_S1, CLICK_S_S1, WALK_S_S1, SWORD_S_S1, VOLUME_T_S1 = 0,
NAME_T_S1, VSYNC_T_S1, XP_T_S1, POS_T_S1, LIFE_T_S1, OBSTACLE_O_S1 = 0,
OPTION_O_S1, INVENTORY_O_S1, EXIT_O_S1, ME_O_S1, PANNEL_O_S1,
DICK_O_S1, EMILY_O_S1, SHEEP_O_S1, JODI_O_S1, LEWIS_O_S1, PIERRE_O_S1, ROBIN_O_S1,
GEORGE_O_S1, MINIMAP_O_S1, QUEST_O_S1, ICON_O_S1, CURSOR_O_S1};

enum boss {TOWN_O_S2, EXIT_B_S2 = 0, DESKTOP_B_S2, CLOSE_B_S2, PLUS_B_S2, MINUS_B_S2,
MUSIC_S_S2 = 0, CLICK_S_S2, WALK_S_S2, SWORD_S_S2, VOLUME_T_S2, NAME_T_S2,
VSYNC_T_S2, XP_T_S2, POS_T_S2, LIFE_T_S2, OBSTACLE_O_S2 = 0, SHAMAN_O_S2,
OPTION_O_S2, INVENTORY_O_S2, EXIT_O_S2, ME_O_S2, MINIMAP_O_S2,
PANNEL_O_S2, QUEST_O_S2, ICON_O_S2, CURSOR_O_S2};

enum forest {FOREST_O_S3, EXIT_B_S3 = 0, DESKTOP_B_S3, CLOSE_B_S3, PLUS_B_S3, MINUS_B_S3,
MUSIC_S_S3 = 0, CLICK_S_S3, WALK_S_S3, SWORD_S_S3, VOLUME_T_S3 = 0, NAME_T_S3,
VSYNC_T_S3, XP_T_S3, POS_T_S3, LIFE_T_S3, OPTION_O_S3 = 0, INVENTORY_O_S3,
EXIT_O_S3, ME_O_S3, MINIMAP_O_S3, GHOST_O_S3, QUEST_O_S3,
ICON_O_S3, CURSOR_O_S3};

enum beach {BEACH_O_S4, EXIT_B_S4 = 0, DESKTOP_B_S4, CLOSE_B_S4, PLUS_B_S4, MINUS_B_S4,
MUSIC_S_S4 = 0, CLICK_S_S4, WALK_S_S4, SWORD_S_S4, VOLUME_T_S4 = 0, NAME_T_S4,
VSYNC_T_S4, XP_T_S4, POS_T_S4, LIFE_T_S4, OPTION_O_S4 = 0, INVENTORY_O_S4,
EXIT_O_S4, ME_O_S4, MINIMAP_O_S4, SKELETON_O_S4, QUEST_O_S4,
ICON_O_S4, CURSOR_O_S4};

enum camp {CAMP_O_S5, EXIT_B_S5 = 0, DESKTOP_B_S5, CLOSE_B_S5, PLUS_B_S5, MINUS_B_S5,
MUSIC_S_S5, CLICK_S_S5, WALK_S_S5, SWORD_S_S5, VOLUME_T_S5, NAME_T_S5,
VSYNC_T_S5, XP_T_S5, POS_T_S5, LIFE_T_S5, OPTION_O_S5, INVENTORY_O_S5,
EXIT_O_S5, ME_O_S5, MINIMAP_O_S5, GOLEM_O_S5, QUEST_O_S5,
ICON_O_S5, CURSOR_O_S5};

enum victory {BG2_O_S6, LOGO_O_S6, EXIT_B_S6 = 0, DESKTOP_B_S6,
VICTORY_O_S6 = 0, VICTORY_T_S6 = 0, SOUND_S_S6 = 0};

enum defeat {BG2_O_S7, DEFEAT_O_S7, LOGO_O_S7, EXIT_B_S7 = 0, DESKTOP_B_S7,
DEFEAT_T_S7 = 0, SOUND_S_S7 = 0};

#endif /* ENUM_H_ */