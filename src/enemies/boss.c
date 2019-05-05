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
        sfSprite_setPosition(game->stats->player.sprite,
        (sfVector2f) {1500, 1500});
    }
}
