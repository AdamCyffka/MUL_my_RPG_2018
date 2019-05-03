/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** npc_interaction
*/

#include "rpg.h"
#include "enum.h"
#include "struct.h"
#include "define.h"

void quest_action(game_t *game)
{
    if (game->quests[game->stats->current_quest].current_dial >
    game->quests[game->stats->current_quest].nb_of_dial)
        game->quests[game->stats->current_quest].state = Q_VALIDATED;
}

void quest_speak(game_t *game)
{
    if (game->quests[game->stats->current_quest].current_dial >
    game->quests[game->stats->current_quest].nb_of_dial) {
        game->quests[game->stats->current_quest].progress++;
        game->quests[game->stats->current_quest].state = Q_VALIDATED;
    }
}

void quest_validation(game_t *game)
{
    if (game->stats->current_quest == INTRO_Q || game->stats->current_quest ==
    BLACKSMITH_Q || game->stats->current_quest == EMILY_Q ||
    game->stats->current_quest == ROBIN_Q || game->stats->current_quest ==
    PIERRE_Q || game->stats->current_quest == GEORGE_Q ||
    game->stats->current_quest == JODI_Q)
        quest_speak(game);
    else
        quest_action(game);
}

void player_is_interacting(game_scene_t *scenes, game_stat_t *stats,
game_setting_t *settings, game_quest_t *quests)
{
    if (stats->current_quest == SHEEP_COUNT_Q && quests[SHEEP_COUNT_Q].progress == 0) {
        if (enter_quest_answer(scenes[TOWN].texts[QUEST_ANS_T_S1], settings) == 1) {
            quests[SHEEP_COUNT_Q].progress = quests[SHEEP_COUNT_Q].nb_of_task;
            quests[SHEEP_COUNT_Q].current_dial++;
            return;
        }
        quests[SHEEP_COUNT_Q].dialogs_text[0].state = (quests[SHEEP_COUNT_Q].dialogs_text[0].state == 0) ? -1 : 0;
        scenes[TOWN].objs[PANNEL_O_S1].speed = (scenes[TOWN].objs[PANNEL_O_S1].speed == 1) ? -1 : 1;
        return;
    }

    if ((quests[stats->current_quest].state == Q_ACCEPTED ||
    (quests[stats->current_quest].state == Q_IN_PROGRESS &&
    quests[stats->current_quest].progress ==
    quests[stats->current_quest].nb_of_task)) &&
    quests[stats->current_quest].current_dial <=
    quests[stats->current_quest].nb_of_dial) {
        if (quests[stats->current_quest].current_dial != 0)
            quests[stats->current_quest].dialogs_text
            [quests[stats->current_quest].current_dial - 1].state = -1;
        quests[stats->current_quest].dialogs_text
        [quests[stats->current_quest].current_dial].state = 0;
        scenes[settings->current].objs[PANNEL_O_S1].speed = 1;
        quests[stats->current_quest].current_dial++;
        if (quests[stats->current_quest].current_dial >
        quests[stats->current_quest].nb_of_dial)
            scenes[settings->current].objs[PANNEL_O_S1].speed = -1;
    }
}

void change_quest_if_validated(game_stat_t *stats, game_quest_t *quests)
{
    if (quests[stats->current_quest].state == Q_VALIDATED &&
    quests[stats->current_quest].progress ==
    quests[stats->current_quest].nb_of_task) {
        quests[stats->current_quest].state = Q_FINISHED;
        stats->current_quest += (stats->current_quest != BOSS_Q) ? 1 : 0;
        if (stats->current_quest != BOSS_Q)
            quests[stats->current_quest].state = Q_ACCEPTED;
    }
}

void change_quest_objective(game_stat_t *stats, game_quest_t *quests)
{
    if (quests[stats->current_quest].state == Q_ACCEPTED &&
    (stats->current_quest == GOLEMS_Q || stats->current_quest ==
    FIND_LOST_Q || stats->current_quest == GHOSTS_Q ||
    stats->current_quest == SHEEP_COUNT_Q || stats->current_quest ==
    SKELETONS_Q || stats->current_quest == BOSS_Q))
        quests[stats->current_quest].state = Q_IN_PROGRESS;
}

bool check_player_in_npc_zone(game_stat_t *stats, game_scene_t town,
game_quest_t *quests)
{
    if (COLLISION_ZONE)
        return true;
    return false;
}

void npc_interaction(game_t *game)
{
    bool player_in_zone = check_player_in_npc_zone(game->stats,
    game->scenes[TOWN], game->quests);

    printf("current quest: %i, quest state: %i, quest progress: %i/%i\n", game->stats->current_quest, game->quests[game->stats->current_quest].state, game->quests[game->stats->current_quest].progress, game->quests[game->stats->current_quest].nb_of_task);
    pick_up_item(game);
    if (player_in_zone == false)
        return;
    change_quest_objective(game->stats, game->quests);
    if (sfRenderWindow_pollEvent(game->settings->window,
    &game->settings->event)) {
        analyse_events(game);
        if (game->settings->event.type == sfEvtKeyPressed &&
        game->settings->event.key.code == sfKeyE)
            player_is_interacting(game->scenes, game->stats, game->settings,
            game->quests);
    }
    quest_validation(game);
    give_rewards_if_validated(game->scenes[TOWN], game->stats, game->quests, 
    game->inventory);
    change_quest_if_validated(game->stats, game->quests);
}
