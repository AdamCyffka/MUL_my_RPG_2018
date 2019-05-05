/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** All function to manage button main_menu
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void button_menu5(game_setting_t *settings, game_scene_t scenes)
{
    int fd_player = 0;

    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[LOAD_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[LOAD_B_S0].shape)) == true)
        load_save(fd_player);
    else if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[CLOSE_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[CLOSE_B_S0].shape)) == true)
        disp_button_menu(scenes, 0, -1);
}

void button_menu4(game_setting_t *settings, game_scene_t scenes,
game_stat_t *stats)
{
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[OK_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[OK_B_S0].shape)) == true) {
        disp_button_back(scenes, 1, -1);
        sfSprite_setPosition(stats->player.sprite, (sfVector2f) {300, 500});
        sfSprite_setTextureRect(stats->player.sprite,
        (sfIntRect) {0, 32, 16, 32});
        stats->name_t.position = (sfVector2f) {895, 410};
        sfText_setPosition(stats->name_t.text, stats->name_t.position);
        stats->name_t.state = -1;
        stats->player.speed = 5;
        settings->current = TOWN;
    }
    button_menu5(settings, scenes);
}

void button_menu3(game_setting_t *settings, game_scene_t scenes,
game_stat_t *stats)
{
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[NEW_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[NEW_B_S0].shape)) == true) {
        disp_new_options(scenes, 1, -1);
        stats->name_t.position = (sfVector2f) {1000, 505};
        sfText_setPosition(stats->name_t.text, stats->name_t.position);
        stats->name_t.state = 0;
    }
    if (scenes.texts[NAME_T_S0].state == 1)
        stats->player.speed = 5;
    else
        stats->player.speed = -1;
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[BACK_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[BACK_B_S0].shape)) == true) {
        disp_button_back(scenes, 1, -1);
        stats->xp_t.state = -1;
        stats->name_t.state = -1;
    }
    button_menu4(settings, scenes, stats);
}

void button_menu2(game_setting_t *settings, game_scene_t scenes,
game_stat_t *stats)
{
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[RIGHT_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[RIGHT_B_S0].shape)) == true) {
        disp_button_back(scenes, 1, -1);
        stats->sex = 1;
        stats->player = new_object("assets/images/boy1.png",
        (sfVector2f) {750, 450}, (sfIntRect) {0, 0, 16, 32}, 5);
        sfSprite_setScale(stats->player.sprite, (sfVector2f) {4, 4});
    }
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[CREDITS_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[CREDITS_B_S0].shape)) == true)
        disp_button_menu(scenes, 1, -1);
    button_menu3(settings, scenes, stats);
}
void button_menu(game_setting_t *settings, game_scene_t scenes,
game_stat_t *stats)
{
    if (scenes.buttons[NEW_B_S0].state >= 0 &&
    scenes.buttons[EXIT_B_S0].state >= 0 &&
    scenes.buttons[LOAD_B_S0].state >= 0) {
        men_game_button(settings, scenes, NEW_B_S0);
        men_game_button(settings, scenes, EXIT_B_S0);
        men_game_button(settings, scenes, LOAD_B_S0);
    }
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[LEFT_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[LEFT_B_S0].shape)) == true) {
        disp_button_back(scenes, 1, -1);
        stats->sex = 0;
        stats->player = new_object("assets/images/girl1.png",
        (sfVector2f) {750, 450}, (sfIntRect) {0, 0, 16, 32}, 5);
        sfSprite_setScale(stats->player.sprite, (sfVector2f) {4, 4});
    }
    button_menu2(settings, scenes, stats);
}
