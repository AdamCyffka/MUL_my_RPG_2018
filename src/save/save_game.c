/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** save game
*/

#include "rpg.h"
#include "struct.h"

int save_game(rpg_t *rpg)
{
	(save_player_stats(rpg->player));
	return (SUCCESS);
}
