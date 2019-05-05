/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** assets_load_stats
*/

#include "rpg.h"
#include "enum.h"

int assets_load_stats(game_stat_t *stats)
{
    if (stats->xp_t.font == NULL || stats->xp_t.text == NULL)
        return 84;
    if (stats->life_t.font == NULL || stats->life_t.text == NULL)
        return 84;
    if (stats->name_t.font == NULL || stats->name_t.text == NULL)
        return 84;
    if (stats->player.texture == NULL || stats->player.sprite == NULL)
        return 84;
    return 0;
}