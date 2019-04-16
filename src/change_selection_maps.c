/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** change selection
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void change_maps(game_t *game)
{
    if (game->settings->current == town)
        change_town();
    if (game->settings->current == boss)
        change_boss();
    if (game->settings->current == forest)
        change_forest();
    if (game->settings->current == beach)
        change_beach();
    if (game->settings->current == camp)
        change_camp();
}

void change_vic_def(game_t *game)
{
    if (game->settings->current == victory)
        change_victory();
    if (game->settings->current == defeat)
        change_defeat();
}