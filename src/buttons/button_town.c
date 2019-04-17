/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** button_town
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void disp_button_inventory(game_scene_t scenes, int enable, int disable)
{
    scenes.buttons[INVENTORY_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.objs[INVENTORY_O_S1].speed = ((enable == 1) ? enable : disable);
}

void disp_button_me(game_scene_t scenes, int enable, int disable)
{
    scenes.buttons[ME_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.objs[ME_O_S1].speed = ((enable == 1) ? enable : disable);
}

void disp_button_option(game_scene_t scenes, int enable, int disable)
{
    scenes.buttons[OPTION_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.objs[OPTION_O_S1].speed = ((enable == 1) ? enable : disable);
}

void disp_button_exit(game_scene_t scenes, int enable, int disable)
{
    scenes.buttons[EXIT_B_S1].state = ((enable == 1) ? enable : disable);
    scenes.objs[EXIT_O_S1].speed = ((enable == 1) ? enable : disable);
}

void button_town(game_setting_t *settings, game_scene_t scenes)
{    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[INVENTORY_B_S1].shape), sfRectangleShape_getSize(scenes
    .buttons[INVENTORY_B_S1].shape)) == true)
        disp_button_inventory(scenes, 1, -1);
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[ME_B_S1].shape), sfRectangleShape_getSize(scenes
    .buttons[ME_B_S1].shape)) == true)
        disp_button_me(scenes, 1, -1);
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[OPTION_O_S1].shape), sfRectangleShape_getSize(scenes
    .buttons[OPTION_O_S1].shape)) == true)
        disp_button_option(scenes, 1, -1);
    else if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[EXIT_O_S1].shape), sfRectangleShape_getSize(scenes
    .buttons[EXIT_O_S1].shape)) == true)
        disp_button_exit(scenes, 1, -1);
}