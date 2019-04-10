/*
** EPITECH PROJECT, 2019
** button_main_menu.c
** File description:
** All function to manag button main_menu
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void state_men_button(game_scene_t scenes, int but)
{
    if (scenes.buttons[but].state == 2)
        scenes.buttons[but].rect.left = 147;
    else if (scenes.buttons[but].state == 1)
        scenes.buttons[but].rect.left = 300;
    else
        scenes.buttons[but].rect.left = 0;
}

void men_game_button(game_setting_t *settings, game_scene_t scenes, int nbr)
{
    button_hover(scenes, settings, nbr);
    if (scenes.buttons[nbr].state != 1) {
        if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
        .buttons[nbr].shape), sfRectangleShape_getSize(scenes.buttons[nbr]
        .shape)) == true)
            scenes.buttons[nbr].state = 1;
    }
    state_men_button(scenes, nbr);
    sfRectangleShape_setTextureRect(scenes.buttons[nbr].shape,
        scenes.buttons[nbr].rect);
    if (nbr == EXIT_B_S0 && scenes.buttons[nbr].state == 1)
        sfRenderWindow_close(settings->window);
}

void utils_button_menu(game_scene_t scenes, int enable, int disable)
{
    scenes.buttons[CLOSE_B_S0].state = ((enable == 1) ? enable : disable); 
    scenes.buttons[CREDITS_B_S0].state = enable;
    scenes.buttons[NEW_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.buttons[EXIT_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.buttons[LOAD_B_S0].state = ((enable == 1) ? disable : enable);
    scenes.objs[HTW_O_S0].speed = ((enable == 1) ? enable : disable);
}

void button_menu(game_setting_t *settings, game_scene_t scenes)
{
    if (scenes.buttons[NEW_B_S0].state >= 0 &&
    scenes.buttons[EXIT_B_S0].state >= 0 &&
    scenes.buttons[LOAD_B_S0].state >= 0) {
        men_game_button(settings, scenes, NEW_B_S0);
        men_game_button(settings, scenes, EXIT_B_S0);
        men_game_button(settings, scenes, LOAD_B_S0);
    }
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[CREDITS_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[CREDITS_B_S0].shape)) == true)
        utils_button_menu(scenes, 1, -1);
    else if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[CLOSE_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[CLOSE_B_S0].shape)) == true)
        utils_button_menu(scenes, 0, -1);
}