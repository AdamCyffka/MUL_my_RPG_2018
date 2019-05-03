/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** refresh_player_data
*/

#include "rpg.h"

void refresh_player_data(game_stat_t *stats)
{
    sfText_setString(stats->life_t.text, my_getstr(stats->life));
    sfText_setString(stats->xp_t.text, my_getstr(stats->xp));
}