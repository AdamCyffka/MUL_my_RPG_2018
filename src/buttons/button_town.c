/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** button_town
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void buttons_town_action(game_setting_t *settings, game_scene_t scenes)
{
    if (button_is_clicked(settings, scenes.buttons[DESKTOP_B_S1].position,
    (sfVector2f) {scenes.buttons[DESKTOP_B_S1].rect.width,
    scenes.buttons[DESKTOP_B_S1].rect.height}) == true)
        sfRenderWindow_close(settings->window);
    if (button_is_clicked(settings, scenes.buttons[TITLE_B_S1].position,
    (sfVector2f) {scenes.buttons[TITLE_B_S1].rect.width,
    scenes.buttons[TITLE_B_S1].rect.height}) == true) {
        button_town_close(scenes, 1, -1);
        settings->current = MAIN_MENU;
    }
}

void button_town2(game_setting_t *settings, game_scene_t scenes)
{
    if (button_is_clicked(settings, scenes.buttons[OPTION_B_S1].position,
    (sfVector2f) {scenes.buttons[OPTION_B_S1].rect.width,
    scenes.buttons[OPTION_B_S1].rect.height}) == true)
        button_town_option(scenes, 1, -1);
    if (button_is_clicked(settings, scenes.buttons[EXIT_B_S1].position,
    (sfVector2f) {scenes.buttons[EXIT_B_S1].rect.width,
    scenes.buttons[EXIT_B_S1].rect.height}) == true)
        button_town_exit(scenes, 1, -1);
    else if (button_is_clicked(settings, scenes.buttons[CLOSE_B_S1].position,
    (sfVector2f) {scenes.buttons[CLOSE_B_S1].rect.width,
    scenes.buttons[CLOSE_B_S1].rect.height}) == true)
        button_town_close(scenes, 1, -1);
}

void button_town(game_setting_t *settings, game_scene_t scenes)
{
    if (scenes.buttons[DESKTOP_B_S1].state >= 0
    || scenes.buttons[TITLE_B_S1].state >= 0)
        buttons_town_action(settings, scenes);
    if (button_is_clicked(settings, scenes.buttons[INVENTORY_B_S1].position,
    (sfVector2f) {scenes.buttons[INVENTORY_B_S1].rect.width,
    scenes.buttons[INVENTORY_B_S1].rect.height}) == true)
        button_town_inventory(scenes, 1, -1);
    if (button_is_clicked(settings, scenes.buttons[ME_B_S1].position,
    (sfVector2f) {scenes.buttons[ME_B_S1].rect.width,
    scenes.buttons[ME_B_S1].rect.height}) == true)
        button_town_me(scenes, 1, -1);
    button_town2(settings, scenes);
}