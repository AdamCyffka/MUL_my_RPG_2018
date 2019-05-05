/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene boss 1
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"
#include "fill_scene.h"

void fill_scene_boss5(game_scene_t boss)
{
    boss.objs[EXIT_O_S2] = new_object("assets/images/exit.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    boss.objs[ME_O_S2] = new_object("assets/images/me.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    boss.objs[PANNEL_O_S2] = new_object("assets/images/pannel.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 500, 500}, -1);
    boss.objs[MINIMAP_O_S2] = new_object("assets/images/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, -1);
    boss.objs[QUEST_O_S2] = new_object("assets/images/quest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 848, 584}, -1);
    boss.objs[LIFE_O_S2] = new_object("assets/images/life.png",
    (sfVector2f) {1700, 910}, (sfIntRect) {0, 0, 209, 85}, 0);
    boss.objs[ICON_O_S2] = new_object("assets/images/icon.png",
    (sfVector2f) {10, 910}, (sfIntRect) {0, 0, 100, 100}, 0);
    boss.objs[CURSOR_O_S2] = new_object("assets/images/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
}

void fill_scene_boss4_1(game_scene_t boss)
{
    boss.objs[OBSTACLE_O_S2] = new_object("assets/images/obstacle.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, 1);
    boss.objs[TOWN_O_S2] = new_object("assets/images/map_town.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, 0);
    boss.objs[SHAMAN_O_S2] = new_object("assets/images/shaman.png",
    (sfVector2f) {1575, 1150}, (sfIntRect) {0, 0, 16, 32}, 15);
    boss.objs[OPTION_O_S2] = new_object("assets/images/option.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    boss.objs[INVENTORY_O_S2] = new_object("assets/images/inventory.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
}

void fill_scene_boss4(game_scene_t boss)
{
    boss.buttons[WALKABLE13_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {440, 500}, (sfIntRect) {0, 0, 47, 280}, 0);
    boss.buttons[WALKABLE14_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {155, 735}, (sfIntRect) {0, 0, 287, 42}, 0);
    boss.buttons[WALKABLE15_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {485, 590}, (sfIntRect) {0, 0, 402, 45}, 0);
    boss.buttons[WALKABLE16_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {850, 600}, (sfIntRect) {0, 0, 41, 428}, 0);
    boss.buttons[WALKABLE17_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {890, 790}, (sfIntRect) {0, 0, 359, 36}, 0);
    fill_scene_boss4_1(boss);
    fill_scene_boss5(boss);
}
