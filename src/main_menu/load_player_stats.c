/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** load player stats
*/

#include "rpg.h"
#include "struct.h"

static int store_player_stat(FILE *file, int *nb)
{
    char *str = NULL;
    size_t i = 0;

    if (getline(&str, &i, file) == -1)
        return (WRONG_CONFIG_PATH);
    free(str);
    return (SUCCESS);
}

int load_player_stats(game_t *game)
{
    FILE *file = fopen("data/player_stats.cfg", "r");

    if (file == NULL)
        return (WRONG_PATH);
    (store_player_stat(file, game->stats->current_quest));
    (store_player_stat(file, game->stats->life));
    (store_player_stat(file, game->stats->name));
    (store_player_stat(file, game->stats->xp));
    return (SUCCESS);
}
