/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** game_change_global
*/

#include "rpg.h"
#include "enum.h"

void game_change3(game_t *game)
{
    if (game->settings->current == TOWN) {
        particules_move_green(game);
        particules_move_pink(game);
        particules_move_orange(game);
    }
    if (game->settings->_paused == false) {
        player_interaction(game);
        enemies_detect_player(game);
        enemies_detect_hit(game);
        enemies_attack_player(game);
        loop_rect_enemies(game);
    }
    player_rect_move(game->scenes, game->stats, game->settings);
}

void game_change2(game_t *game)
{
    if (game->settings->current == BOSS)
        change_view_boss(game->settings);
    if (game->settings->current == MAIN_MENU)
        change_main_menu(game->settings, game->scenes, game->stats);
    if (game->settings->current >= TOWN && game->settings->current <= CAMP)
        change_maps(game);
    if (game->settings->current >= VICTORY && game->settings->current <= DEFEAT)
        change_vic_def(game);
    clock(game->scenes, game->settings);
    game_change3(game);
}

void game_change(game_t *game)
{
    set_scale(game);
    set_cursor_pos(game->scenes[game->settings->current], game->settings);
    for (int tmp = 0; tmp < game->scenes[game->settings->current].how_many[1];
    tmp++)
        if (game->scenes[game->settings->current].sounds[tmp]._activated ==
        true) {
            set_music(game);
            stop_desactivated_music(game);
        }
    dick_move_to_spawn(game);
    particules_star(game);
    teleport_player_boss(game);
    game_change2(game);
}