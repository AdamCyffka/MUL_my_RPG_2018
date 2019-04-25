/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene main menu
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_main_menu3(game_scene_t main_menu)
{
    main_menu.buttons[NEW_B_S0] = new_button("assets/button_new.png",
    (sfVector2f) {700, 340}, (sfIntRect) {0, 0, 148, 122}, 0);
    main_menu.texts[NAME_T_S0] = new_text("assets/font.ttf", "Name:",
    (sfVector2f) {875, 495}, 40);
    main_menu.sounds[MUSIC_S_S0] = new_sound("assets/music_menu.ogg", sfFalse,
    100);
    main_menu.sounds[CLICK_S_S0] = new_sound("assets/click.ogg", sfFalse, 100);
}

void fill_scene_main_menu2(game_scene_t main_menu)
{
    main_menu.objs[CURSOR_O_S0] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 35}, 0);
    main_menu.buttons[LEFT_B_S0] = new_button("assets/left.png",
    (sfVector2f) {730, 390}, (sfIntRect) {0, 0, 44, 40}, -1);
    main_menu.buttons[RIGHT_B_S0] = new_button("assets/right.png",
    (sfVector2f) {795, 390}, (sfIntRect) {0, 0, 44, 40}, -1);
    main_menu.buttons[OK_B_S0] = new_button("assets/ok.png",
    (sfVector2f) {1210, 615}, (sfIntRect) {0, 0, 79, 84}, -1);
    main_menu.buttons[CLOSE_B_S0] = new_button("assets/close.png",
    (sfVector2f) {1555, 175}, (sfIntRect) {0, 0, 30, 30}, -1);
    main_menu.buttons[CREDITS_B_S0] = new_button("assets/button_credits.png",
    (sfVector2f) {1800, 900}, (sfIntRect) {0, 0, 40, 45}, 0);
    main_menu.buttons[LOAD_B_S0] = new_button("assets/button_load.png",
    (sfVector2f) {900, 340}, (sfIntRect) {0, 0, 148, 122}, 0);
    main_menu.buttons[EXIT_B_S0] = new_button("assets/button_exit.png",
    (sfVector2f) {1100, 340}, (sfIntRect) {0, 0, 148, 122}, 0);
    main_menu.buttons[BACK_B_S0] = new_button("assets/button_back.png",
    (sfVector2f) {655, 635}, (sfIntRect) {0, 0, 118, 54}, -1);
    fill_scene_main_menu3(main_menu);
}

void fill_scene_main_menu1(game_scene_t main_menu)
{
    main_menu.objs[BG_O_S0] = new_object("assets/menu_bg.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    main_menu.objs[BG1_O_S0] = new_object("assets/menu_bg1.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    main_menu.objs[CLOUD1_O_S0] = new_object("assets/cloud1.png",
    (sfVector2f) {20, 80}, (sfIntRect) {0, 0, 512, 341}, 1);
    main_menu.objs[CLOUD2_O_S0] = new_object("assets/cloud2.png",
    (sfVector2f) {1350, 120}, (sfIntRect) {0, 0, 133, 64}, 3);
    main_menu.objs[CLOUD3_O_S0] = new_object("assets/cloud2.png",
    (sfVector2f) {1750, 200}, (sfIntRect) {0, 0, 133, 64}, 2);
    main_menu.objs[FLAMINGO1_O_S0] = new_object("assets/flamingo1.png",
    (sfVector2f) {1940, 700}, (sfIntRect) {0, 0, 105, 104}, 5);
    main_menu.objs[FLAMINGO2_O_S0] = new_object("assets/flamingo2.png",
    (sfVector2f) {2050, 800}, (sfIntRect) {0, 0, 52, 52}, 5);
    main_menu.objs[LOGO_O_S0] = new_object("assets/logo.png",
    (sfVector2f) {560, 50}, (sfIntRect) {0, 0, 1003, 485}, 0);
    main_menu.objs[HTW_O_S0] = new_object("assets/howtoplay.png",
    (sfVector2f) {320, 150}, (sfIntRect) {0, 0, 1289, 708}, -1);
    main_menu.objs[CHOOSE_O_S0] = new_object("assets/choose.png",
    (sfVector2f) {625, 350}, (sfIntRect) {0, 0, 696, 375}, -1);
    fill_scene_main_menu2(main_menu);
}
