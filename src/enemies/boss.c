/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** main functions
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void teleport_player_boss(game_t *game)
{
    if (game->quests[BOSS_Q].state == Q_ACCEPTED &&
        game->settings->current != BOSS) {
        game->settings->current = BOSS;
        game->quests[BOSS_Q].state = Q_IN_PROGRESS;
        game->stats->player.position.x = 1600;
        game->stats->player.position.y = 1600;
        sfSprite_setPosition(game->stats->player.sprite,
        game->stats->player.position);
    }
}
