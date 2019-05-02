/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** button_ui_ig
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void buttons_action_exit(game_setting_t *settings, game_scene_t *scenes)
{
    if (button_is_clicked(settings, scenes->buttons[DESKTOP_B_S1].position,
    (sfVector2f) {scenes->buttons[DESKTOP_B_S1].rect.width,
    scenes->buttons[DESKTOP_B_S1].rect.height}) == true)
        sfRenderWindow_close(settings->window);
    if (button_is_clicked(settings, scenes->buttons[TITLE_B_S1].position,
    (sfVector2f) {scenes->buttons[TITLE_B_S1].rect.width,
    scenes->buttons[TITLE_B_S1].rect.height}) == true) {
        button_close1(scenes, 1, -1);
        settings->_paused = false;
        settings->current = MAIN_MENU;
        change_view_main_menu(settings);
    }
}
/*
void buttons_action_option(game_setting_t *settings, game_scene_t *scenes)
{
    if (button_is_clicked(settings, scenes->buttons[V0_B_S1].position,
    (sfVector2f) {scenes->buttons[V0_B_S1].rect.width,
    scenes->buttons[V0_B_S1].rect.height}) == true)
        printf("0");
    if (button_is_clicked(settings, scenes->buttons[V25_B_S1].position,
    (sfVector2f) {scenes->buttons[V25_B_S1].rect.width,
    scenes->buttons[V25_B_S1].rect.height}) == true)
        printf("25");
    if (button_is_clicked(settings, scenes->buttons[V50_B_S1].position,
    (sfVector2f) {scenes->buttons[V50_B_S1].rect.width,
    scenes->buttons[V50_B_S1].rect.height}) == true)
        printf("50");
    if (button_is_clicked(settings, scenes->buttons[V100_B_S1].position,
    (sfVector2f) {scenes->buttons[V100_B_S1].rect.width,
    scenes->buttons[V100_B_S1].rect.height}) == true)
        printf("100");
    if (button_is_clicked(settings, scenes->buttons[ON_B_S1].position,
    (sfVector2f) {scenes->buttons[ON_B_S1].rect.width,
    scenes->buttons[ON_B_S1].rect.height}) == true)
        printf("on");
    if (button_is_clicked(settings, scenes->buttons[OFF_B_S1].position,
    (sfVector2f) {scenes->buttons[OFF_B_S1].rect.width,
    scenes->buttons[OFF_B_S1].rect.height}) == true)
        printf("off");
    if (button_is_clicked(settings, scenes->buttons[F30_B_S1].position,
    (sfVector2f) {scenes->buttons[F30_B_S1].rect.width,
    scenes->buttons[F30_B_S1].rect.height}) == true)
        printf("frame30");
    if (button_is_clicked(settings, scenes->buttons[F60_B_S1].position,
    (sfVector2f) {scenes->buttons[F60_B_S1].rect.width,
    scenes->buttons[F60_B_S1].rect.height}) == true)
        printf("frame60");
}*/

void all_button2(game_setting_t *settings, game_scene_t *scenes)
{
    if (button_is_clicked(settings, scenes->buttons[OPTION_B_S1].position,
    (sfVector2f) {scenes->buttons[OPTION_B_S1].rect.width,
    scenes->buttons[OPTION_B_S1].rect.height}) == true)
        button_option1(scenes, 1, -1);
    if (button_is_clicked(settings, scenes->buttons[EXIT_B_S1].position,
    (sfVector2f) {scenes->buttons[EXIT_B_S1].rect.width,
    scenes->buttons[EXIT_B_S1].rect.height}) == true)
        button_exit1(scenes, 1, -1);
    else if (button_is_clicked(settings, scenes->buttons[CLOSE_B_S1].position,
    (sfVector2f) {scenes->buttons[CLOSE_B_S1].rect.width,
    scenes->buttons[CLOSE_B_S1].rect.height}) == true) {
        button_close1(scenes, 1, -1);
        settings->_paused = false;
    }
}

void all_button(game_setting_t *settings, game_scene_t *scenes)
{
    if (scenes->buttons[DESKTOP_B_S1].state >= 0
    || scenes->buttons[TITLE_B_S1].state >= 0)
        buttons_action_exit(settings, scenes);
    if (scenes->buttons[V0_B_S1].state >= 0
    || scenes->buttons[V25_B_S1].state >= 0
    || scenes->buttons[V50_B_S1].state >= 0
    || scenes->buttons[V100_B_S1].state >= 0
    || scenes->buttons[ON_B_S1].state >= 0
    || scenes->buttons[OFF_B_S1].state >= 0
    || scenes->buttons[F30_B_S1].state >= 0
    || scenes->buttons[F60_B_S1].state >= 0)
        //buttons_action_option(settings, scenes);
    if (button_is_clicked(settings, scenes->buttons[INVENTORY_B_S1].position,
    (sfVector2f) {scenes->buttons[INVENTORY_B_S1].rect.width,
    scenes->buttons[INVENTORY_B_S1].rect.height}) == true)
        button_inventory1(scenes, 1, -1);
    if (button_is_clicked(settings, scenes->buttons[ME_B_S1].position,
    (sfVector2f) {scenes->buttons[ME_B_S1].rect.width,
    scenes->buttons[ME_B_S1].rect.height}) == true)
        button_me1(scenes, 1, -1);
    all_button2(settings, scenes);
}