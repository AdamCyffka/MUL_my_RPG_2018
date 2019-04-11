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
    if (game->settings->event.type == sfEvtClosed ||
    sfKeyboard_isKeyPressed(sfKeyTab) == sfTrue)
        sfRenderWindow_close(game->settings->window);
    if (game->settings->event.type == sfEvtMouseMoved) {
        game->settings->cursor_pos.x = game->settings->event.mouseMove.x;
        game->settings->cursor_pos.y = game->settings->event.mouseMove.y;
    }
    if (game->settings->event.type == sfEvtKeyPressed) {
        keyboard_checker(game);
        key_to_move_or_not(game->settings, game->stats);
    }
    else if (game->settings->event.type == sfEvtMouseButtonPressed)
        player_attack(game->stats);
    else
        player_stop_moving(game->stats);
}

void keyboard_checker(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyE) == true)
        printf("dd");
    else if (sfKeyboard_isKeyPressed(sfKeyH))
        utils_button_menu(game->scenes[main_menu], 1, -1);
    else if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
        printf("Echap");
    else if (sfKeyboard_isKeyPressed(sfKeyA) == sfTrue)
        printf("Echap");
    else if (sfKeyboard_isKeyPressed(sfKeyB) == sfTrue)
        printf("Echap");
    else if (sfKeyboard_isKeyPressed(sfKeyF) == sfTrue)
        printf("Echap");
    else if (sfKeyboard_isKeyPressed(sfKeyJ) == sfTrue)
        printf("Echap");
}