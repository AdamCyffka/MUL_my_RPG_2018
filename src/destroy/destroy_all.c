/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** destroy_all
*/

#include "rpg.h"
#include "struct.h"

void destroy_all(game_t *game)
{
    for (int tmp = 0; tmp < 8; tmp++) {
        destroy_window(game);
        destroy_clock(game);
        destroy_views(game);
        destroy_objs(game->scenes[tmp].objs, game->scenes[tmp].how_many[0]);
        destroy_sounds(game->scenes[tmp].sounds, game->scenes[tmp].how_many[1]);
        destroy_buttons(game->scenes[tmp].buttons,
        game->scenes[tmp].how_many[2]);
        destroy_texts(game->scenes[tmp].texts, game->scenes[tmp].how_many[3]);
        free(game->settings->window);
        free(game->settings->clock);
        free(game->settings->map_view);
        free(game->scenes[tmp].objs);
        free(game->scenes[tmp].sounds);
        free(game->scenes[tmp].buttons);
        free(game->scenes[tmp].texts);
        free(game->scenes[tmp].how_many);
    }
    free(game->scenes);
}