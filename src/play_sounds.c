/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** play_sounds
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void check_bg_music(game_t *game)
{
    if (game->settings->current == main_menu) {
        sfMusic_play(game->scenes->sounds[MUSIC_S_S0].music);
    }
}