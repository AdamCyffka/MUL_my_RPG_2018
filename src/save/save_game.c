/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** save_game
*/

#include "rpg.h"
#include "struct.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int save_player(save_t *player)
{
    int fd = open("data/player.bin", O_RDWR | O_CREAT | O_TRUNC, 00777);

    if (fd == -1)
        return (84);
    if (write(fd, player, sizeof(save_t)) == -1)
        return (84);
    return (0);
}

int save_game(save_t *player)
{
    if (save_player(player) != 0)
        return (84);
    return (0);
}