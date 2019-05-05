/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** player_interacting
*/

#include "rpg.h"
#include "enum.h"
#include "struct.h"
#include "define.h"

void player_is_interacting2(game_scene_t *scenes, game_stat_t *stats,
game_setting_t *settings, game_quest_t *quests)
{
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

void player_is_interacting(game_scene_t *scenes, game_stat_t *stats,
game_setting_t *settings, game_quest_t *quests)
{
    if (stats->current_quest == SHEEP_COUNT_Q && quests[SHEEP_COUNT_Q].progress
    == 0) {
        if (enter_quest_answer(scenes[TOWN].texts[QUEST_ANS_T_S1], settings)
        == 1) {
            quests[SHEEP_COUNT_Q].progress = quests[SHEEP_COUNT_Q].nb_of_task;
            quests[SHEEP_COUNT_Q].current_dial++;
            return;
        }
        quests[SHEEP_COUNT_Q].dialogs_text[0].state = (quests[SHEEP_COUNT_Q].
        dialogs_text[0].state == 0) ? -1 : 0;
        scenes[TOWN].objs[PANNEL_O_S1].speed = (scenes[TOWN].objs[PANNEL_O_S1].
        speed == 1) ? -1 : 1;
        return;
    }
    player_is_interacting2(scenes, stats, settings, quests);
}