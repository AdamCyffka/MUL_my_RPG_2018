/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene me
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_me(game_scene_t me_menu)
{
    me_menu.objs[ME_O_S4] = new_object("assets/me.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, 0);
    me_menu.objs[CURSOR_O_S4] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    me_menu.buttons[CLOSE_B_S4] = new_button("assets/close.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30});
    me_menu.sounds[CLICK_S_S4] = new_sound("assets/click.ogg", sfFalse, 100);
    me_menu.texts[NAME_T_S4] = new_text("assets/font.ttf", "Name",
    (sfVector2f) {425, 45}, 16);
    me_menu.texts[XP_T_S4] = new_text("assets/font.ttf", "XP:",
    (sfVector2f) {425, 45}, 16);
    me_menu.texts[POS_T_S4] = new_text("assets/font.ttf", "Position:",
    (sfVector2f) {425, 45}, 16);
    me_menu.texts[LIFE_T_S4] = new_text("assets/font.ttf", "Life:",
    (sfVector2f) {425, 45}, 16);
}