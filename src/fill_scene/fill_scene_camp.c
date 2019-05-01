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
    camp.objs[LIFE_O_S5] = new_object("assets/images/life.png",
    (sfVector2f) {1700, 910}, (sfIntRect) {0, 0, 209, 85}, 0);
    camp.objs[ICON_O_S5] = new_object("assets/images/icon.png",
    (sfVector2f) {10, 910}, (sfIntRect) {0, 0, 100, 100}, 0);
    camp.objs[CURSOR_O_S5] = new_object("assets/images/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
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
    fill_scene_camp4(camp);
}

void fill_scene_camp2(game_scene_t camp)
{
    camp.buttons[WALKABLE4_B_S5] = new_button("assets/images/invisible.png",
    (sfVector2f) {450, 380}, (sfIntRect) {0, 0, 588, 131}, 0);
    camp.buttons[WALKABLE5_B_S5] = new_button("assets/images/invisible.png",
    (sfVector2f) {1200, 380}, (sfIntRect) {0, 0, 584, 150}, 0);
    camp.buttons[INVENTORY_B_S5] = new_button("assets/images/invisible.png",
    (sfVector2f) {570, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    camp.buttons[ME_B_S5] = new_button("assets/images/invisible.png",
    (sfVector2f) {635, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    camp.buttons[OPTION_B_S5] = new_button("assets/images/invisible.png",
    (sfVector2f) {698, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    camp.buttons[EXIT_B_S5] = new_button("assets/images/invisible.png",
    (sfVector2f) {765, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    camp.sounds[MUSIC_S_S5] = new_sound("assets/sounds/music_camp.ogg", sfFalse,
    100);
    camp.sounds[CLICK_S_S5] = new_sound("assets/sounds/click.ogg", sfFalse, 100);
    camp.sounds[WALK_S_S5] = new_sound("assets/sounds/walk_forest.ogg", sfFalse, 100);
    camp.sounds[SWORD_S_S5] = new_sound("assets/sounds/swoosh.ogg", sfFalse, 100);
    camp.texts[VOLUME_T_S5] = new_text("assets/font/font.ttf", "Volume:",
    (sfVector2f) {700, 400}, 40);
    camp.texts[VSYNC_T_S5] = new_text("assets/font/font.ttf", "V-sync:",
    (sfVector2f) {700, 500}, 40);
    camp.texts[FRAME_T_S5] = new_text("assets/font/font.ttf", "Framerate:",
    (sfVector2f) {640, 580}, 40);
    camp.texts[NAME_T_S5] = new_text("assets/font/font.ttf", "Name:",
    (sfVector2f) {700, 400}, 40);
    camp.texts[XP_T_S5] = new_text("assets/font/font.ttf", "XP:",
    (sfVector2f) {700, 450}, 40);
    camp.texts[LIFE_T_S5] = new_text("assets/font/font.ttf", "Life:",
    (sfVector2f) {1730, 926}, 40);
    fill_scene_camp3(camp);
}

void fill_scene_camp1(game_scene_t camp)
{
    camp.buttons[TITLE_B_S5] = new_button("assets/images/exit_menu.png",
    (sfVector2f) {800, 470}, (sfIntRect) {0, 0, 280, 96}, -1);
    camp.buttons[DESKTOP_B_S5] = new_button("assets/images/exit_desktop.png",
    (sfVector2f) {770, 330}, (sfIntRect) {0, 0, 336, 96}, -1);
    camp.buttons[CLOSE_B_S5] = new_button("assets/images/close.png",
    (sfVector2f) {1400, 200}, (sfIntRect) {0, 0, 30, 30}, -1);
    camp.buttons[V0_B_S5] = new_button("assets/images/0.png",
    (sfVector2f) {850, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    camp.buttons[V25_B_S5] = new_button("assets/images/25.png",
    (sfVector2f) {910, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    camp.buttons[V50_B_S5] = new_button("assets/images/50.png",
    (sfVector2f) {970, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    camp.buttons[V100_B_S5] = new_button("assets/images/100.png",
    (sfVector2f) {1030, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    camp.buttons[ON_B_S5] = new_button("assets/images/on.png",
    (sfVector2f) {850, 515}, (sfIntRect) {0, 0, 75, 25}, -1);
    camp.buttons[OFF_B_S5] = new_button("assets/images/off.png",
    (sfVector2f) {955, 515}, (sfIntRect) {0, 0, 75, 25}, -1);
    camp.buttons[F30_B_S5] = new_button("assets/images/30.png",
    (sfVector2f) {850, 600}, (sfIntRect) {0, 0, 75, 25}, -1);
    camp.buttons[F60_B_S5] = new_button("assets/images/60.png",
    (sfVector2f) {955, 600}, (sfIntRect) {0, 0, 75, 25}, -1);
    camp.buttons[WALKABLE1_B_S5] = new_button("assets/images/invisible.png",
    (sfVector2f) {0, 800}, (sfIntRect) {0, 0, 1700, 146}, 0);
    camp.buttons[WALKABLE2_B_S5] = new_button("assets/images/invisible.png",
    (sfVector2f) {290, 500}, (sfIntRect) {0, 0, 1630, 300}, 0);
    camp.buttons[WALKABLE3_B_S5] = new_button("assets/images/invisible.png",
    (sfVector2f) {840, 910}, (sfIntRect) {0, 0, 860, 102}, 0);
    fill_scene_camp2(camp);
}
