/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** draw_quest
*/

#include "rpg.h"
#include "struct.h"
#include "define.h"
#include "enum.h"

void test_quest(game_quest_t *quests)
{
    static int num_quest = 0;
    static int num_dial = 0;
    if (num_dial > quests[num_quest].nb_of_dial - 1) {
        num_dial = 0;
        num_quest++;
    }
    for (int tmp = 0; tmp <= 12; tmp++)
        for (int tmp2 = 0; tmp2 < quests[tmp].nb_of_dial; tmp2++)
            quests[tmp].dialogs_text[tmp2].state = -1; 
    quests[num_quest].dialogs_text[num_dial].state = 0;
    if (num_quest == 12 && num_dial == quests[num_quest].nb_of_dial - 1)
        num_quest = 0;
    else
        num_dial++;
}

void draw_quest(game_quest_t *quests, game_setting_t *settings)
{
    for (int tmp = INTRO_Q; tmp <= SKELETON2_Q; tmp++) {
        for (int tmp2 = 0; tmp2 < quests[tmp].nb_of_dial; tmp2++)
            if (quests[tmp].dialogs_text[tmp2].state == 0)
                sfRenderWindow_drawText(settings->window,
                quests[tmp].dialogs_text[tmp2].text, NULL);
    }
}