/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene beach 1
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"
#include "fill_scene.h"

void fill_scene_beach5(game_scene_t beach)
{
    beach.objs[SKELETON5_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1500, 800}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON6_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {600, 200}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON7_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1000, 400}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON8_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1000, 400}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON9_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1000, 400}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON10_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {500, 400}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON11_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {550, 700}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON12_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {300, 100}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON13_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1700, 300}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON14_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {400, 700}, (sfIntRect) {0, 0, 16, 32}, 4);
}

void fill_scene_beach4(game_scene_t beach)
{
    beach.objs[SKELETON15_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {800, 800}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON16_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1800, 400}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON17_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {900, 400}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON18_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {200, 400}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON19_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1200, 400}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON20_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1400, 300}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[QUEST_O_S4] = new_object("assets/images/quest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 848, 584}, -1);
    beach.objs[LIFE_O_S4] = new_object("assets/images/life.png",
    (sfVector2f) {1700, 910}, (sfIntRect) {0, 0, 209, 85}, 0);
    beach.objs[ICON_O_S4] = new_object("assets/images/icon.png",
    (sfVector2f) {10, 910}, (sfIntRect) {0, 0, 100, 100}, 0);
    beach.objs[CURSOR_O_S4] = new_object("assets/images/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
}

void fill_scene_beach3(game_scene_t beach)
{
    beach.objs[INVENTORY_O_S4] = new_object("assets/images/inventory.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    beach.objs[EXIT_O_S4] = new_object("assets/images/exit.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    beach.objs[ME_O_S4] = new_object("assets/images/me.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    beach.objs[BEACH_O_S4] = new_object("assets/images/map_beach.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    beach.objs[MINIMAP_O_S4] = new_object("assets/images/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, -1);
    beach.objs[SKELETON1_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1000, 400}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON2_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1290, 350}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON3_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1000, 600}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[SKELETON4_O_S4] = new_object("assets/images/skeleton.png",
    (sfVector2f) {1200, 400}, (sfIntRect) {0, 0, 16, 32}, 4);
    fill_scene_beach4(beach);
    fill_scene_beach5(beach);
}
