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
    beach.objs[INVENTORY_O_S4] = new_object("assets/inventory.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    beach.objs[EXIT_O_S4] = new_object("assets/exit.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    beach.objs[ME_O_S4] = new_object("assets/me.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    beach.objs[BEACH_O_S4] = new_object("assets/map_beach.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    beach.objs[MINIMAP_O_S4] = new_object("assets/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, -1);
    beach.objs[SKELETON_O_S4] = new_object("assets/skeleton.png",
    (sfVector2f) {1000, 400}, (sfIntRect) {0, 0, 16, 32}, 4);
    beach.objs[QUEST_O_S4] = new_object("assets/quest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 848, 584}, -1);
    beach.objs[ICON_O_S4] = new_object("assets/icon.png",
    (sfVector2f) {10, 910}, (sfIntRect) {0, 0, 100, 100}, 0);
    beach.objs[CURSOR_O_S4] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 40}, 0);
}

void fill_scene_beach2(game_scene_t beach)
{
    beach.sounds[MUSIC_S_S4] = new_sound("assets/music_beach.ogg", sfFalse,
    100);
    beach.sounds[CLICK_S_S4] = new_sound("assets/click.ogg", sfFalse, 100);
    beach.sounds[WALK_S_S4] = new_sound("assets/walk_beach.ogg", sfFalse, 100);
    beach.sounds[SWORD_S_S4] = new_sound("assets/swoosh.ogg", sfFalse, 100);
    beach.texts[VOLUME_T_S4] = new_text("assets/font.ttf", "Volume:",
    (sfVector2f) {425, 45}, 16);
    beach.texts[NAME_T_S4] = new_text("assets/font.ttf", "Name:",
    (sfVector2f) {425, 45}, 16);
    beach.texts[VSYNC_T_S4] = new_text("assets/font.ttf", "V-sync:",
    (sfVector2f) {425, 45}, 16);
    beach.texts[XP_T_S4] = new_text("assets/font.ttf", "XP:",
    (sfVector2f) {425, 45}, 16);
    beach.texts[POS_T_S4] = new_text("assets/font.ttf", "Position:",
    (sfVector2f) {425, 45}, 16);
    beach.texts[LIFE_T_S4] = new_text("assets/font.ttf", "Life:",
    (sfVector2f) {425, 45}, 16);
    beach.objs[OPTION_O_S4] = new_object("assets/option.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    fill_scene_beach3(beach);
}

void fill_scene_beach1(game_scene_t beach)
{
    beach.buttons[TITLE_B_S4] = new_button("assets/exit_menu.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 280, 96}, -1);
    beach.buttons[DESKTOP_B_S4] = new_button("assets/exit_desktop.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 336, 96}, -1);
    beach.buttons[CLOSE_B_S4] = new_button("assets/close.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, -1);
    beach.buttons[PLUS_B_S4] = new_button("assets/plus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, -1);
    beach.buttons[MINUS_B_S4] = new_button("assets/minus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, -1);
    beach.buttons[MUTE_B_S4] = new_button("assets/mute.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 48, 48}, -1);
    beach.buttons[WALKABLE1_B_S4] = new_button("assets/invisible.png",
    (sfVector2f) {1100, 0}, (sfIntRect) {0, 0, 98 * 1.6, 159 * 1.6}, 0);
    beach.buttons[WALKABLE2_B_S4] = new_button("assets/invisible.png",
    (sfVector2f) {190, 159 * 1.6}, (sfIntRect) {0, 0, 731 * 1.6, 452 * 1.6}, 0);
    beach.buttons[WALKABLE3_B_S4] = new_button("assets/invisible.png",
    (sfVector2f) {1300, 529}, (sfIntRect) {0, 0, 317 * 1.6, 250 * 1.6}, 0);
    beach.buttons[INVENTORY_B_S4] = new_button("assets/invisible.png",
    (sfVector2f) {570, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    beach.buttons[ME_B_S4] = new_button("assets/invisible.png",
    (sfVector2f) {635, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    beach.buttons[OPTION_B_S4] = new_button("assets/invisible.png",
    (sfVector2f) {698, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    beach.buttons[EXIT_B_S4] = new_button("assets/invisible.png",
    (sfVector2f) {765, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    fill_scene_beach2(beach);
}
