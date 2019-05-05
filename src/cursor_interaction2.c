/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** cursor_interaction2
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void check_mouse_pos(game_t *game)
{
    game->settings->cursor_pos.x =
    sfMouse_getPositionRenderWindow(game->settings->window).x;
    game->settings->cursor_pos.y =
    sfMouse_getPositionRenderWindow(game->settings->window).y;
}