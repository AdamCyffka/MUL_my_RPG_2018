/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** set scale
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void set_scale_npc(game_object_t *objs)
{
    for (int tmp = DICK_O_S1; tmp <= SHEEP5_O_S1; tmp++)
        sfSprite_setScale(objs[tmp].sprite, (sfVector2f) {4, 4});
}

void set_scale2(game_t *game)
{
    if (game->settings->current == BEACH) {
        for (int tmp = SKELETON1_O_S4; tmp <= SKELETON20_O_S4; tmp++) {
            sfSprite_setScale(game->scenes[BEACH].objs[tmp].sprite,
            (sfVector2f) {3.5, 3.5});
        }
    }
    if (game->settings->current == CAMP) {
        for (int tmp = GOLEM1_O_S5; tmp <= GOLEM10_O_S5; tmp++) {
            sfSprite_setScale(game->scenes[CAMP].objs[tmp].sprite,
            (sfVector2f) {3.5, 3.5});
        }
    }
    if (game->settings->current == FOREST) {
        sfSprite_setScale(game->scenes[FOREST].objs[TOWN_O_S2].sprite,
        (sfVector2f) {1.5, 1.5});
        for (int tmp = GHOST1_O_S3; tmp <= GHOST15_O_S3; tmp++) {
            sfSprite_setScale(game->scenes[FOREST].objs[tmp].sprite,
            (sfVector2f) {3.5, 3.5});
        }
    }
}

void set_scale(game_t *game)
{
    sfSprite_setScale(game->stats->player.sprite, (sfVector2f) {4, 4});
    if (game->settings->current == TOWN) {
        sfSprite_setScale(game->scenes[TOWN].objs[TOWN_O_S1].sprite,
        (sfVector2f) {3.5, 3.5});
        sfSprite_setScale(game->scenes[TOWN].objs[OBSTACLE_O_S1].sprite,
        (sfVector2f) {3.5, 3.5});
        sfSprite_setScale(game->scenes[TOWN].objs[PANNEL_O_S1].sprite,
        (sfVector2f) {1, 0.5});
        set_scale_npc(game->scenes[TOWN].objs);
    }
    if (game->settings->current == BOSS) {
        sfSprite_setScale(game->scenes[BOSS].objs[TOWN_O_S2].sprite,
        (sfVector2f) {3.5, 3.5});
        sfSprite_setScale(game->scenes[BOSS].objs[OBSTACLE_O_S2].sprite,
        (sfVector2f) {3.5, 3.5});
        sfSprite_setScale(game->scenes[BOSS].objs[SHAMAN_O_S2].sprite,
        (sfVector2f) {7, 7});
    }
    set_scale2(game);
}
