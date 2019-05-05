/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene boss
*/

#include "struct.h"
#include "enum.h"
#include "rpg.h"
#include "fill_scene.h"

void fill_scene_boss3_1(game_scene_t boss)
{
    boss.buttons[EXIT_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {765, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    boss.sounds[MUSIC_S_S2] = new_sound("assets/sounds/music_boss.ogg",
    sfFalse, 100, sfTrue);
    boss.sounds[CLICK_S_S2] = new_sound("assets/sounds/click.ogg",
    sfFalse, 100, sfFalse);
    boss.sounds[WALK_S_S2] = new_sound("assets/sounds/walk_rock.ogg",
    sfFalse, 100, sfFalse);
    boss.sounds[SWORD_S_S2] = new_sound("assets/sounds/swoosh.ogg",
    sfFalse, 100, sfFalse);
    boss.texts[VOLUME_T_S2] = new_text("assets/font/font.ttf", "Volume:",
    (sfVector2f) {700, 400}, 40);
    boss.texts[VSYNC_T_S2] = new_text("assets/font/font.ttf", "V-sync:",
    (sfVector2f) {700, 500}, 40);
    boss.texts[FRAME_T_S2] = new_text("assets/font/font.ttf", "Framerate:",
    (sfVector2f) {640, 580}, 40);
    boss.texts[NAME_T_S2] = new_text("assets/font/font.ttf", "Name:",
    (sfVector2f) {700, 400}, 40);
    boss.texts[XP_T_S2] = new_text("assets/font/font.ttf", "XP:",
    (sfVector2f) {700, 450}, 40);
}

void fill_scene_boss3(game_scene_t boss)
{
    boss.buttons[WALKABLE13_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {1540, 1750}, (sfIntRect) {0, 0, 164.5, 980}, 0);
    boss.buttons[WALKABLE14_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {542.5, 2572.5}, (sfIntRect) {0, 0, 1004.5, 147}, 0);
    boss.buttons[WALKABLE15_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {1697.5, 2065}, (sfIntRect) {0, 0, 1407, 157.5}, 0);
    boss.buttons[WALKABLE16_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {2975, 2100}, (sfIntRect) {0, 0, 143.5, 1498}, 0);
    boss.buttons[WALKABLE17_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {3115, 2765}, (sfIntRect) {0, 0, 1256.5, 126}, 0);
    boss.buttons[INVENTORY_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {570, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    boss.buttons[ME_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {635, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    boss.buttons[OPTION_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {698, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    fill_scene_boss3_1(boss);
    fill_scene_boss4(boss);
}

void fill_scene_boss2(game_scene_t boss)
{
    boss.buttons[WALKABLE4_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {2660, 315}, (sfIntRect) {0, 0, 171.5, 525}, 0);
    boss.buttons[WALKABLE5_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {2817.5, 490}, (sfIntRect) {0, 0, 1533, 122}, 0);
    boss.buttons[WALKABLE6_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {2555, 1015}, (sfIntRect) {0, 0, 122.5, 217}, 0);
    boss.buttons[WALKABLE7_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {2660, 1120}, (sfIntRect) {0, 0, 651, 108.5}, 0);
    boss.buttons[WALKABLE8_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {2695, 1225}, (sfIntRect) {0, 0, 122.5, 388.5}, 0);
    boss.buttons[WALKABLE9_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {3150, 1190}, (sfIntRect) {0, 0, 707, 549.5}, 0);
    boss.buttons[WALKABLE10_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {3850, 1400}, (sfIntRect) {0, 0, 266, 367.5}, 0);
    boss.buttons[WALKABLE11_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {2614.5, 1575}, (sfIntRect) {0, 0, 469, 322}, 0);
    boss.buttons[WALKABLE12_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {2152.5, 1575}, (sfIntRect) {0, 0, 462, 98}, 0);
    fill_scene_boss3(boss);
}

void fill_scene_boss1_1(game_scene_t boss)
{
    boss.buttons[V100_B_S2] = new_button("assets/images/100.png",
    (sfVector2f) {1030, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    boss.buttons[ON_B_S2] = new_button("assets/images/on.png",
    (sfVector2f) {850, 515}, (sfIntRect) {0, 0, 75, 25}, -1);
    boss.buttons[OFF_B_S2] = new_button("assets/images/off.png",
    (sfVector2f) {955, 515}, (sfIntRect) {0, 0, 75, 25}, -1);
    boss.buttons[F30_B_S2] = new_button("assets/images/30.png",
    (sfVector2f) {850, 600}, (sfIntRect) {0, 0, 75, 25}, -1);
    boss.buttons[F60_B_S2] = new_button("assets/images/60.png",
    (sfVector2f) {955, 600}, (sfIntRect) {0, 0, 75, 25}, -1);
    boss.buttons[WALKABLE1_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {10000, 560}, (sfIntRect) {0, 0, 1585.5, 150.5}, 0);
    boss.buttons[WALKABLE2_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {140000, 70300.5}, (sfIntRect) {0, 0, 1267, 311.5}, 0);
    boss.buttons[WALKABLE3_B_S2] = new_button("assets/images/invisible.png",
    (sfVector2f) {1225, 1015}, (sfIntRect) {0, 0, 927.5, 745.5}, 0);
}

void fill_scene_boss1(game_scene_t boss)
{
    boss.buttons[TITLE_B_S2] = new_button("assets/images/exit_menu.png",
    (sfVector2f) {800, 470}, (sfIntRect) {0, 0, 280, 96}, -1);
    boss.buttons[DESKTOP_B_S2] = new_button("assets/images/exit_desktop.png",
    (sfVector2f) {770, 330}, (sfIntRect) {0, 0, 336, 96}, -1);
    boss.buttons[CLOSE_B_S2] = new_button("assets/images/close.png",
    (sfVector2f) {1400, 200}, (sfIntRect) {0, 0, 30, 30}, -1);
    boss.buttons[V0_B_S2] = new_button("assets/images/0.png",
    (sfVector2f) {850, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    boss.buttons[V25_B_S2] = new_button("assets/images/25.png",
    (sfVector2f) {910, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    boss.buttons[V50_B_S2] = new_button("assets/images/50.png",
    (sfVector2f) {970, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    boss.buttons[SAVE_B_S2] = new_button("assets/images/exit_save.png",
    (sfVector2f) {800, 600}, (sfIntRect) {0, 0, 280, 96}, -1);
    fill_scene_boss1_1(boss);
    fill_scene_boss2(boss);
}
