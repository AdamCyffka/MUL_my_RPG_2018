/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** play_sounds
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void stop_desactivated_music2(game_t *game)
{
    if (game->settings->current != FOREST && sfMusic_getStatus(game->scenes
    [FOREST].sounds[MUSIC_S_S3].music) == sfPlaying) {
        sfMusic_stop(game->scenes[FOREST].sounds[MUSIC_S_S3].music);
        game->scenes[FOREST].sounds[MUSIC_S_S3]._activated = false;
    }
    if (game->settings->current != BEACH && sfMusic_getStatus(game->scenes
    [BEACH].sounds[MUSIC_S_S4].music) == sfPlaying) {
        sfMusic_stop(game->scenes[BEACH].sounds[MUSIC_S_S4].music);
        game->scenes[BEACH].sounds[MUSIC_S_S4]._activated = false;
    }
    if (game->settings->current != CAMP && sfMusic_getStatus(game->scenes[CAMP].
    sounds[MUSIC_S_S5].music) == sfPlaying) {
        sfMusic_stop(game->scenes[CAMP].sounds[MUSIC_S_S5].music);
        game->scenes[CAMP].sounds[MUSIC_S_S5]._activated = false;
    }
}

void stop_desactivated_music(game_t *game)
{
    if (game->settings->current != MAIN_MENU && sfMusic_getStatus(game->scenes
    [MAIN_MENU].sounds[MUSIC_S_S0].music) == sfPlaying) {
        sfMusic_stop(game->scenes[MAIN_MENU].sounds[MUSIC_S_S0].music);
        game->scenes[MAIN_MENU].sounds[MUSIC_S_S0]._activated = false;
    }
    if (game->settings->current != TOWN && sfMusic_getStatus(game->scenes[TOWN].
    sounds[MUSIC_S_S1].music) == sfPlaying) {
        sfMusic_stop(game->scenes[TOWN].sounds[MUSIC_S_S1].music);
        game->scenes[TOWN].sounds[MUSIC_S_S1]._activated = false;
    }
    if (game->settings->current != BOSS && sfMusic_getStatus(game->scenes[BOSS].
    sounds[MUSIC_S_S2].music) == sfPlaying) {
        sfMusic_stop(game->scenes[BOSS].sounds[MUSIC_S_S2].music);
        game->scenes[BOSS].sounds[MUSIC_S_S2]._activated = false;
    }
    stop_desactivated_music2(game);
}

void set_music(game_t *game)
{
    if (game->settings->current == MAIN_MENU && sfMusic_getStatus(game->scenes
    [MAIN_MENU].sounds[MUSIC_S_S0].music) != sfPlaying)
        sfMusic_play(game->scenes[MAIN_MENU].sounds[MUSIC_S_S0].music);
    if (game->settings->current == TOWN && sfMusic_getStatus(game->scenes[TOWN].
    sounds[MUSIC_S_S1].music) != sfPlaying)
        sfMusic_play(game->scenes[TOWN].sounds[MUSIC_S_S1].music);
    if (game->settings->current == BOSS && sfMusic_getStatus(game->scenes[BOSS].
    sounds[MUSIC_S_S2].music) != sfPlaying)
        sfMusic_play(game->scenes[BOSS].sounds[MUSIC_S_S2].music);
    if (game->settings->current == FOREST && sfMusic_getStatus(game->scenes
    [FOREST].sounds[MUSIC_S_S3].music) != sfPlaying)
        sfMusic_play(game->scenes[FOREST].sounds[MUSIC_S_S3].music);
    if (game->settings->current == BEACH && sfMusic_getStatus(game->scenes
    [BEACH].sounds[MUSIC_S_S4].music) != sfPlaying)
        sfMusic_play(game->scenes[BEACH].sounds[MUSIC_S_S4].music);
    if (game->settings->current == CAMP && sfMusic_getStatus(game->scenes[CAMP].
    sounds[MUSIC_S_S5].music) != sfPlaying)
        sfMusic_play(game->scenes[CAMP].sounds[MUSIC_S_S5].music);
}