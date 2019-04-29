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
    if (sfKeyboard_isKeyPressed(sfKeyI)) {
        button_town_inventory(game->scenes[TOWN], 1, -1);
        game->settings->_paused = true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyM)) {
        button_town_me(game->scenes[TOWN], 1, -1);
        game->settings->_paused = true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyO)) {
        button_town_option(game->scenes[TOWN], 1, -1);
        game->settings->_paused = true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        button_town_exit(game->scenes[TOWN], 1, -1);
        game->settings->_paused = true;
    }
}

void keyboard_checker_maps(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyTab))
        sfRenderWindow_close(game->settings->window);
    if (game->settings->current == TOWN)
        keyboard_checker_town(game);
    if (game->settings->current == CAMP)
        keyboard_checker_town(game);
    if (game->settings->current == FOREST)
        keyboard_checker_town(game);
    if (game->settings->current == BEACH)
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
        player_change_map(game->stats, game->settings);
        if (game->settings->event.key.code == sfKeySpace &&
        game->settings->_paused == false)
            player_attack(game->stats);
    }
}
