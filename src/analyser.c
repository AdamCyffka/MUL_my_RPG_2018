/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** events analyser
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void keyboard_checker_town(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyTab))
        sfRenderWindow_close(game->settings->window);
    if (sfKeyboard_isKeyPressed(sfKeyI))
        disp_button_inventory(game->scenes[town], 1, -1);
    if (sfKeyboard_isKeyPressed(sfKeyM))
        disp_button_me(game->scenes[town], 1, -1);
    if (sfKeyboard_isKeyPressed(sfKeyO))
        disp_button_option(game->scenes[town], 1, -1);
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        disp_button_exit(game->scenes[town], 1, -1);
}

void keyboard_checker(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyTab))
        sfRenderWindow_close(game->settings->window);
}

void analyse_events(game_t *game)
{
    if (game->settings->event.type == sfEvtClosed)
        sfRenderWindow_close(game->settings->window);
    if (game->settings->event.type == sfEvtMouseMoved)
        check_mouse_pos(game);
    if (game->settings->event.type == sfEvtKeyPressed) {
        keyboard_checker_town(game);
        key_to_move_or_not(game->scenes[game->settings->current],
        game->settings, game->stats);
    }
    else if (game->settings->event.type == sfEvtMouseButtonPressed)
        player_attack(game->stats);
    else
        player_stop_moving(game->stats, game->settings);
}
