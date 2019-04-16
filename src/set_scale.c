/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** set scale
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void set_scale_town(game_scene_t scene, game_stat_t *stats, game_setting_t
*settings)
{
    sfSprite_setScale(stats->player.sprite, (sfVector2f) {4, 4});
    sfSprite_setScale(scene.objs[TOWN_O_S1].sprite, (sfVector2f) {3.5, 3.5});
}

void set_scale_forest(game_scene_t scene, game_stat_t *stats, game_setting_t
*settings)
{
    sfSprite_setScale(stats->player.sprite, (sfVector2f) {4, 4});
    //sfSprite_setScale(scene.objs[FOREST_O_S3].sprite, (sfVector2f) {2.5, 2.5});
}
