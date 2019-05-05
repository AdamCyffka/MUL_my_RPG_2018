/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene forest
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"
#include "fill_scene.h"

void fill_scene_forest3(game_scene_t forest)
{
    forest.buttons[SAVE_B_S3] = new_button("assets/images/exit_save.png",
    (sfVector2f) {800, 600}, (sfIntRect) {0, 0, 280, 96}, -1);
    forest.texts[VOLUME_T_S3] = new_text("assets/font/font.ttf", "Volume:",
    (sfVector2f) {700, 400}, 40);
    forest.texts[VSYNC_T_S3] = new_text("assets/font/font.ttf", "V-sync:",
    (sfVector2f) {700, 500}, 40);
    forest.texts[FRAME_T_S3] = new_text("assets/font/font.ttf", "Framerate:",
    (sfVector2f) {640, 580}, 40);
    forest.texts[NAME_T_S3] = new_text("assets/font/font.ttf", "Name:",
    (sfVector2f) {700, 400}, 40);
    forest.texts[XP_T_S3] = new_text("assets/font/font.ttf", "XP:",
    (sfVector2f) {700, 450}, 40);
    forest.objs[OPTION_O_S3] = new_object("assets/images/option.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    forest.objs[INVENTORY_O_S3] = new_object("assets/images/inventory.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    forest.objs[EXIT_O_S3] = new_object("assets/images/exit.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    fill_scene_forest4(forest);
}

void fill_scene_forest2_1(game_scene_t forest)
{
    forest.buttons[WALKABLE11_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {1480 * 1.5, 250 * 1.5},
    (sfIntRect) {0, 0, 230 * 1.5, 147 * 1.5}, 0);
    forest.buttons[INVENTORY_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {570, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    forest.buttons[ME_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {635, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    forest.buttons[OPTION_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {698, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    forest.buttons[EXIT_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {765, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    forest.sounds[MUSIC_S_S3] = new_sound("assets/sounds/music_forest.ogg",
    sfFalse, 100, sfTrue);
    forest.sounds[CLICK_S_S3] = new_sound("assets/sounds/click.ogg",
    sfFalse, 100, sfFalse);
    forest.sounds[WALK_S_S3] = new_sound("assets/sounds/walk_forest.ogg",
    sfFalse, 100, sfFalse);
    forest.sounds[SWORD_S_S3] = new_sound("assets/sounds/swoosh.ogg",
    sfFalse, 100, sfFalse);
}

void fill_scene_forest2(game_scene_t forest)
{
    forest.buttons[WALKABLE4_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {400 * 1.5, 400 * 1.5},
    (sfIntRect) {0, 0, 900 * 1.5, 211 * 1.5}, 0);
    forest.buttons[WALKABLE6_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {1200 * 1.5, 520 * 1.5},
    (sfIntRect) {0, 0, 620 * 1.5, 120 * 1.5}, 0);
    forest.buttons[WALKABLE7_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {1100 * 1.5, 570 * 1.5},
    (sfIntRect) {0, 0, 218 * 1.5, 139 * 1.5}, 0);
    forest.buttons[WALKABLE8_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {1500 * 1.5, 380 * 1.5},
    (sfIntRect) {0, 0, 170 * 1.5, 141 * 1.5}, 0);
    forest.buttons[WALKABLE9_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {1300 * 1.5, 390 * 1.5},
    (sfIntRect) {0, 0, 330 * 1.5, 50 * 1.5}, 0);
    forest.buttons[WALKABLE10_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {800 * 1.5, 205 * 1.5},
    (sfIntRect) {0, 0, 328 * 1.5, 197 * 1.5}, 0);
    fill_scene_forest2_1(forest);
    fill_scene_forest3(forest);
}

void fill_scene_forest1_1(game_scene_t forest)
{
    forest.buttons[V100_B_S3] = new_button("assets/images/100.png",
    (sfVector2f) {1030, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    forest.buttons[ON_B_S3] = new_button("assets/images/on.png",
    (sfVector2f) {850, 515}, (sfIntRect) {0, 0, 75, 25}, -1);
    forest.buttons[OFF_B_S3] = new_button("assets/images/off.png",
    (sfVector2f) {955, 515}, (sfIntRect) {0, 0, 75, 25}, -1);
    forest.buttons[F30_B_S3] = new_button("assets/images/30.png",
    (sfVector2f) {850, 600}, (sfIntRect) {0, 0, 75, 25}, -1);
    forest.buttons[F60_B_S3] = new_button("assets/images/60.png",
    (sfVector2f) {955, 600}, (sfIntRect) {0, 0, 75, 25}, -1);
    forest.buttons[WALKABLE1_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {0, 500 * 1.5}, (sfIntRect) {0, 0, 341 * 1.5, 124 * 1.5}, 0);
    forest.buttons[WALKABLE2_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {100 * 1.5, 200 * 1.5},
    (sfIntRect) {0, 0, 241 * 1.5, 307 * 1.5}, 0);
    forest.buttons[WALKABLE3_B_S3] = new_button("assets/images/invisible.png",
    (sfVector2f) {260 * 1.5, 220 * 1.5},
    (sfIntRect) {0, 0, 307 * 1.5, 192 * 1.5}, 0);
}

void fill_scene_forest1(game_scene_t forest)
{
    forest.buttons[TITLE_B_S3] = new_button("assets/images/exit_menu.png",
    (sfVector2f) {800, 470}, (sfIntRect) {0, 0, 280, 96}, -1);
    forest.buttons[DESKTOP_B_S3] = new_button("assets/images/exit_desktop.png",
    (sfVector2f) {770, 330}, (sfIntRect) {0, 0, 336, 96}, -1);
    forest.buttons[CLOSE_B_S3] = new_button("assets/images/close.png",
    (sfVector2f) {1400, 200}, (sfIntRect) {0, 0, 30, 30}, -1);
    forest.buttons[V0_B_S3] = new_button("assets/images/0.png",
    (sfVector2f) {850, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    forest.buttons[V25_B_S3] = new_button("assets/images/25.png",
    (sfVector2f) {910, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    forest.buttons[V50_B_S3] = new_button("assets/images/50.png",
    (sfVector2f) {970, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    fill_scene_forest1_1(forest);
    fill_scene_forest2(forest);
}
