/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** destroy_all
*/

#include "rpg.h"

void destroy_all(game_t *game)
{
    destroy_scenes(game->scenes);
    destroy_inventory(game->inventory);
    destroy_quests(game->quests);
    destroy_stats(game->stats);
    destroy_settings(game->settings);
    free(game);
}