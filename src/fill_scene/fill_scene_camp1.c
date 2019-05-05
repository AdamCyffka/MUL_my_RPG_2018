/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene camp 1
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"
#include "fill_scene.h"

void fill_scene_camp4(game_scene_t camp)
{
    camp.buttons[SAVE_B_S5] = new_button("assets/images/exit_save.png",
    (sfVector2f) {800, 600}, (sfIntRect) {0, 0, 280, 96}, -1);
    camp.objs[LIFE_O_S5] = new_object("assets/images/life.png",
    (sfVector2f) {1700, 910}, (sfIntRect) {0, 0, 209, 85}, 0);
    camp.objs[ICON_O_S5] = new_object("assets/images/icon.png",
    (sfVector2f) {10, 910}, (sfIntRect) {0, 0, 100, 100}, 0);
    camp.objs[CURSOR_O_S5] = new_object("assets/images/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
}

void fill_scene_camp3_1(game_scene_t camp)
{
    camp.objs[GOLEM2_O_S5] = new_object("assets/images/golem.png",
    (sfVector2f) {850, 450}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM3_O_S5] = new_object("assets/images/golem.png",
    (sfVector2f) {1400, 800}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM4_O_S5] = new_object("assets/images/golem.png",
    (sfVector2f) {1250, 550}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM5_O_S5] = new_object("assets/images/golem.png",
    (sfVector2f) {1000, 730}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM6_O_S5] = new_object("assets/images/golem.png",
    (sfVector2f) {880, 620}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM7_O_S5] = new_object("assets/images/golem.png",
    (sfVector2f) {600, 750}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM8_O_S5] = new_object("assets/images/golem.png",
    (sfVector2f) {1500, 450}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM9_O_S5] = new_object("assets/images/golem.png",
    (sfVector2f) {1470, 620}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM10_O_S5] = new_object("assets/images/golem.png",
    (sfVector2f) {580, 580}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[QUEST_O_S5] = new_object("assets/images/quest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 848, 584}, -1);
}

void fill_scene_camp3(game_scene_t camp)
{
    camp.objs[OPTION_O_S5] = new_object("assets/images/option.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    camp.objs[INVENTORY_O_S5] = new_object("assets/images/inventory.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    camp.objs[EXIT_O_S5] = new_object("assets/images/exit.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    camp.objs[ME_O_S5] = new_object("assets/images/me.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    camp.objs[CAMP_O_S5] = new_object("assets/images/map_camp.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    camp.objs[MINIMAP_O_S5] = new_object("assets/images/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, -1);
    camp.objs[GOLEM1_O_S5] = new_object("assets/images/golem.png",
    (sfVector2f) {550, 450}, (sfIntRect) {0, 0, 16, 32}, 2);
    fill_scene_camp3_1(camp);
    fill_scene_camp4(camp);
}
