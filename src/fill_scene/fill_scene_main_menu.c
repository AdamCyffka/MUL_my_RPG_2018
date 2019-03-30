/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene exit
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_main_menu3(game_scene_t main_menu)
{
    main_menu.objs[BG_O_S0] = new_object("assets/menu_bg1.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    main_menu.objs[BG1_O_S0] = new_object("assets/menu_bg2.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    main_menu.objs[BG2_O_S0] = new_object("assets/menu_bg3.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    main_menu.objs[CLOUD1_O_S0] = new_object("assets/cloud1.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 512, 341}, 0);
    main_menu.objs[CLOUD2_O_S0] = new_object("assets/cloud2.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 133, 64}, 0);
    main_menu.objs[FLAMINGO_O_S0] = new_object("assets/flamingo.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 104, 26}, 0);
    main_menu.objs[LOGO_O_S0] = new_object("assets/logo.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 266, 104}, 0);
    main_menu.objs[HTW_O_S0] = new_object("assets/howtoplay.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1289, 708}, 0);
    main_menu.objs[CHOOSE_O_S0] = new_object("assets/choose.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 696, 375}, 0);
    main_menu.objs[CURSOR_O_S0] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 10, 10}, 0);
}

void fill_scene_main_menu2(game_scene_t main_menu)
{
    main_menu.buttons[LEFT_B_S0] = new_button("assets/left.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 44, 40}, 0);
    main_menu.buttons[RIGHT_B_S0] = new_button("assets/right.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 44, 40}, 0);
    main_menu.buttons[OK_B_S0] = new_button("assets/ok.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 79, 84}, 0);
    main_menu.buttons[CLOSE_B_S0] = new_button("assets/close.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
    main_menu.buttons[CREDITS_B_S0] = new_button("assets/button_credits.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 22, 25}, 0);
    main_menu.buttons[LOAD_B_S0] = new_button("assets/button_load.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 226, 61}, 0);
    main_menu.buttons[EXIT_B_S0] = new_button("assets/button_exit.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 226, 61}, 0);
    main_menu.buttons[BACK_B_S0] = new_button("assets/button_back.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 202, 30}, 0);
    main_menu.buttons[NEW_B_S0] = new_button("assets/button_new.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 226, 61}, 0);
    main_menu.texts[NAME_T_S0] = new_text("assets/font.ttf", "Name:",
    (sfVector2f) {0, 0}, 16);
}

void fill_scene_main_menu1(game_scene_t main_menu)
{
    main_menu.sounds[MUSIC_S_S0] = new_sound("assets/music_menu.ogg", sfFalse,
    100);
    main_menu.sounds[CLICK_S_S0] = new_sound("assets/click.ogg", sfFalse, 100);
}