/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** set scale
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void set_scale(game_t *game)
{
    if (game->settings->current == town) {
        sfSprite_setScale(game->stats->player.sprite, (sfVector2f) {4, 4});
        sfSprite_setScale(game->scenes[town].objs[TOWN_O_S1].sprite,
        (sfVector2f) {3.5, 3.5});
    }
    if (game->settings->current == boss)
        sfSprite_setScale(game->stats->player.sprite, (sfVector2f) {4, 4});
        sfSprite_setScale(game->scenes[town].objs[TOWN_O_S1].sprite,
        (sfVector2f) {3.5, 3.5});
    if (game->settings->current == forest) {
        sfSprite_setScale(game->stats->player.sprite, (sfVector2f) {4, 4});
        //sfSprite_setScale(scene.objs[FOREST_O_S3].sprite, (sfVector2f)
        //{2.5, 2.5});
    }
    if (game->settings->current == beach)
        printf("beach");
}