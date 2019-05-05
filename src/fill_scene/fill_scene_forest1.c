/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene forest 1
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"
#include "fill_scene.h"

void fill_scene_forest4_2(game_scene_t forest)
{
    forest.objs[GHOST10_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {1700, 850}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST11_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {2520, 320}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST12_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {2340, 350}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST13_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {2380, 520}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST14_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {2300, 430}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST15_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {2500, 450}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[QUEST_O_S3] = new_object("assets/images/quest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 848, 584}, -1);
    forest.objs[LIFE_O_S3] = new_object("assets/images/life.png",
    (sfVector2f) {1700, 910}, (sfIntRect) {0, 0, 209, 85}, 0);
    forest.objs[ICON_O_S3] = new_object("assets/images/icon.png",
    (sfVector2f) {10, 910}, (sfIntRect) {0, 0, 100, 100}, 0);
    forest.objs[CURSOR_O_S3] = new_object("assets/images/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
}

void fill_scene_forest4_1(game_scene_t forest)
{
    forest.objs[GHOST4_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {1450, 450}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST5_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {1300, 300}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST6_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {1550, 250}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST7_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {2400, 1150}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST8_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {2200, 1150}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST9_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {2000, 1150}, (sfIntRect) {0, 0, 16, 32}, 3);
}

void fill_scene_forest4(game_scene_t forest)
{
    forest.objs[ME_O_S3] = new_object("assets/images/me.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    forest.objs[FOREST_O_S3] = new_object("assets/images/map_forest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    forest.objs[MINIMAP_O_S3] = new_object("assets/images/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, -1);
    forest.objs[GHOST1_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {500, 500}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST2_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {300, 300}, (sfIntRect) {0, 0, 16, 32}, 3);
    forest.objs[GHOST3_O_S3] = new_object("assets/images/ghost.png",
    (sfVector2f) {700, 700}, (sfIntRect) {0, 0, 16, 32}, 3);
    fill_scene_forest4_1(forest);
    fill_scene_forest4_2(forest);
}
