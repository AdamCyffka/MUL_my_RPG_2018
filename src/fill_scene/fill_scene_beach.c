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

void fill_scene_beach2(game_scene_t beach)
{
    beach.sounds[MUSIC_S_S4] = new_sound("assets/sounds/music_beach.ogg",
    sfFalse, 100);
    beach.sounds[CLICK_S_S4] = new_sound("assets/sounds/click.ogg",
    sfFalse, 100);
    beach.sounds[WALK_S_S4] = new_sound("assets/sounds/walk_beach.ogg",
    sfFalse, 100);
    beach.sounds[SWORD_S_S4] = new_sound("assets/sounds/swoosh.ogg",
    sfFalse, 100);
    beach.texts[VOLUME_T_S4] = new_text("assets/font/font.ttf", "Volume:",
    (sfVector2f) {425, 45}, 16);
    beach.texts[VOLUME_T_S4] = new_text("assets/font/font.ttf", "Volume:",
    (sfVector2f) {700, 400}, 40);
    beach.texts[VSYNC_T_S4] = new_text("assets/font/font.ttf", "V-sync:",
    (sfVector2f) {700, 500}, 40);
    beach.texts[FRAME_T_S4] = new_text("assets/font/font.ttf", "Framerate:",
    (sfVector2f) {640, 580}, 40);
    beach.texts[NAME_T_S4] = new_text("assets/font/font.ttf", "Name:",
    (sfVector2f) {700, 400}, 40);
    beach.texts[XP_T_S4] = new_text("assets/font/font.ttf", "XP:",
    (sfVector2f) {700, 450}, 40);
    beach.texts[LIFE_T_S4] = new_text("assets/font/font.ttf", "Life:",
    (sfVector2f) {1730, 926}, 40);
    beach.objs[OPTION_O_S4] = new_object("assets/images/option.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    fill_scene_beach3(beach);
}

void fill_scene_beach1(game_scene_t beach)
{
    beach.buttons[TITLE_B_S4] = new_button("assets/images/exit_menu.png",
    (sfVector2f) {800, 470}, (sfIntRect) {0, 0, 280, 96}, -1);
    beach.buttons[DESKTOP_B_S4] = new_button("assets/images/exit_desktop.png",
    (sfVector2f) {770, 330}, (sfIntRect) {0, 0, 336, 96}, -1);
    beach.buttons[CLOSE_B_S4] = new_button("assets/images/close.png",
    (sfVector2f) {1400, 200}, (sfIntRect) {0, 0, 30, 30}, -1);
    beach.buttons[V0_B_S4] = new_button("assets/images/0.png",
    (sfVector2f) {850, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    beach.buttons[V25_B_S4] = new_button("assets/images/25.png",
    (sfVector2f) {910, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    beach.buttons[V50_B_S4] = new_button("assets/images/50.png",
    (sfVector2f) {970, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    beach.buttons[V100_B_S4] = new_button("assets/images/100.png",
    (sfVector2f) {1030, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    beach.buttons[ON_B_S4] = new_button("assets/images/on.png",
    (sfVector2f) {850, 515}, (sfIntRect) {0, 0, 75, 25}, -1);
    beach.buttons[OFF_B_S4] = new_button("assets/images/off.png",
    (sfVector2f) {955, 515}, (sfIntRect) {0, 0, 75, 25}, -1);
    beach.buttons[F30_B_S4] = new_button("assets/images/30.png",
    (sfVector2f) {850, 600}, (sfIntRect) {0, 0, 75, 25}, -1);
    beach.buttons[F60_B_S4] = new_button("assets/images/60.png",
    (sfVector2f) {955, 600}, (sfIntRect) {0, 0, 75, 25}, -1);
    beach.buttons[WALKABLE1_B_S4] = new_button("assets/images/invisible.png",
    (sfVector2f) {1100, 0}, (sfIntRect) {0, 0, 98 * 1.6, 159 * 1.6}, 0);
    beach.buttons[WALKABLE2_B_S4] = new_button("assets/images/invisible.png",
    (sfVector2f) {190, 159 * 1.6}, (sfIntRect) {0, 0, 731 * 1.6, 452 * 1.6}, 0);
    beach.buttons[WALKABLE3_B_S4] = new_button("assets/images/invisible.png",
    (sfVector2f) {1300, 529}, (sfIntRect) {0, 0, 317 * 1.6, 250 * 1.6}, 0);
    beach.buttons[INVENTORY_B_S4] = new_button("assets/images/invisible.png",
    (sfVector2f) {570, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    beach.buttons[ME_B_S4] = new_button("assets/images/invisible.png",
    (sfVector2f) {635, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    beach.buttons[OPTION_B_S4] = new_button("assets/images/invisible.png",
    (sfVector2f) {698, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    beach.buttons[EXIT_B_S4] = new_button("assets/images/invisible.png",
    (sfVector2f) {765, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    fill_scene_beach2(beach);
}
