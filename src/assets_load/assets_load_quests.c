/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** assets_load_quests
*/

#include "rpg.h"
#include "enum.h"

int assets_load_quests_dialogs(game_text_t *texts, int nb)
{
    for (int tmp = 0; tmp < nb; tmp++)
        if (texts[tmp].font == NULL || texts[tmp].text == NULL)
            return 84;
    return 0;
}

int assets_load_quests(game_quest_t *quests)
{
    for (int tmp = 0; tmp <= BOSS_Q; tmp++) {
        if (quests[tmp].statement_text.font == NULL ||
        quests[tmp].statement_text.text == NULL)
            return 84;
        if (assets_load_quests_dialogs(quests[tmp].dialogs_text,
        quests[tmp].nb_of_dial) == 84)
            return 84;
    }
    return 0;
}