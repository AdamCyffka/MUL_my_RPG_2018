/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** disp_keyboard_menu
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void disp_new_options(game_scene_t scenes, int enable, int disable)
{
    scenes.buttons[NEW_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.buttons[EXIT_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.buttons[LOAD_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.buttons[BACK_B_S0].state = ((enable == 1) ? enable : disable);
    scenes.buttons[OK_B_S0].state = ((enable == 1) ? enable : disable);
    scenes.buttons[RIGHT_B_S0].state = ((enable == 1) ? enable : disable);
    scenes.buttons[LEFT_B_S0].state = ((enable == 1) ? enable : disable);
    scenes.texts[NAME_T_S0].state = ((enable == 1) ? enable : disable);
    scenes.objs[CHOOSE_O_S0].speed = ((enable == 1) ? enable : disable);
}

void disp_button_menu(game_scene_t scenes, int enable, int disable)
{
    scenes.buttons[CLOSE_B_S0].state = ((enable == 1) ? enable : disable);
    scenes.buttons[CREDITS_B_S0].state = enable;
    scenes.buttons[NEW_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.buttons[EXIT_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.buttons[LOAD_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.objs[HTW_O_S0].speed = ((enable == 1) ? enable : disable);
}

void disp_button_back(game_scene_t scenes, int enable, int disable)
{
    scenes.buttons[NEW_B_S0].state = ((enable == 1) ? enable : disable);
    scenes.buttons[EXIT_B_S0].state = ((enable == 1) ? enable : disable);
    scenes.buttons[LOAD_B_S0].state = ((enable == 1) ? enable : disable);
    scenes.buttons[BACK_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.buttons[OK_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.buttons[RIGHT_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.buttons[LEFT_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.texts[NAME_T_S0].state = ((enable == 1) ? disable : enable);
    scenes.objs[CHOOSE_O_S0].speed = ((enable == 1) ? disable : enable);
}