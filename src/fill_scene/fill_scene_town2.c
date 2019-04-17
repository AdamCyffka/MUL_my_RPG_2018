/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene town 2
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_town6(game_scene_t town)
{
    town.objs[SHEEP5_O_S1] = new_object("assets/sheep.png",
    (sfVector2f) {1050 * 3.5, 340 * 3.5}, (sfIntRect) {0, 0, 32, 32}, 0);
    town.objs[JODI_O_S1] = new_object("assets/jodi.png",
    (sfVector2f) {185 * 3.5, 710 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[LEWIS_O_S1] = new_object("assets/lewis.png",
    (sfVector2f) {912 * 3.5, 300 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[PIERRE_O_S1] = new_object("assets/pierre.png",
    (sfVector2f) {718 * 3.5, 425 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[ROBIN_O_S1] = new_object("assets/robin.png",
    (sfVector2f) {1152 * 3.5, 380 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[GEORGE_O_S1] = new_object("assets/george.png",
    (sfVector2f) {320 * 3.5, 710 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[MINIMAP_O_S1] = new_object("assets/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, -1);
    town.objs[QUEST_O_S1] = new_object("assets/quest.png",
    (sfVector2f) {550, 235}, (sfIntRect) {0, 0, 848, 584}, -1);
    town.objs[ICON_O_S1] = new_object("assets/icon.png",
    (sfVector2f) {10, 910}, (sfIntRect) {0, 0, 100, 100}, 0);
    town.objs[CURSOR_O_S1] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 10, 10}, 0);
}