/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** draw_player_info
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void draw_player_info(game_t *game)
{
    if (game->settings->current >= TOWN && game->settings->current <= CAMP)
        sfRenderWindow_drawText(game->settings->window, game->stats->life_t.
        text, NULL);
    if (game->stats->xp_t.state >= 0)
        sfRenderWindow_drawText(game->settings->window, game->stats->xp_t.text,
        NULL);
    if (game->stats->name_t.state >= 0)
        sfRenderWindow_drawText(game->settings->window, game->stats->name_t.
        text, NULL);
}