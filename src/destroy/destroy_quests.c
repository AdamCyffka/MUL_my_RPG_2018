/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** destroy_quests
*/

#include "rpg.h"
#include "enum.h"

void destroy_quests_dialogs(game_text_t *texts, int nb)
{
    for (int tmp = 0; tmp < nb; tmp++) {
        sfFont_destroy(texts[tmp].font);
        sfText_destroy(texts[tmp].text);
    }
}

void destroy_quests(game_quest_t *quests)
{
    for (int tmp = 0; tmp <= BOSS_Q; tmp++) {
        free(quests[tmp].rewards);
        sfFont_destroy(quests[tmp].statement_text.font);
        sfText_destroy(quests[tmp].statement_text.text);
        destroy_quests_dialogs(quests[tmp].dialogs_text,
        quests[tmp].nb_of_dial);
        free(quests[tmp].dialogs_text);
    }
    free(quests);
}