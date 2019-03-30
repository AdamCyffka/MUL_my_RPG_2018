/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene town
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_town2(game_scene_t town)
{
    town.objs[ROBIN_O_S5] = new_object("assets/robin.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    town.objs[MINIMAP_O_S5] = new_object("assets/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    town.sounds[BOSS_S_S5] = new_sound("assets/music_boss.ogg", sfFalse, 100);
    town.sounds[SWORD_S_S5] = new_sound("assets/sword.ogg", sfFalse, 100);
    town.sounds[MUSIC_S_S5] = new_sound("assets/music_town.ogg", sfFalse, 100);
    town.sounds[CLICK_S_S5] = new_sound("assets/click.ogg", sfFalse, 100);
    town.sounds[WALK_S_S5] = new_sound("assets/walk_rock.ogg", sfFalse, 100);
}

void fill_scene_town1(game_scene_t town)
{
    town.objs[CURSOR_O_S5] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    town.objs[SHAMAN_O_S5] = new_object("assets/shaman.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    town.objs[PANNEL_O_S5] = new_object("assets/pannel.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    town.objs[TOWN_O_S5] = new_object("assets/map_town.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    town.objs[DICK_O_S5] = new_object("assets/dick.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    town.objs[EMILY_O_S5] = new_object("assets/emily.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    town.objs[SHEEP_O_S5] = new_object("assets/sheep.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    town.objs[JODI_O_S5] = new_object("assets/jodi.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    town.objs[LEWIS_O_S5] = new_object("assets/lewis.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    town.objs[PIERRE_O_S5] = new_object("assets/pierre.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
}