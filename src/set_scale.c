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

void set_scale(game_t *game)
{
    sfSprite_setScale(game->stats->player.sprite, (sfVector2f) {4, 4});
    if (game->settings->current == town) {
        sfSprite_setScale(game->scenes[town].objs[TOWN_O_S1].sprite,
        (sfVector2f) {3.5, 3.5});
        sfSprite_setScale(game->scenes[town].objs[OBSTACLE_O_S1].sprite,
        (sfVector2f) {3.5, 3.5});
        sfSprite_setScale(game->scenes[town].objs[PANNEL_O_S1].sprite,
        (sfVector2f) {1, 0.5});
        set_scale_npc(game->scenes[town].objs); 
    }
    if (game->settings->current == boss) {
        sfSprite_setScale(game->scenes[boss].objs[TOWN_O_S2].sprite,
        (sfVector2f) {3.5, 3.5});
        sfSprite_setScale(game->scenes[boss].objs[OBSTACLE_O_S2].sprite,
        (sfVector2f) {3.5, 3.5});
    }
    if (game->settings->current == beach) {
        sfSprite_setScale(game->scenes[beach].objs[SKELETON1_O_S4].sprite,
        (sfVector2f) {3.5, 3.5});
    }
    if (game->settings->current == forest) {
        //sfSprite_setScale(game->scenes[forest].objs[TOWN_O_S2].sprite,
        //(sfVector2f) {2.5, 2.5});
    }
}
