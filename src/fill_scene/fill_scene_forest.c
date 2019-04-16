/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene forest
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_forest4(game_scene_t forest)
{
    forest.objs[ME_O_S3] = new_object("assets/me.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, -1);
    forest.objs[FOREST_O_S3] = new_object("assets/map_forest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    forest.objs[MINIMAP_O_S3] = new_object("assets/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, -1);
    forest.objs[GHOST_O_S3] = new_object("assets/ghost.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    forest.objs[QUEST_O_S3] = new_object("assets/quest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 848, 584}, -1);
    forest.objs[ICON_O_S3] = new_object("assets/icon.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 56, 56}, 0);
    forest.objs[CURSOR_O_S3] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 10, 10}, 0);
}

void fill_scene_forest3(game_scene_t forest)
{
    forest.texts[VOLUME_T_S3] = new_text("assets/font.ttf", "Volume:",
    (sfVector2f) {425, 45}, 16);
    forest.texts[NAME_T_S3] = new_text("assets/font.ttf", "Name:",
    (sfVector2f) {425, 45}, 16);
    forest.texts[VSYNC_T_S3] = new_text("assets/font.ttf", "V-sync:",
    (sfVector2f) {425, 45}, 16);
    forest.texts[XP_T_S3] = new_text("assets/font.ttf", "XP:",
    (sfVector2f) {425, 45}, 16);
    forest.texts[POS_T_S3] = new_text("assets/font.ttf", "Position:",
    (sfVector2f) {425, 45}, 16);
    forest.texts[LIFE_T_S3] = new_text("assets/font.ttf", "Life:",
    (sfVector2f) {425, 45}, 16);
    forest.objs[OPTION_O_S3] = new_object("assets/option.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, -1);
    forest.objs[INVENTORY_O_S3] = new_object("assets/inventory.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, -1);
    forest.objs[EXIT_O_S3] = new_object("assets/exit.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, -1);
    fill_scene_forest4(forest);
}

void fill_scene_forest2(game_scene_t forest)
{
    forest.buttons[WALKABLE4_B_S3] = new_button("assets/invisible.png",
    (sfVector2f) {400, 400}, (sfIntRect) {0, 0, 900, 211}, 0);
    forest.buttons[WALKABLE5_B_S3] = new_button("assets/invisible.png",
    (sfVector2f) {700, 200}, (sfIntRect) {0, 0, 487, 308}, 0);
    forest.buttons[WALKABLE6_B_S3] = new_button("assets/invisible.png",
    (sfVector2f) {1200, 520}, (sfIntRect) {0, 0, 620, 120}, 0);
    forest.buttons[WALKABLE7_B_S3] = new_button("assets/invisible.png",
    (sfVector2f) {1100, 570}, (sfIntRect) {0, 0, 218, 139}, 0);
    forest.buttons[WALKABLE8_B_S3] = new_button("assets/invisible.png",
    (sfVector2f) {1500, 380}, (sfIntRect) {0, 0, 170, 141}, 0);
    forest.buttons[WALKABLE9_B_S3] = new_button("assets/invisible.png",
    (sfVector2f) {1300, 390}, (sfIntRect) {0, 0, 330, 50}, 0);
    forest.buttons[WALKABLE10_B_S3] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 328, 197}, 0);
    forest.buttons[WALKABLE11_B_S3] = new_button("assets/invisible.png",
    (sfVector2f) {1480, 250}, (sfIntRect) {0, 0, 230, 147}, 0);
    forest.sounds[MUSIC_S_S3] = new_sound("assets/music_forest.ogg", sfFalse,
    100);
    forest.sounds[CLICK_S_S3] = new_sound("assets/click.ogg", sfFalse, 100);
    forest.sounds[WALK_S_S3] = new_sound("assets/walk_forest.ogg", sfFalse,
        100);
    forest.sounds[SWORD_S_S3] = new_sound("assets/swoosh.ogg", sfFalse, 100);
    fill_scene_forest3(forest);
}

void fill_scene_forest1(game_scene_t forest)
{
    forest.buttons[EXIT_B_S3] = new_button("assets/exit_menu.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 280, 96}, 0);
    forest.buttons[DESKTOP_B_S3] = new_button("assets/exit_desktop.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 336, 96}, 0);
    forest.buttons[CLOSE_B_S3] = new_button("assets/close.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
    forest.buttons[PLUS_B_S3] = new_button("assets/plus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, 0);
    forest.buttons[MINUS_B_S3] = new_button("assets/minus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, 0);
    forest.buttons[MUTE_B_S3] = new_button("assets/mute.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 48, 48}, 0);
    forest.buttons[WALKABLE1_B_S3] = new_button("assets/invisible.png",
    (sfVector2f) {0, 500}, (sfIntRect) {0, 0, 341, 124}, 0);
    forest.buttons[WALKABLE2_B_S3] = new_button("assets/invisible.png",
    (sfVector2f) {100, 200}, (sfIntRect) {0, 0, 241, 307}, 0);
    forest.buttons[WALKABLE3_B_S3] = new_button("assets/invisible.png",
    (sfVector2f) {260, 220}, (sfIntRect) {0, 0, 307, 192}, 0);
    fill_scene_forest2(forest);
}
