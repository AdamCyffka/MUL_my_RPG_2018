/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene option
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_option(game_scene_t option_menu)
{
    option_menu.objs[CLICK_S_S1] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    option_menu.objs[OPTION_O_S1] = new_object("assets/option.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, 0);
    option_menu.buttons[CLOSE_B_S1] = new_button("assets/close.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30});
    option_menu.buttons[PLUS_B_S1] = new_button("assets/plus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    option_menu.buttons[MINUS_B_S1] = new_button("assets/minus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    option_menu.texts[VOLUME_T_S1] = new_text("assets/font.ttf", "Volume",
    (sfVector2f) {425, 45}, 16);
    option_menu.texts[VSYNC_T_S1] = new_text("assets/font.ttf", "V-sync",
    (sfVector2f) {425, 45}, 16);
    option_menu.sounds[CLICK_S_S1] = new_sound("assets/click.ogg", sfFalse,
    100);
}