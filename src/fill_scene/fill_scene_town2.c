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
    town.objs[GEORGE_O_S1] = new_object("assets/george.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    town.objs[ROBIN_O_S1] = new_object("assets/robin.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    town.objs[MINIMAP_O_S1] = new_object("assets/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, -1);
    town.objs[QUEST_O_S1] = new_object("assets/quest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 848, 584}, -1);
    town.objs[ICON_O_S1] = new_object("assets/icon.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 56, 56}, 0);
    town.objs[CURSOR_O_S1] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 10, 10}, 0);
}