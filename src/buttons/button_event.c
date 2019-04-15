/*
** EPITECH PROJECT, 2019
** button_event.c
** File description:
** All function to manag button event
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

void button_hover(game_scene_t scenes, game_setting_t *settings, int nbr)
{
    int x = (int)settings->cursor_pos.x;
    int y = (int)settings->cursor_pos.y;
    sfVector2f pos = sfRectangleShape_getPosition(scenes.buttons[nbr].shape);
    sfVector2f size = sfRectangleShape_getSize(scenes.buttons[nbr].shape);

    if ((x >= pos.x && x <= pos.x + size.x) && (y >= pos.y && y <= pos.y
    + size.y))
        scenes.buttons[nbr].state = 2;
    else
        scenes.buttons[nbr].state = 0;
}