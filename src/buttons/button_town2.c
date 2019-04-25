/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** button_town
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void button_town_close(game_scene_t scenes, int enable, int disable)
{
    scenes.objs[INVENTORY_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[ME_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[OPTION_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[EXIT_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.buttons[TITLE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[DESKTOP_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[PLUS_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[MUTE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[UNMUTE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[MINUS_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[CHECK_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[UNCHECK_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[CLOSE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[VOLUME_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[VSYNC_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[NAME_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[XP_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[LIFE_T_S1].state = ((enable == 1) ? disable : enable);
}

void button_town_inventory(game_scene_t scenes, int enable, int disable)
{
    scenes.objs[INVENTORY_O_S1].speed = ((enable == 1) ? enable : disable);
    scenes.objs[ME_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[OPTION_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[EXIT_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.buttons[TITLE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[DESKTOP_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[PLUS_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[MUTE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[UNMUTE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[MINUS_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[CHECK_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[UNCHECK_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[CLOSE_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.texts[VOLUME_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[VSYNC_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[NAME_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[XP_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[LIFE_T_S1].state = ((enable == 1) ? disable : enable);
}

void button_town_me(game_scene_t scenes, int enable, int disable)
{
    scenes.objs[INVENTORY_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[ME_O_S1].speed = ((enable == 1) ? enable : disable);
    scenes.objs[OPTION_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[EXIT_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.buttons[TITLE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[DESKTOP_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[PLUS_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[MUTE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[UNMUTE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[MINUS_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[CHECK_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[UNCHECK_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[CLOSE_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.texts[VOLUME_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[VSYNC_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[NAME_T_S1].state = ((enable == 1) ? enable : disable);
    scenes.texts[XP_T_S1].state = ((enable == 1) ? enable : disable);
    scenes.texts[LIFE_T_S1].state = ((enable == 1) ? enable : disable);
}

void button_town_option(game_scene_t scenes, int enable, int disable)
{
    scenes.objs[INVENTORY_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[ME_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[OPTION_O_S1].speed = ((enable == 1) ? enable : disable);
    scenes.objs[EXIT_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.buttons[TITLE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[DESKTOP_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[PLUS_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.buttons[MUTE_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.buttons[UNMUTE_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.buttons[MINUS_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.buttons[CHECK_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.buttons[UNCHECK_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.buttons[CLOSE_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.texts[VOLUME_T_S1].state = ((enable == 1) ? enable : disable);
    scenes.texts[VSYNC_T_S1].state = ((enable == 1) ? enable : disable);
    scenes.texts[NAME_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[XP_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[LIFE_T_S1].state = ((enable == 1) ? disable : enable);
}

void button_town_exit(game_scene_t scenes, int enable, int disable)
{
    scenes.objs[INVENTORY_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[ME_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[OPTION_O_S1].speed = ((enable == 1) ? disable : enable);
    scenes.objs[EXIT_O_S1].speed = ((enable == 1) ? enable : disable);
    scenes.buttons[TITLE_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.buttons[DESKTOP_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.buttons[PLUS_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[MUTE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[UNMUTE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[MINUS_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[CHECK_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[UNCHECK_B_S1].state = ((enable == 1) ? disable : enable);
    scenes.buttons[CLOSE_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.texts[VOLUME_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[VSYNC_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[NAME_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[XP_T_S1].state = ((enable == 1) ? disable : enable);
    scenes.texts[LIFE_T_S1].state = ((enable == 1) ? disable : enable);
}