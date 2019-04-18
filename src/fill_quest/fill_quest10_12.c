/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** fill_quest10_12
*/

#include "rpg.h"
#include "define.h"
#include "enum.h"
#include "struct.h"

void fill_quest12(game_quest_t quest12)
{
    quest12.dialogs_text[0] = new_text("assets/font.ttf", Q12_DIAL0,
    (sfVector2f) {420, 800}, 26);
    quest12.dialogs_text[1] = new_text("assets/font.ttf", Q12_DIAL1,
    (sfVector2f) {420, 800}, 26);
    quest12.dialogs_text[2] = new_text("assets/font.ttf", Q12_DIAL2,
    (sfVector2f) {420, 800}, 26);
    quest12.rewards[0] = XPMAX_R;
    quest12.npc = DICK_O_S1;
}

void fill_quest11(game_quest_t quest11)
{
    quest11.dialogs_text[0] = new_text("assets/font.ttf", Q11_DIAL0,
    (sfVector2f) {420, 800}, 26);
    quest11.rewards[0] = DAMAGE_R;
    quest11.rewards[1] = XP500_R;
    quest11.npc = JODI_O_S1;
}

void fill_quest10(game_quest_t quest10)
{
    quest10.dialogs_text[0] = new_text("assets/font.ttf", Q10_DIAL0,
    (sfVector2f) {420, 800}, 26);
    quest10.dialogs_text[1] = new_text("assets/font.ttf", Q10_DIAL1,
    (sfVector2f) {420, 800}, 26);
    quest10.npc = JODI_O_S1;
}