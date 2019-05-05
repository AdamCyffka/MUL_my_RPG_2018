/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** assets_load
*/

#include "rpg.h"
#include "enum.h"

int assets_load(game_t *game)
{
    if (assets_load_scenes(game->scenes) == 84)
        return 84;
    if (assets_load_inventory(game->inventory) == 84)
        return 84;
    if (assets_load_quests(game->quests) == 84)
        return 84;
    if (assets_load_stats(game->stats) == 84)
        return 84;
    return 0;
}