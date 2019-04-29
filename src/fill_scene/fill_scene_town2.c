/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene town 2
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_town8(game_scene_t town)
{
    town.buttons[ZONE1_B_S1] = new_button("assets/zone.png",
    (sfVector2f) {185 * 3.5, 750 * 3.5}, (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[ZONE2_B_S1] = new_button("assets/zone.png",
    (sfVector2f) {912 * 3.5, 340 * 3.5}, (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[ZONE3_B_S1] = new_button("assets/zone.png",
    (sfVector2f) {718 * 3.5, 450 * 3.5}, (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[ZONE4_B_S1] = new_button("assets/zone.png",
    (sfVector2f) {1152 * 3.5, 420 * 3.5}, (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[ZONE5_B_S1] = new_button("assets/zone.png",
    (sfVector2f) {320 * 3.5, 750 * 3.5}, (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[ZONE6_B_S1] = new_button("assets/zone.png",
    (sfVector2f) {695 * 3.5, 230 * 3.5}, (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[ZONESPECIAL_B_S1] = new_button("assets/zone.png",
    (sfVector2f) {70 * 3.5, 170 * 3.5}, (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
}

void fill_scene_town7(game_scene_t town)
{
    town.objs[CURSOR_O_S1] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 50}, 0);
    town.buttons[OBSTACLE1_B_S1] = new_button("assets/invisible1.png",
    (sfVector2f) {185 * 3.5, 730 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[OBSTACLE2_B_S1] = new_button("assets/invisible1.png",
    (sfVector2f) {912 * 3.5, 320 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[OBSTACLE3_B_S1] = new_button("assets/invisible1.png",
    (sfVector2f) {718 * 3.5, 430 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[OBSTACLE4_B_S1] = new_button("assets/invisible1.png",
    (sfVector2f) {1152 * 3.5, 400 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[OBSTACLE5_B_S1] = new_button("assets/invisible1.png",
    (sfVector2f) {320 * 3.5, 730 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[OBSTACLE6_B_S1] = new_button("assets/invisible1.png",
    (sfVector2f) {575 * 3.5, 210 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    town.buttons[OBSTACLE7_B_S1] = new_button("assets/invisible1.png",
    (sfVector2f) {695 * 3.5, 210 * 3.5},
    (sfIntRect) {0, 0, 16 * 3.5, 16 * 3.5}, 0);
    fill_scene_town8(town);
}

void fill_scene_town6(game_scene_t town)
{
    town.objs[SHEEP5_O_S1] = new_object("assets/sheep.png",
    (sfVector2f) {1050 * 3.5, 340 * 3.5}, (sfIntRect) {0, 0, 32, 32}, 0);
    town.objs[JODI_O_S1] = new_object("assets/jodi.png",
    (sfVector2f) {185 * 3.5, 710 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[LEWIS_O_S1] = new_object("assets/lewis.png",
    (sfVector2f) {912 * 3.5, 300 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[PIERRE_O_S1] = new_object("assets/pierre.png",
    (sfVector2f) {718 * 3.5, 410 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
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
    fill_scene_town7(town);
}
