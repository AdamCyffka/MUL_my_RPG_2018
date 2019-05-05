/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** button_ui_ig
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void buttons_action_title(game_inventory_t *inventory, game_setting_t *settings,
game_scene_t *scenes, game_stat_t *stats)
{
    if (button_is_clicked(settings, scenes[TOWN].buttons[TITLE_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[TITLE_B_S1].rect.width,
    scenes[TOWN].buttons[TITLE_B_S1].rect.height}) == true) {
        button_close1(inventory, scenes, 1, -1);
        stats->life_t.state = -1;
        stats->xp_t.state = -1;
        stats->name_t.state = -1;
        settings->_paused = false;
        settings->current = MAIN_MENU;
        change_view_main_menu(settings);
    }
}

void buttons_action_exit(game_inventory_t *inventory, game_setting_t *settings,
game_scene_t *scenes, game_stat_t *stats)
{
    save_t *player = 0;

    if (button_is_clicked(settings, scenes[TOWN].buttons[SAVE_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[SAVE_B_S1].rect.width,
    scenes[TOWN].buttons[SAVE_B_S1].rect.height}) == true)
        save_game(player);
    if (button_is_clicked(settings, scenes[TOWN].buttons[DESKTOP_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[DESKTOP_B_S1].rect.width,
    scenes[TOWN].buttons[DESKTOP_B_S1].rect.height}) == true)
        sfRenderWindow_close(settings->window);
    buttons_action_title(inventory, settings, scenes, stats);
}

void buttons_action_volume(game_setting_t *settings, game_scene_t *scenes)
{
    if (button_is_clicked(settings, scenes[TOWN].buttons[V0_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[V0_B_S1].rect.width,
    scenes[TOWN].buttons[V0_B_S1].rect.height}) == true)
        btn_snd_one(scenes, settings);
    if (button_is_clicked(settings, scenes[TOWN].buttons[V25_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[V25_B_S1].rect.width,
    scenes[TOWN].buttons[V25_B_S1].rect.height}) == true)
        btn_snd_two(scenes, settings);
    if (button_is_clicked(settings, scenes[TOWN].buttons[V50_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[V50_B_S1].rect.width,
    scenes[TOWN].buttons[V50_B_S1].rect.height}) == true)
        btn_snd_three(scenes, settings);
    if (button_is_clicked(settings, scenes[TOWN].buttons[V100_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[V100_B_S1].rect.width,
    scenes[TOWN].buttons[V100_B_S1].rect.height}) == true)
        btn_snd_four(scenes, settings);
}

void buttons_action_option(game_setting_t *settings, game_scene_t *scenes)
{
    if (button_is_clicked(settings, scenes[TOWN].buttons[ON_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[ON_B_S1].rect.width,
    scenes[TOWN].buttons[ON_B_S1].rect.height}) == true)
        vsync_on(settings);
    if (button_is_clicked(settings, scenes[TOWN].buttons[OFF_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[OFF_B_S1].rect.width,
    scenes[TOWN].buttons[OFF_B_S1].rect.height}) == true)
        vsync_off(settings);
    if (button_is_clicked(settings, scenes[TOWN].buttons[F30_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[F30_B_S1].rect.width,
    scenes[TOWN].buttons[F30_B_S1].rect.height}) == true)
        frame_to_30(settings);
    if (button_is_clicked(settings, scenes[TOWN].buttons[F60_B_S1].position,
    (sfVector2f) {scenes[TOWN].buttons[F60_B_S1].rect.width,
    scenes[TOWN].buttons[F60_B_S1].rect.height}) == true)
        frame_to_60(settings);
}