/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** events analyser
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void analyse_events(game_t *game)
{
    if (game->settings->event.type == sfEvtClosed)
        sfRenderWindow_close(game->settings->window);
    if (game->settings->event.type == sfEvtMouseMoved)
        check_mouse_pos(game);
    if (game->settings->event.type == sfEvtKeyPressed) {
        keyboard_checker(game);
        key_to_move_or_not(game->scenes[game->settings->current],
        game->settings, game->stats);
    }
    else if (game->settings->event.type == sfEvtMouseButtonPressed)
        player_attack(game->stats);
    else
        player_stop_moving(game->stats, game->settings);
}

void keyboard_checker(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyTab))
        sfRenderWindow_close(game->settings->window);
    if (sfKeyboard_isKeyPressed(sfKeyE))
        printf("Echap");
    if (sfKeyboard_isKeyPressed(sfKeyUnknown))
        printf("Echap");
    if (sfKeyboard_isKeyPressed(sfKeyB))
        printf("Echap");
    if (sfKeyboard_isKeyPressed(sfKeyF))
        printf("Echap");
    if (sfKeyboard_isKeyPressed(sfKeyJ))
        printf("Echap");
}
