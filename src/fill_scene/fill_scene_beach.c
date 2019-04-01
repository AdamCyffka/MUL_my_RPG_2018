/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene beach
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_beach3(game_scene_t beach)
{
    beach.buttons[EXIT_B_S4] = new_button("assets/exit_menu.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 280, 96}, 0);
    beach.buttons[DESKTOP_B_S4] = new_button("assets/exit_desktop.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 336, 96}, 0);
    beach.buttons[CLOSE_B_S4] = new_button("assets/close.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
    beach.buttons[PLUS_B_S4] = new_button("assets/plus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, 0);
    beach.buttons[MINUS_B_S4] = new_button("assets/minus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, 0);
    beach.sounds[MUSIC_S_S4] = new_sound("assets/music_beach.ogg", sfFalse,
    100);
    beach.sounds[CLICK_S_S4] = new_sound("assets/click.ogg", sfFalse, 100);
    beach.sounds[WALK_S_S4] = new_sound("assets/walk_sand.ogg", sfFalse, 100);
    beach.sounds[SWORD_S_S4] = new_sound("assets/swoosh.ogg", sfFalse, 100);
    beach.texts[VOLUME_T_S4] = new_text("assets/font.ttf", "Volume:",
    (sfVector2f) {425, 45}, 16);
    beach.texts[NAME_T_S4] = new_text("assets/font.ttf", "Name:",
    (sfVector2f) {425, 45}, 16);
    fill_scene_beach2(beach);
}

void fill_scene_beach2(game_scene_t beach)
{
    beach.texts[VSYNC_T_S4] = new_text("assets/font.ttf", "V-sync:",
    (sfVector2f) {425, 45}, 16);
    beach.texts[XP_T_S4] = new_text("assets/font.ttf", "XP:",
    (sfVector2f) {425, 45}, 16);
    beach.texts[POS_T_S4] = new_text("assets/font.ttf", "Position:",
    (sfVector2f) {425, 45}, 16);
    beach.texts[LIFE_T_S4] = new_text("assets/font.ttf", "Life:",
    (sfVector2f) {425, 45}, 16);
    beach.objs[OPTION_O_S4] = new_object("assets/option.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, 0);
    beach.objs[INVENTORY_O_S4] = new_object("assets/inventory.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, 0);
    beach.objs[EXIT_O_S4] = new_object("assets/exit.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, 0);
    beach.objs[ME_O_S4] = new_object("assets/me.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, 0);
    beach.objs[BEACH_O_S4] = new_object("assets/map_beach.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1217, 538}, 0);
    beach.objs[MINIMAP_O_S4] = new_object("assets/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, 0);
    fill_scene_beach1(beach);
}

void fill_scene_beach1(game_scene_t beach)
{
    beach.objs[SKELETON_O_S4] = new_object("assets/skeleton.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    beach.objs[QUEST_O_S4] = new_object("assets/quest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    beach.objs[ICON_O_S4] = new_object("assets/icon.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    beach.objs[CURSOR_O_S4] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 10, 10}, 0);
}