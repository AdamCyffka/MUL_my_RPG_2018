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

void change_quest_if_validated(game_stat_t *stats, game_quest_t *quests)
{
    if (quests[stats->current_quest].state == Q_VALIDATED &&
    quests[stats->current_quest].progress ==
    quests[stats->current_quest].nb_of_task) {
        quests[stats->current_quest].state = Q_FINISHED;
        stats->current_quest += (stats->current_quest != BOSS_Q) ? 1 : 0;
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
    give_rewards_if_validated(game->stats, game->quests,
    game->inventory);
    change_quest_if_validated(game->stats, game->quests);
}