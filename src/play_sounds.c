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
        sfMusic_play(game->scenes->sounds[MUSIC_S_S0].music);
    if (game->settings->current == TOWN)
        sfMusic_play(game->scenes->sounds[MUSIC_S_S1].music);
    if (game->settings->current == BOSS)
        sfMusic_play(game->scenes->sounds[MUSIC_S_S2].music);
    if (game->settings->current == FOREST)
        sfMusic_play(game->scenes->sounds[MUSIC_S_S3].music);
    if (game->settings->current == CAMP)
        sfMusic_play(game->scenes->sounds[MUSIC_S_S5].music);
    if (game->settings->current == BEACH)
        sfMusic_play(game->scenes->sounds[MUSIC_S_S4].music);
    if (game->settings->current == VICTORY)
        sfMusic_play(game->scenes->sounds[SOUND_S_S6].music);
    if (game->settings->current == DEFEAT)
        sfMusic_play(game->scenes->sounds[SOUND_S_S7].music);
}