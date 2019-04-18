/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** npc_interaction
*/

#include "rpg.h"
#include "enum.h"
#include "struct.h"

bool check_player_speaking_npc(game_stat_t *stats, game_scene_t town,
game_quest_t *quests)
{
    if (stats->player.position.x);
}

void change_quest_if_validated(game_stat_t *stats, game_quest_t *quests)
{
    if (quests[stats->current_quest].state == Q_VALIDATED &&
    quests[stats->current_quest].progress ==
    quests[stats->current_quest].nb_of_task) {
        stats->current_quest += (stats->current_quest != BOSS_Q) ? 1 : 0;
        quests[stats->current_quest].state = Q_FINISHED;
        if (stats->current_quest != BOSS_Q)
            quests[stats->current_quest + 1].state = Q_ACCEPTED;
    }
}

void npc_interaction(game_t *game)
{
    bool player_is_speaking = check_player_speaking_npc(game->stats,
    game->scenes[town], game->quests);

    //give_rewards_if_validated(game->stats, game->quests, game->inventory);
    change_quest_if_validated(game->stats, game->quests);
}