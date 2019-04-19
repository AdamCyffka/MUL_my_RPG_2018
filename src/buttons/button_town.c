/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** button_town
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void disp_button_close(game_scene_t scenes, int enable, int disable)
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

void disp_button_inventory(game_scene_t scenes, int enable, int disable)
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

void disp_button_me(game_scene_t scenes, int enable, int disable)
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

void disp_button_option(game_scene_t scenes, int enable, int disable)
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

void disp_button_exit(game_scene_t scenes, int enable, int disable)
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

void button_town(game_setting_t *settings, game_scene_t scenes)
{
    if (scenes.buttons[DESKTOP_B_S1].state >= 0
    || scenes.buttons[TITLE_B_S1].state >= 0)
        buttons_action(settings, scenes);
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[INVENTORY_B_S1].shape), sfRectangleShape_getSize(scenes
    .buttons[INVENTORY_B_S1].shape)) == true)
        disp_button_inventory(scenes, 1, -1);
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[ME_B_S1].shape), sfRectangleShape_getSize(scenes
    .buttons[ME_B_S1].shape)) == true)
        disp_button_me(scenes, 1, -1);
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[OPTION_B_S1].shape), sfRectangleShape_getSize(scenes
    .buttons[OPTION_B_S1].shape)) == true)
        disp_button_option(scenes, 1, -1);
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[EXIT_B_S1].shape), sfRectangleShape_getSize(scenes
    .buttons[EXIT_B_S1].shape)) == true)
        disp_button_exit(scenes, 1, -1);
    else if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[CLOSE_B_S1].shape), sfRectangleShape_getSize(scenes
    .buttons[CLOSE_B_S1].shape)) == true)
        disp_button_close(scenes, 1, -1);
}

void buttons_action(game_setting_t *settings, game_scene_t scenes)
{
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[DESKTOP_B_S1].shape), sfRectangleShape_getSize(scenes
    .buttons[DESKTOP_B_S1].shape)) == true)
        sfRenderWindow_close(settings->window);
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[TITLE_B_S1].shape), sfRectangleShape_getSize(scenes
    .buttons[TITLE_B_S1].shape)) == true)
        settings->current = main_menu;       
}