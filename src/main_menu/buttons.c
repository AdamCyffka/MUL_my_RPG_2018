/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** buttons
*/

#include "rpg.h"
#include "struct.h"

int button_new_game(game_t *game)
{
	return (SUCCESS);
}
int load_game(game_t *game)
{
    (load_player_stats(game));
    return (SUCCESS);
}

int button_save(game_t *game)
{
	save_game(game);
	return (SUCCESS);
}