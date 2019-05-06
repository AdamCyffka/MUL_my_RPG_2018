/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** quest_actionc
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