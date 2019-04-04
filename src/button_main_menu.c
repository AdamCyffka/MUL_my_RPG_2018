/*
** EPITECH PROJECT, 2019
** button_main_menu.c
** File description:
** All function to manag button main_menu
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

int button_is_clicked(game_setting_t *settings, sfVector2f pos, sfVector2f size)
{
    int ret;
    int x = (int)settings->cursor_pos.x;
    int y = (int)settings->cursor_pos.y;

    settings->_mouse = (sfMouse_isButtonPressed(sfMouseLeft)) ? true : false;
    if (settings->_mouse == true) {
        ((x >= pos.x && x <= pos.x + size.x) && (y >= pos.y && y <= pos.y
        + size.y)) ? (ret = true) : (ret = false);
        return ret;
    } else
        return 0;
}

void button_menu(game_setting_t *settings, game_scene_t scenes, sfRenderWindow
*window)
{
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[EXIT_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[EXIT_B_S0].shape)) == true)
        sfRenderWindow_close(window);
    else if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[NEW_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[NEW_B_S0].shape)) == true)
        puts("Launch New");
    else if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[LOAD_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[LOAD_B_S0].shape)) == true)
        puts("Load parts");
}