/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene other maps
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_forest(game_scene_t forest)
{
    forest.objs[CURSOR_O_S6] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    forest.objs[FOREST_O_S6] = new_object("assets/map_forest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    forest.objs[GHOST_O_S6] = new_object("assets/ghost.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    forest.sounds[CLICK_S_S6] = new_sound("assets/click.ogg", sfFalse, 100);
    forest.sounds[MUSIC_S_S6] = new_sound("assets/music_forest.ogg", sfFalse,
    100);
    forest.sounds[WALK_S_S6] = new_sound("assets/walk_forest.ogg", sfFalse,
    100);
    forest.sounds[SWORD_S_S6] = new_sound("assets/sword.ogg", sfFalse, 100);
}

void fill_scene_beach(game_scene_t beach)
{
    beach.objs[CURSOR_O_S7] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    beach.objs[BEACH_O_S7] = new_object("assets/map_beach.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    beach.sounds[CLICK_S_S7] = new_sound("assets/click.ogg", sfFalse, 100);
    beach.sounds[MUSIC_S_S7] = new_sound("assets/music_beach.ogg", sfFalse,
    100);
    beach.sounds[WALK_S_S7] = new_sound("assets/walk_sand.ogg", sfFalse, 100);
    beach.sounds[SWORD_S_S7] = new_sound("assets/sword.ogg", sfFalse, 100);
}

void fill_scene_map(game_scene_t map)
{
    map.objs[CURSOR_O_S8] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    map.objs[MAP_O_S8] = new_object("assets/map_map.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    map.sounds[CLICK_S_S8] = new_sound("assets/click.ogg", sfFalse, 100);
    map.sounds[MUSIC_S_S8] = new_sound("assets/music_map.ogg", sfFalse, 100);
    map.sounds[WALK_S_S8] = new_sound("assets/walk_forest.ogg", sfFalse, 100);
    map.sounds[SWORD_S_S8] = new_sound("assets/sword.ogg", sfFalse, 100);
}