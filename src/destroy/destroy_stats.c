/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** destroy_stats
*/

#include "rpg.h"
#include "enum.h"

void destroy_stats(game_stat_t *stats)
{
    sfFont_destroy(stats->life_t.font);
    sfFont_destroy(stats->xp_t.font);
    sfFont_destroy(stats->name_t.font);
    sfText_destroy(stats->life_t.text);
    sfText_destroy(stats->xp_t.text);
    sfText_destroy(stats->name_t.text);
    free(stats);
}