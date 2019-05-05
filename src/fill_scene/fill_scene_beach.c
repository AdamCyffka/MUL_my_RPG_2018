/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene beach
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"
#include "fill_scene.h"

void fill_scene_beach2_1(game_scene_t beach)
{
    beach.buttons[SAVE_B_S4] = new_button("assets/images/exit_save.png",
    (sfVector2f) {800, 600}, (sfIntRect) {0, 0, 280, 96}, -1);
    beach.texts[VSYNC_T_S4] = new_text("assets/font/font.ttf", "V-sync:",
    (sfVector2f) {700, 500}, 40);
    beach.texts[FRAME_T_S4] = new_text("assets/font/font.ttf", "Framerate:",
    (sfVector2f) {640, 580}, 40);
    beach.texts[NAME_T_S4] = new_text("assets/font/font.ttf", "Name:",
    (sfVector2f) {700, 400}, 40);
    beach.texts[XP_T_S4] = new_text("assets/font/font.ttf", "XP:",
    (sfVector2f) {700, 450}, 40);
    beach.objs[OPTION_O_S4] = new_object("assets/images/option.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
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
    fill_scene_beach2_1(beach);
    fill_scene_beach3(beach);
}

void fill_scene_beach1_2(game_scene_t beach)
{
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
}

void fill_scene_beach1_1(game_scene_t beach)
{
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
}

void fill_scene_beach1(game_scene_t beach)
{
    beach.buttons[TITLE_B_S4] = new_button("assets/images/exit_menu.png",
    (sfVector2f) {800, 470}, (sfIntRect) {0, 0, 280, 96}, -1);
    beach.buttons[DESKTOP_B_S4] = new_button("assets/images/exit_desktop.png",
    (sfVector2f) {770, 330}, (sfIntRect) {0, 0, 336, 96}, -1);
    fill_scene_beach1_1(beach);
    fill_scene_beach1_2(beach);
    fill_scene_beach2(beach);
}
