/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** button_vic_def
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void button_victory(game_setting_t *settings, game_scene_t *scenes,
game_stat_t *stats)
{
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes[VICTORY]
    .buttons[EXIT_B_S6].shape), sfRectangleShape_getSize(scenes[VICTORY]
    .buttons[EXIT_B_S6].shape)) == true) {
        stats->life_t.state = -1;
        stats->xp_t.state = -1;
        stats->name_t.state = -1;
        settings->_paused = false;
        settings->current = MAIN_MENU;
        change_view_main_menu(settings);
    }
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes[VICTORY]
    .buttons[DESKTOP_B_S6].shape), sfRectangleShape_getSize(scenes[VICTORY]
    .buttons[DESKTOP_B_S6].shape)) == true)
        sfRenderWindow_close(settings->window);
}

void button_defeat(game_setting_t *settings, game_scene_t *scenes,
game_stat_t *stats)
{
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes[DEFEAT]
    .buttons[EXIT_B_S7].shape), sfRectangleShape_getSize(scenes[DEFEAT]
    .buttons[EXIT_B_S7].shape)) == true) {
        stats->life_t.state = -1;
        stats->xp_t.state = -1;
        stats->name_t.state = -1;
        settings->_paused = false;
        settings->current = MAIN_MENU;
        change_view_main_menu(settings);
    }
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes[DEFEAT]
    .buttons[DESKTOP_B_S7].shape), sfRectangleShape_getSize(scenes[DEFEAT]
    .buttons[DESKTOP_B_S7].shape)) == true)
        sfRenderWindow_close(settings->window);
}