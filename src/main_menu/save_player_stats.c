/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** save player stats
*/

#include "rpg.h"
#include "struct.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

static int write_player_stat(char *str, int nb, int fd)
{
    char *level = my_itoa(nb);

    write(fd, str, my_strlen(str));
    write(fd, level, my_strlen(level));
    write(fd, "\n", 1);
    free(level);
    return (SUCCESS);
}

int save_player_stats(game_t *game)
{
    int fd = open("data/player_stats.cfg", O_WRONLY, O_TRUNC);

    if (fd < 0)
        return (WRONG_PATH);
    (write_player_stat("current quest = ", game->stats->current_quest, fd));
    (write_player_stat("life = ", game->stats->life, fd));
    (write_player_stat("name = ", game->stats->name, fd));
    (write_player_stat("xp = ", game->stats->xp, fd));
    return (SUCCESS);
}