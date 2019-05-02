/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** Particules functions
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void particules_move3(game_t *game, sfVector2f vector)
{
    if (game->scenes[TOWN].objs[LEAF_O_S1].speed >= 240
        && game->scenes[TOWN].objs[LEAF_O_S1].speed < 310) {
        game->scenes[TOWN].objs[LEAF_O_S1].speed++;
        vector.x += 10 * game->settings->delta_time;
        vector.y += 5 * game->settings->delta_time;
    }
    if (game->scenes[TOWN].objs[LEAF_O_S1].speed >= 310) {
        vector.y -= 260;
        vector.x -= 150;
        game->scenes[TOWN].objs[LEAF_O_S1].speed = 0;
    }
    sfSprite_setPosition(
        game->scenes[TOWN].objs[LEAF_O_S1].sprite, vector);
    sfSprite_setRotation(game->scenes[TOWN].objs[LEAF_O_S1].sprite,
                         game->scenes[TOWN].objs[LEAF_O_S1].speed);
}

void particules_move2(game_t *game, sfVector2f vector)
{
    if (game->scenes[TOWN].objs[LEAF_O_S1].speed >= 130
        && game->scenes[TOWN].objs[LEAF_O_S1].speed < 180) {
        game->scenes[TOWN].objs[LEAF_O_S1].speed++;
        vector.x += 10 * game->settings->delta_time;
        vector.y += 5 * game->settings->delta_time;
    }
    if (game->scenes[TOWN].objs[LEAF_O_S1].speed >= 180
        && game->scenes[TOWN].objs[LEAF_O_S1].speed < 240) {
        game->scenes[TOWN].objs[LEAF_O_S1].speed++;
        vector.x -= 10 * game->settings->delta_time;
        vector.y += 5 * game->settings->delta_time;
    }
    particules_move3(game, vector);
}

void particules_move(game_t *game)
{
    sfVector2f vector = sfSprite_getPosition(
    game->scenes[TOWN].objs[LEAF_O_S1].sprite);

    if (game->scenes[TOWN].objs[LEAF_O_S1].speed < 80) {
        game->scenes[TOWN].objs[LEAF_O_S1].speed++;
        vector.x += 10 * game->settings->delta_time;
        vector.y += 5 * game->settings->delta_time;
    }
    if (game->scenes[TOWN].objs[LEAF_O_S1].speed >= 80
        && game->scenes[TOWN].objs[LEAF_O_S1].speed < 130) {
        game->scenes[TOWN].objs[LEAF_O_S1].speed++;
        vector.x -= 10 * game->settings->delta_time;
        vector.y += 5 * game->settings->delta_time;
    }
    particules_move2(game, vector);
}
