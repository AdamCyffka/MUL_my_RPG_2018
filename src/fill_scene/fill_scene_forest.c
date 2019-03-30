/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene forest
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_forest2(game_scene_t forest)
{
    forest.buttons[EXIT_B_S3] = new_button("assets/exit_menu.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 280, 96}, 0);
    forest.buttons[DESKTOP_B_S3] = new_button("assets/exit_desktop.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 336, 96}, 0);
    forest.buttons[CLOSE_B_S3] = new_button("assets/close.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
    forest.buttons[PLUS_B_S3] = new_button("assets/plus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, 0);
    forest.buttons[MINUS_B_S3] = new_button("assets/minus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, 0);
    forest.sounds[MUSIC_S_S3] = new_sound("assets/music_forest.ogg", sfFalse,
    100);
    forest.sounds[CLICK_S_S3] = new_sound("assets/click.ogg", sfFalse, 100);
    forest.sounds[WALK_S_S3] = new_sound("assets/walk_grass.ogg", sfFalse, 100);
    forest.sounds[SWORD_S_S3] = new_sound("assets/swoosh.ogg", sfFalse, 100);
    forest.texts[VOLUME_T_S3] = new_text("assets/font.ttf", "Volume:",
    (sfVector2f) {425, 45}, 16);
    forest.texts[NAME_T_S3] = new_text("assets/font.ttf", "Name:",
    (sfVector2f) {425, 45}, 16);
}

void fill_scene_forest1(game_scene_t forest)
{
    forest.buttons[EXIT_B_S3] = new_button("assets/exit_menu.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 280, 96}, 0);
    forest.buttons[DESKTOP_B_S3] = new_button("assets/exit_desktop.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 336, 96}, 0);
    forest.buttons[CLOSE_B_S3] = new_button("assets/close.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
    forest.buttons[PLUS_B_S3] = new_button("assets/plus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, 0);
    forest.buttons[MINUS_B_S3] = new_button("assets/minus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, 0);
    forest.sounds[MUSIC_S_S3] = new_sound("assets/music_forest.ogg", sfFalse,
    100);
    forest.sounds[CLICK_S_S3] = new_sound("assets/click.ogg", sfFalse, 100);
    forest.sounds[WALK_S_S3] = new_sound("assets/walk_grass.ogg", sfFalse, 100);
    forest.sounds[SWORD_S_S3] = new_sound("assets/swoosh.ogg", sfFalse, 100);
    forest.texts[VOLUME_T_S3] = new_text("assets/font.ttf", "Volume:",
    (sfVector2f) {425, 45}, 16);
    forest.texts[NAME_T_S3] = new_text("assets/font.ttf", "Name:",
    (sfVector2f) {425, 45}, 16);
}