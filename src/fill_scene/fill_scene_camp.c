/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene camp
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_camp4(game_scene_t camp)
{
    camp.objs[ICON_O_S5] = new_object("assets/icon.png",
    (sfVector2f) {10, 910}, (sfIntRect) {0, 0, 100, 100}, 0);
    camp.objs[CURSOR_O_S5] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 40}, 0);
}

void fill_scene_camp3(game_scene_t camp)
{
    camp.texts[LIFE_T_S5] = new_text("assets/font.ttf", "Life:",
    (sfVector2f) {425, 45}, 16);
    camp.objs[OPTION_O_S5] = new_object("assets/option.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    camp.objs[INVENTORY_O_S5] = new_object("assets/inventory.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    camp.objs[EXIT_O_S5] = new_object("assets/exit.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    camp.objs[ME_O_S5] = new_object("assets/me.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    camp.objs[CAMP_O_S5] = new_object("assets/map_camp.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    camp.objs[MINIMAP_O_S5] = new_object("assets/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, -1);
    camp.objs[GOLEM1_O_S5] = new_object("assets/golem.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM2_O_S5] = new_object("assets/golem.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM3_O_S5] = new_object("assets/golem.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM4_O_S5] = new_object("assets/golem.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM5_O_S5] = new_object("assets/golem.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM6_O_S5] = new_object("assets/golem.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM7_O_S5] = new_object("assets/golem.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM8_O_S5] = new_object("assets/golem.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM9_O_S5] = new_object("assets/golem.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[GOLEM10_O_S5] = new_object("assets/golem.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 16, 32}, 2);
    camp.objs[QUEST_O_S5] = new_object("assets/quest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 848, 584}, -1);
    fill_scene_camp4(camp);
}

void fill_scene_camp2(game_scene_t camp)
{
    camp.buttons[WALKABLE4_B_S5] = new_button("assets/invisible.png",
    (sfVector2f) {450, 380}, (sfIntRect) {0, 0, 588, 131}, 0);
    camp.buttons[WALKABLE5_B_S5] = new_button("assets/invisible.png",
    (sfVector2f) {1200, 380}, (sfIntRect) {0, 0, 584, 150}, 0);
    camp.buttons[INVENTORY_B_S5] = new_button("assets/invisible.png",
    (sfVector2f) {570, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    camp.buttons[ME_B_S5] = new_button("assets/invisible.png",
    (sfVector2f) {635, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    camp.buttons[OPTION_B_S5] = new_button("assets/invisible.png",
    (sfVector2f) {698, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    camp.buttons[EXIT_B_S5] = new_button("assets/invisible.png",
    (sfVector2f) {765, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    camp.sounds[MUSIC_S_S5] = new_sound("assets/music_camp.ogg", sfFalse,
    100);
    camp.sounds[CLICK_S_S5] = new_sound("assets/click.ogg", sfFalse, 100);
    camp.sounds[WALK_S_S5] = new_sound("assets/walk_forest.ogg", sfFalse, 100);
    camp.sounds[SWORD_S_S5] = new_sound("assets/swoosh.ogg", sfFalse, 100);
    camp.texts[VOLUME_T_S5] = new_text("assets/font.ttf", "Volume:",
    (sfVector2f) {425, 45}, 16);
    camp.texts[NAME_T_S5] = new_text("assets/font.ttf", "Name:",
    (sfVector2f) {425, 45}, 16);
    camp.texts[VSYNC_T_S5] = new_text("assets/font.ttf", "V-sync:",
    (sfVector2f) {425, 45}, 16);
    camp.texts[XP_T_S5] = new_text("assets/font.ttf", "XP:",
    (sfVector2f) {425, 45}, 16);
    camp.texts[POS_T_S5] = new_text("assets/font.ttf", "Position:",
    (sfVector2f) {425, 45}, 16);
    fill_scene_camp3(camp);
}

void fill_scene_camp1(game_scene_t camp)
{
    camp.buttons[TITLE_B_S5] = new_button("assets/exit_menu.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 280, 96}, -1);
    camp.buttons[DESKTOP_B_S5] = new_button("assets/exit_desktop.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 336, 96}, -1);
    camp.buttons[CLOSE_B_S5] = new_button("assets/close.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, -1);
    camp.buttons[PLUS_B_S5] = new_button("assets/plus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, -1);
    camp.buttons[MINUS_B_S5] = new_button("assets/minus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, -1);
    camp.buttons[MUTE_B_S5] = new_button("assets/mute.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 48, 48}, -1);
    camp.buttons[WALKABLE1_B_S5] = new_button("assets/invisible.png",
    (sfVector2f) {0, 800}, (sfIntRect) {0, 0, 1700, 146}, 0);
    camp.buttons[WALKABLE2_B_S5] = new_button("assets/invisible.png",
    (sfVector2f) {290, 500}, (sfIntRect) {0, 0, 1630, 300}, 0);
    camp.buttons[WALKABLE3_B_S5] = new_button("assets/invisible.png",
    (sfVector2f) {840, 910}, (sfIntRect) {0, 0, 860, 102}, 0);
    fill_scene_camp2(camp);
}
