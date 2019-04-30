/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** player_interaction
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"
#include "define.h"

void player_interaction(game_t *game)
{
    if (game->settings->_paused == false) {
        if (sfKeyboard_isKeyPressed(sfKeyZ) == false &&
            sfKeyboard_isKeyPressed(sfKeyS) == false &&
            sfKeyboard_isKeyPressed(sfKeyQ) == false &&
            sfKeyboard_isKeyPressed(sfKeyD) == false &&
            sfKeyboard_isKeyPressed(sfKeySpace) == false) {
            if (sfKeyboard_isKeyPressed(sfKeyF) == true)
                player_attack(game->stats);
            else
                player_stop_moving(game->stats, game->settings);
            /*if (sfMouse_isButtonPressed(sfMouseLeft) == true)
              player_attack(game->stats);
              else
              player_stop_moving(game->stats, game->settings);*/
        }
        if ((sfKeyboard_isKeyPressed(sfKeyZ) == true ||
             sfKeyboard_isKeyPressed(sfKeyS) == true ||
             sfKeyboard_isKeyPressed(sfKeyQ) == true ||
             sfKeyboard_isKeyPressed(sfKeyD) == true) &&
            sfKeyboard_isKeyPressed(sfKeySpace) == false)
            key_to_move_or_not(game->scenes[game->settings->current],
                               game->settings, game->stats);
    }
}
