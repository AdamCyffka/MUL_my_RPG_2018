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

void fill_scene_town8_1(game_scene_t town)
{
    town.buttons[ZONE4_B_S1] = new_button("assets/images/zone.png",
    (sfVector2f) {1152 * 3.5, 420 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[ZONE5_B_S1] = new_button("assets/images/zone.png",
    (sfVector2f) {320 * 3.5, 750 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[ZONE6_B_S1] = new_button("assets/images/zone.png",
    (sfVector2f) {695 * 3.5, 230 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[ZONESPECIAL_B_S1] = new_button("assets/images/zone.png",
    (sfVector2f) {105 * 3.5, 165 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
}

void fill_scene_town8(game_scene_t town)
{
    town.buttons[ZONE1_B_S1] = new_button("assets/images/zone.png",
    (sfVector2f) {185 * 3.5, 750 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[ZONE2_B_S1] = new_button("assets/images/zone.png",
    (sfVector2f) {912 * 3.5, 340 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[ZONE3_B_S1] = new_button("assets/images/zone.png",
    (sfVector2f) {718 * 3.5, 450 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    fill_scene_town8_1(town);
}

void fill_scene_town7_1(game_scene_t town)
{
    town.buttons[OBSTACLE3_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {718 * 3.5, 430 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[OBSTACLE4_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {1152 * 3.5, 400 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[OBSTACLE5_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {320 * 3.5, 730 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[OBSTACLE6_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {575 * 3.5, 210 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[OBSTACLE7_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {695 * 3.5, 210 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    fill_scene_town8(town);
}

void fill_scene_town7(game_scene_t town)
{
    town.objs[STAR_O_S1] = new_object("assets/images/star.png",
    (sfVector2f) {1650, 400}, (sfIntRect) {0, 0, 16, 16}, 1);
    town.objs[LEAF_O_S1] = new_object("assets/images/leaf.png",
    (sfVector2f) {1650, 400}, (sfIntRect) {0, 0, 9, 10}, 1);
    town.objs[LEAF2_O_S1] = new_object("assets/images/leaf2.png",
    (sfVector2f) {920, 1400}, (sfIntRect) {0, 0, 9, 6}, 1);
    town.objs[LEAF3_O_S1] = new_object("assets/images/leaf3.png",
    (sfVector2f) {2800, 630}, (sfIntRect) {0, 0, 7, 8}, 1);
    town.objs[CURSOR_O_S1] = new_object("assets/images/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
    town.buttons[OBSTACLE1_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {185 * 3.5, 730 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[OBSTACLE2_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {912 * 3.5, 320 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    fill_scene_town7_1(town);
}
