/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene exit
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_exit(game_scene_t exit_menu)
{
    exit_menu.objs[CURSOR_O_S3] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 10, 10}, 0);
    exit_menu.objs[EXIT_B_S3] = new_object("assets/exit.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, 0);
    exit_menu.buttons[CLOSE_B_S3] = new_button("assets/close.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30});
    exit_menu.buttons[DESKTOP_B_S3] = new_button("assets/exit_desktop.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 336, 96});
    exit_menu.buttons[MENU_O_S3] = new_button("assets/exit_menu.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 280, 96});
    exit_menu.sounds[CLICK_S_S3] = new_sound("assets/click.ogg", sfFalse, 100);
}