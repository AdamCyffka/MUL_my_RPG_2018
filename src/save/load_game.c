/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** load_game
*/

#include "rpg.h"
#include "struct.h"
#include <string.h>
#include <unistd.h>

int load_player(int fd_player, save_t *player)
{
    char buffer[sizeof(save_t) + 1];
    int bytes = 0;

    memset(buffer, 0, sizeof(save_t));
    bytes = read(fd_player, buffer, sizeof(save_t));
    if (bytes == -1)
        return (84);
    *player = *(save_t *)buffer;
    return (0);
}

int load_save(int fd_player)
{
    save_t player = {0};

    if (load_player(fd_player, &player) != 0)
        return (84);
    return (0);
}