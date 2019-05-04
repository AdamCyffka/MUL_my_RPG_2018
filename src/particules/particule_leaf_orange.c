/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** particule_leaf
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void particules_move_orange3(game_t *game, sfVector2f vector)
{
    if (game->scenes[TOWN].objs[LEAF2_O_S1].speed >= 240
        && game->scenes[TOWN].objs[LEAF2_O_S1].speed < 310) {
        game->scenes[TOWN].objs[LEAF2_O_S1].speed++;
        vector.x += 10 * game->settings->delta_time;
        vector.y += 5 * game->settings->delta_time;
    }
    if (game->scenes[TOWN].objs[LEAF2_O_S1].speed >= 310) {
        vector.y -= 260;
        vector.x -= 150;
        game->scenes[TOWN].objs[LEAF2_O_S1].speed = 0;
    }
    sfSprite_setPosition(
        game->scenes[TOWN].objs[LEAF2_O_S1].sprite, vector);
    sfSprite_setRotation(game->scenes[TOWN].objs[LEAF2_O_S1].sprite,
    game->scenes[TOWN].objs[LEAF2_O_S1].speed);
}

void particules_move_orange2(game_t *game, sfVector2f vector)
{
    if (game->scenes[TOWN].objs[LEAF2_O_S1].speed >= 130
        && game->scenes[TOWN].objs[LEAF2_O_S1].speed < 180) {
        game->scenes[TOWN].objs[LEAF2_O_S1].speed++;
        vector.x += 10 * game->settings->delta_time;
        vector.y += 5 * game->settings->delta_time;
    }
    if (game->scenes[TOWN].objs[LEAF2_O_S1].speed >= 180
        && game->scenes[TOWN].objs[LEAF2_O_S1].speed < 240) {
        game->scenes[TOWN].objs[LEAF2_O_S1].speed++;
        vector.x -= 10 * game->settings->delta_time;
        vector.y += 5 * game->settings->delta_time;
    }
    particules_move_orange3(game, vector);
}

void particules_move_orange(game_t *game)
{
    sfVector2f vector = sfSprite_getPosition(
    game->scenes[TOWN].objs[LEAF2_O_S1].sprite);

    sfSprite_setScale(game->scenes[TOWN].objs[LEAF2_O_S1].sprite,
    (sfVector2f) {3.5, 3.5});
    if (game->scenes[TOWN].objs[LEAF2_O_S1].speed < 80) {
        game->scenes[TOWN].objs[LEAF2_O_S1].speed++;
        vector.x += 10 * game->settings->delta_time;
        vector.y += 5 * game->settings->delta_time;
    }
    if (game->scenes[TOWN].objs[LEAF2_O_S1].speed >= 80
        && game->scenes[TOWN].objs[LEAF2_O_S1].speed < 130) {
        game->scenes[TOWN].objs[LEAF2_O_S1].speed++;
        vector.x -= 10 * game->settings->delta_time;
        vector.y += 5 * game->settings->delta_time;
    }
    particules_move_orange2(game, vector);
}