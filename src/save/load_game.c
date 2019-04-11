/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** load game
*/

#include "rpg.h"
#include "struct.h"

int load_game(rpg_t *rpg)
{
	(load_player_stats(rpg->player));
	return (SUCCESS);
}
