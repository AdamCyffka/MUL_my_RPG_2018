/*
** EPITECH PROJECT, 2019
** player_attack
** File description:
** rpg
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void player_attack(game_stat_t *stats)
{
    if (stats->player.rect.top == 0) {
        stats->player.rect.left = 0;
        stats->player.rect.top = 157;
        stats->player.rect.width = 16;
        stats->player.rect.height = 34;
    }
    if (stats->player.rect.top == 64) {
        stats->player.rect.left = 16;
        stats->player.rect.top = 157;
        stats->player.rect.width = 16;
        stats->player.rect.height = 34;
    }
    if (stats->player.rect.top == 32) {
        stats->player.rect.left = 0;
        stats->player.rect.top = 129;
        stats->player.rect.width = 32;
        stats->player.rect.height = 28;
        stats->player.position.y += 4;
    }
    if (stats->player.rect.top == 96) {
        stats->player.rect.left = 32;
        stats->player.rect.top = 129;
        stats->player.rect.width = 32;
        stats->player.rect.height = 28;
        stats->player.position.y += 4;
        stats->player.position.x -= 50;
    }
    sfSprite_setPosition(stats->player.sprite, stats->player.position);
    sfSprite_setTextureRect(stats->player.sprite, stats->player.rect);
}
