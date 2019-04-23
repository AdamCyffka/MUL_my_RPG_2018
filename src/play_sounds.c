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
    if (game->settings->current == main_menu)
        sfMusic_play(game->scenes->sounds[MUSIC_S_S0].music);
    if (game->settings->current == town)
        sfMusic_play(game->scenes->sounds[MUSIC_S_S1].music);
    if (game->settings->current == boss)
        sfMusic_play(game->scenes->sounds[MUSIC_S_S2].music);
    if (game->settings->current == forest)
        sfMusic_play(game->scenes->sounds[MUSIC_S_S3].music);
    if (game->settings->current == camp)
        sfMusic_play(game->scenes->sounds[MUSIC_S_S5].music);
    if (game->settings->current == beach)
        sfMusic_play(game->scenes->sounds[MUSIC_S_S4].music);
    if (game->settings->current == victory)
        sfMusic_play(game->scenes->sounds[SOUND_S_S6].music);
    if (game->settings->current == defeat)
        sfMusic_play(game->scenes->sounds[SOUND_S_S7].music);
}