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

void draw_quest(game_quest_t *quests, game_setting_t *settings)
{
    for (int tmp = INTRO_Q; tmp <= BOSS_Q; tmp++) {
        for (int tmp2 = 0; tmp2 < quests[tmp].nb_of_dial; tmp2++)
            if (quests[tmp].dialogs_text[tmp2].state == 0)
                sfRenderWindow_drawText(settings->window,
                quests[tmp].dialogs_text[tmp2].text, NULL);
    }
}