/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** play_sounds
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void set_music(game_t *game)
{
    if (game->settings->current == MAIN_MENU)
        sfMusic_play(game->scenes[MAIN_MENU].sounds[MUSIC_S_S0].music);
    if (game->settings->current == TOWN)
        sfMusic_play(game->scenes[TOWN].sounds[MUSIC_S_S1].music);
    if (game->settings->current == BOSS)
        sfMusic_play(game->scenes[BOSS].sounds[MUSIC_S_S2].music);
    if (game->settings->current == FOREST)
        sfMusic_play(game->scenes[FOREST].sounds[MUSIC_S_S3].music);
    if (game->settings->current == CAMP)
        sfMusic_play(game->scenes[CAMP].sounds[MUSIC_S_S5].music);
    if (game->settings->current == BEACH)
        sfMusic_play(game->scenes[BEACH].sounds[MUSIC_S_S4].music);
}