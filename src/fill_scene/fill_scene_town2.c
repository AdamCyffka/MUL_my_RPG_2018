/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene town 2
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"
#include "fill_scene.h"

void fill_scene_town6_1(game_scene_t town)
{
    town.objs[ROBIN_O_S1] = new_object("assets/images/robin.png",
    (sfVector2f) {1152 * 3.5, 380 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[GEORGE_O_S1] = new_object("assets/images/george.png",
    (sfVector2f) {320 * 3.5, 710 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[MINIMAP_O_S1] = new_object("assets/images/minimap.png",
    (sfVector2f) {490, 200}, (sfIntRect) {0, 0, 1920, 1080}, -1);
    town.objs[QUEST_O_S1] = new_object("assets/images/quest.png",
    (sfVector2f) {550, 235}, (sfIntRect) {0, 0, 848, 584}, -1);
    town.objs[LIFE_O_S1] = new_object("assets/images/life.png",
    (sfVector2f) {1700, 910}, (sfIntRect) {0, 0, 209, 85}, 0);
    town.objs[ICON_O_S1] = new_object("assets/images/icon.png",
    (sfVector2f) {10, 910}, (sfIntRect) {0, 0, 100, 100}, 0);
    town.objs[AXE_O_S1] = new_object("assets/images/icon_axe.png",
    (sfVector2f) {780 * 3.5, 80 * 3.5}, (sfIntRect) {0, 0, 50, 50}, 0);
}

void fill_scene_town6(game_scene_t town)
{
    town.objs[SHEEP5_O_S1] = new_object("assets/images/sheep.png",
    (sfVector2f) {1050 * 3.5, 340 * 3.5}, (sfIntRect) {0, 0, 32, 32}, 0);
    town.objs[JODI_O_S1] = new_object("assets/images/jodi.png",
    (sfVector2f) {185 * 3.5, 710 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[LEWIS_O_S1] = new_object("assets/images/lewis.png",
    (sfVector2f) {912 * 3.5, 300 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[PIERRE_O_S1] = new_object("assets/images/pierre.png",
    (sfVector2f) {718 * 3.5, 410 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    fill_scene_town6_1(town);
    fill_scene_town7(town);
}

void fill_scene_town5(game_scene_t town)
{
    town.objs[ME_O_S1] = new_object("assets/images/me.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    town.objs[PANNEL_O_S1] = new_object("assets/images/pannel.png",
    (sfVector2f) {350, 750}, (sfIntRect) {0, 0, 1292, 482}, -1);
    town.objs[TOWN_O_S1] = new_object("assets/images/map_town.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, 0);
    town.objs[DICK_O_S1] = new_object("assets/images/dick.png",
    (sfVector2f) {575 * 3.5, 190 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[EMILY_O_S1] = new_object("assets/images/emily.png",
    (sfVector2f) {695 * 3.5, 190 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[SHEEP1_O_S1] = new_object("assets/images/sheep.png",
    (sfVector2f) {310 * 3.5, 90 * 3.5}, (sfIntRect) {0, 0, 32, 32}, 0);
    town.objs[SHEEP2_O_S1] = new_object("assets/images/sheep.png",
    (sfVector2f) {180 * 3.5, 385 * 3.5}, (sfIntRect) {0, 0, 32, 32}, 0);
    town.objs[SHEEP3_O_S1] = new_object("assets/images/sheep.png",
    (sfVector2f) {1000 * 3.5, 840 * 3.5}, (sfIntRect) {0, 0, 32, 32}, 0);
    town.objs[SHEEP4_O_S1] = new_object("assets/images/sheep.png",
    (sfVector2f) {590 * 3.5, 510 * 3.5}, (sfIntRect) {0, 0, 32, 32}, 0);
    fill_scene_town6(town);
}

void fill_scene_town4(game_scene_t town)
{
    town.objs[OBSTACLE_O_S1] = new_object("assets/images/obstacle.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, 1);
    town.objs[OPTION_O_S1] = new_object("assets/images/option.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    town.objs[INVENTORY_O_S1] = new_object("assets/images/inventory.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    town.objs[EXIT_O_S1] = new_object("assets/images/exit.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    fill_scene_town5(town);
}
