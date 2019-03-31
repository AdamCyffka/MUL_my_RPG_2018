/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene forest
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_forest3(game_scene_t forest)
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
    forest.sounds[MUSIC_S_S3] = new_sound("assets/music_forest.ogg", sfFalse,
    100);
    forest.sounds[CLICK_S_S3] = new_sound("assets/click.ogg", sfFalse, 100);
    forest.sounds[WALK_S_S3] = new_sound("assets/walk_grass.ogg", sfFalse, 100);
    forest.sounds[SWORD_S_S3] = new_sound("assets/swoosh.ogg", sfFalse, 100);
    forest.texts[VOLUME_T_S3] = new_text("assets/font.ttf", "Volume:",
    (sfVector2f) {425, 45}, 16);
    forest.texts[NAME_T_S3] = new_text("assets/font.ttf", "Name:",
    (sfVector2f) {425, 45}, 16);
}

void fill_scene_forest2(game_scene_t forest)
{
    forest.texts[VSYNC_T_S3] = new_text("assets/font.ttf", "V-sync:",
    (sfVector2f) {425, 45}, 16);
    forest.texts[XP_T_S3] = new_text("assets/font.ttf", "XP:",
    (sfVector2f) {425, 45}, 16);
    forest.texts[POS_T_S3] = new_text("assets/font.ttf", "Position:",
    (sfVector2f) {425, 45}, 16);
    forest.texts[LIFE_T_S3] = new_text("assets/font.ttf", "Life:",
    (sfVector2f) {425, 45}, 16);
    forest.objs[OPTION_O_S3] = new_object("assets/option.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, 0);
    forest.objs[INVENTORY_O_S3] = new_object("assets/inventory.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, 0);
    forest.objs[EXIT_O_S3] = new_object("assets/exit.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, 0);
    forest.objs[ME_O_S3] = new_object("assets/me.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, 0);
    forest.objs[FOREST_O_S3] = new_object("assets/forest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 2878, 1536}, 0);
    forest.objs[MINIMAP_O_S3] = new_object("assets/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, 0);
}

void fill_scene_forest1(game_scene_t forest)
{
    forest.objs[GHOST_O_S3] = new_object("assets/ghost.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    forest.objs[QUEST_O_S3] = new_object("assets/quest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    forest.objs[ICON_O_S3] = new_object("assets/option.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    forest.objs[CURSOR_O_S3] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 10, 10}, 0);
}