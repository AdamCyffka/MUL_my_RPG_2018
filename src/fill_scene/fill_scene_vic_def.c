/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene victory and defeat
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_victory(game_scene_t victory)
{
    victory.buttons[EXIT_B_S6] = new_button("assets/images/exit_menu.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 280, 96}, 0);
    victory.buttons[DESKTOP_B_S4] = new_button("assets/images/exit_desktop.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 336, 96}, 0);
    victory.objs[LOGO_O_S6] = new_object("assets/images/logo.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 266, 104}, 0);
    victory.objs[BG_O_S6] = new_object("assets/images/menu_bg.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    victory.objs[CURSOR_O_S6] = new_object("assets/images/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
    victory.texts[VICTORY_T_S6] = new_text("assets/font/font.ttf",
    "GREAT, YOU WIN", (sfVector2f) {425, 45}, 16);
    victory.sounds[SOUND_S_S6] = new_sound("assets/sounds/victory.ogg", sfFalse,
    100);
}

void fill_scene_defeat(game_scene_t defeat)
{
    defeat.buttons[EXIT_B_S7] = new_button("assets/images/exit_menu.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 280, 96}, 0);
    defeat.buttons[DESKTOP_B_S7] = new_button("assets/images/exit_desktop.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 336, 96}, 0);
    defeat.objs[LOGO_O_S7] = new_object("assets/images/logo.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 266, 104}, 0);
    defeat.objs[BG_O_S7] = new_object("assets/images/menu_bg.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    defeat.objs[CURSOR_O_S7] = new_object("assets/images/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
    defeat.texts[DEFEAT_T_S7] = new_text("assets/font/font.ttf", "YOU LOOSE",
    (sfVector2f) {425, 45}, 16);
    defeat.sounds[SOUND_S_S7] = new_sound("assets/sounds/defeat.ogg", sfFalse,
    100);
}
