/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** button_ui_ig
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void buttons_action_exit(game_setting_t *settings, game_scene_t *scenes,
game_stat_t *stats)
{
    if (button_is_clicked(settings, scenes[TOWN].buttons[DESKTOP_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[DESKTOP_B_S1].rect.width,
    scenes[TOWN].buttons[DESKTOP_B_S1].rect.height}) == true)
        sfRenderWindow_close(settings->window);
    if (button_is_clicked(settings, scenes[TOWN].buttons[TITLE_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[TITLE_B_S1].rect.width,
    scenes[TOWN].buttons[TITLE_B_S1].rect.height}) == true) {
        button_close1(scenes, 1, -1);
        stats->life_t.state = -1;
        stats->xp_t.state = -1;
        stats->name_t.state = -1;
        settings->_paused = false;
        settings->current = MAIN_MENU;
        change_view_main_menu(settings);
    }
}
/*
void buttons_action_option(game_setting_t *settings, game_scene_t *scenes)
{
    if (button_is_clicked(settings, scenes[TOWN].buttons[V0_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[V0_B_S1].rect.width,
    scenes[TOWN].buttons[V0_B_S1].rect.height}) == true)
        printf("0");
    if (button_is_clicked(settings, scenes[TOWN].buttons[V25_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[V25_B_S1].rect.width,
    scenes[TOWN].buttons[V25_B_S1].rect.height}) == true)
        printf("25");
    if (button_is_clicked(settings, scenes[TOWN].buttons[V50_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[V50_B_S1].rect.width,
    scenes[TOWN].buttons[V50_B_S1].rect.height}) == true)
        printf("50");
    if (button_is_clicked(settings, scenes[TOWN].buttons[V100_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[V100_B_S1].rect.width,
    scenes[TOWN].buttons[V100_B_S1].rect.height}) == true)
        printf("100");
    if (button_is_clicked(settings, scenes[TOWN].buttons[ON_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[ON_B_S1].rect.width,
    scenes[TOWN].buttons[ON_B_S1].rect.height}) == true)
        printf("on");
    if (button_is_clicked(settings, scenes[TOWN].buttons[OFF_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[OFF_B_S1].rect.width,
    scenes[TOWN].buttons[OFF_B_S1].rect.height}) == true)
        printf("off");
    if (button_is_clicked(settings, scenes[TOWN].buttons[F30_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[F30_B_S1].rect.width,
    scenes[TOWN].buttons[F30_B_S1].rect.height}) == true)
        printf("frame30");
    if (button_is_clicked(settings, scenes[TOWN].buttons[F60_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[F60_B_S1].rect.width,
    scenes[TOWN].buttons[F60_B_S1].rect.height}) == true)
        printf("frame60");
}*/

void all_button2(game_setting_t *settings, game_scene_t *scenes,
game_stat_t *stats)
{
    if (button_is_clicked(settings, scenes[TOWN].buttons[OPTION_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[OPTION_B_S1].rect.width,
    scenes[TOWN].buttons[OPTION_B_S1].rect.height}) == true)
        button_option1(scenes, 1, -1);
    if (button_is_clicked(settings, scenes[TOWN].buttons[EXIT_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[EXIT_B_S1].rect.width,
    scenes[TOWN].buttons[EXIT_B_S1].rect.height}) == true)
        button_exit1(scenes, 1, -1);
    else if (button_is_clicked(settings, scenes[TOWN].buttons[CLOSE_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[CLOSE_B_S1].rect.width,
    scenes[TOWN].buttons[CLOSE_B_S1].rect.height}) == true) {
        button_close1(scenes, 1, -1);
        stats->life_t.state = -1;
        stats->xp_t.state = -1;
        stats->name_t.state = -1;
        settings->_paused = false;
    }
}

void all_button(game_inventory_t *inventory, game_setting_t *settings, game_scene_t *scenes, game_stat_t *stats)
{
    if (scenes[TOWN].buttons[DESKTOP_B_S1].state >= 0
    || scenes[TOWN].buttons[TITLE_B_S1].state >= 0)
        buttons_action_exit(settings, scenes, stats);
    /*if (scenes[TOWN].buttons[V0_B_S1].state >= 0
    || scenes[TOWN].buttons[V25_B_S1].state >= 0
    || scenes[TOWN].buttons[V50_B_S1].state >= 0
    || scenes[TOWN].buttons[V100_B_S1].state >= 0
    || scenes[TOWN].buttons[ON_B_S1].state >= 0
    || scenes[TOWN].buttons[OFF_B_S1].state >= 0
    || scenes[TOWN].buttons[F30_B_S1].state >= 0
    || scenes[TOWN].buttons[F60_B_S1].state >= 0)*/
        //buttons_action_option(settings, scenes);
    if (button_is_clicked(settings, scenes[TOWN].buttons[INVENTORY_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[INVENTORY_B_S1].rect.width,
    scenes[TOWN].buttons[INVENTORY_B_S1].rect.height}) == true)
        button_inventory1(inventory, scenes, 1, -1);
    if (button_is_clicked(settings, scenes[TOWN].buttons[ME_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[ME_B_S1].rect.width,
    scenes[TOWN].buttons[ME_B_S1].rect.height}) == true) {
        button_me1(scenes, 1, -1);
        stats->xp_t.state = 0;
        stats->name_t.state = 0;
    }
    all_button2(settings, scenes, stats);
}