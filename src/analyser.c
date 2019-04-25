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
    if (sfKeyboard_isKeyPressed(sfKeyI))
        button_town_inventory(game->scenes[town], 1, -1);
    if (sfKeyboard_isKeyPressed(sfKeyM))
        button_town_me(game->scenes[town], 1, -1);
    if (sfKeyboard_isKeyPressed(sfKeyO))
        button_town_option(game->scenes[town], 1, -1);
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        button_town_exit(game->scenes[town], 1, -1);
}

void keyboard_checker_maps(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyTab))
        sfRenderWindow_close(game->settings->window);
    if (game->settings->current == town)
        keyboard_checker_town(game);
    if (game->settings->current == camp)
        keyboard_checker_town(game);
    if (game->settings->current == forest)
        keyboard_checker_town(game);
    if (game->settings->current == beach)
        keyboard_checker_town(game);
}

void analyse_events(game_t *game)
{
    if (game->settings->event.type == sfEvtClosed)
        sfRenderWindow_close(game->settings->window);
    if (game->settings->event.type == sfEvtMouseMoved)
        check_mouse_pos(game);
    if (game->settings->event.type == sfEvtKeyPressed) {
        keyboard_checker_maps(game);
        key_to_move_or_not(game->scenes[game->settings->current],
        game->settings, game->stats);
        player_change_map(game->stats, game->settings);
    }
    else if (game->settings->event.type == sfEvtMouseButtonPressed)
        player_attack(game->stats);
    else
        player_stop_moving(game->stats, game->settings);
}
