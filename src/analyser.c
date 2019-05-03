/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** events analyser
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void keyboard_checker_scenes(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyI)) {
        button_inventory1(game->inventory, game->scenes, 1, -1);
        game->settings->_paused = true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyM)) {
        button_me1(game->scenes, 1, -1);
        game->settings->_paused = true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyO)) {
        button_option1(game->scenes, 1, -1);
        game->settings->_paused = true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        button_exit1(game->scenes, 1, -1);
        game->settings->_paused = true;
    }
}

void keyboard_checker_maps(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyTab))
        sfRenderWindow_close(game->settings->window);
    if (game->settings->current >= TOWN && game->settings->current <= CAMP)
        keyboard_checker_scenes(game);
}

void analyse_events(game_t *game)
{
    if (game->settings->event.type == sfEvtClosed)
        sfRenderWindow_close(game->settings->window);
    if (game->settings->event.type == sfEvtMouseMoved)
        check_mouse_pos(game);
    if (game->settings->event.type == sfEvtKeyPressed) {
        keyboard_checker_maps(game);
        player_change_map(game->stats, game->quests, game->settings);
    }
    if (game->settings->event.type == sfEvtTextEntered) {
        if (game->settings->current == MAIN_MENU &&
        game->scenes[MAIN_MENU].objs[CHOOSE_O_S0].speed >= 0)
            enter_player_name(game->stats, game->settings);
        if (game->settings->current == TOWN && game->quests[SHEEP_COUNT_Q].state
        == Q_IN_PROGRESS)
            enter_quest_answer(game->scenes[TOWN].texts[QUEST_ANS_T_S1],
            game->settings);
    }
}
