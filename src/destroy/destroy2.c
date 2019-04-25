/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** destroy
*/

#include "rpg.h"
#include "struct.h"

void destroy_views(game_t *game)
{
    sfView_destroy(game->settings->map_view);
}

void destroy_clock(game_t *game)
{
    sfClock_destroy(game->settings->clock);
}