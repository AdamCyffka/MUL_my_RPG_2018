/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** save player stats
*/

#include "rpg.h"
#include "struct.h"

static int write_player_stat(char *str, int nb, int fd)
{
	char *level = my_itoa(nb);

	write(fd, str, my_strlen(str));
	write(fd, level, my_strlen(level));
	write(fd, "\n", 1);
	free(level);
	return (SUCCESS);
}

int save_player_stats(player_t *player)
{
	int fd = open("data/player_stats.cfg", O_WRONLY, O_TRUNC);

	if (fd < 0)
		return (WRONG_PATH);
	(write_player_stat("level = ", player->stats->level, fd));
	(write_player_stat("xp = ", player->stats->xp, fd));
	(write_player_stat("xp_to_up = ", player->stats->xp_to_up, fd));
	(write_player_stat("light_radius = ", player->stats->light_radius, fd));
	(write_player_stat("nb_orb = ", player->stats->nb_orbe, fd));
	return (SUCCESS);
}
