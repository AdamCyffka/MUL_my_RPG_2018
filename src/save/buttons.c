/*
** EPITECH PROJECT, 2019
** RPG
** File description:
**
*/

#include "rpg.h"
#include "struct.h"

int button_new_game(rpg_t *rpg)
{
	rpg->prev_scene = SC_HUB;
	rpg->curr_scene = SC_HUB;
	if (CURR_SCENE->map != NULL)
		place_in_spawn(rpg);
	DR(reset_scenes(rpg));
	reset_player_stats(rpg->player);
	return (SUCCESS);
}

int button_play(rpg_t *rpg)
{
	rpg->prev_scene = SC_HUB;
	rpg->curr_scene = SC_HUB;
	if (CURR_SCENE->map != NULL)
		place_in_spawn(rpg);
	return (SUCCESS);
}

int button_save(rpg_t *rpg)
{
	save_game(rpg);
	return (SUCCESS);
}
