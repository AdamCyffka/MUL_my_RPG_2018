/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** fill_quest5_9
*/

#include "rpg.h"
#include "define.h"
#include "enum.h"
#include "struct.h"

void fill_quest9(game_quest_t *quest9)
{
    quest9->dialogs_text[0] = new_text("assets/font.ttf", Q9_DIAL0, (sfVector2f)
    {420, 800}, 26);
    quest9->dialogs_text[1] = new_text("assets/font.ttf", Q9_DIAL1, (sfVector2f)
    {420, 800}, 26);
    quest9->rewards[0] = LIFE_R;
    quest9->rewards[1] = XP50_R;
    quest9->npc_zone = ZONE5_B_S1;
}

void fill_quest8(game_quest_t *quest8)
{
    quest8->dialogs_text[0] = new_text("assets/font.ttf", Q8_DIAL0, (sfVector2f)
    {420, 800}, 26);
    quest8->dialogs_text[1] = new_text("assets/font.ttf", Q8_DIAL1, (sfVector2f)
    {420, 800}, 26);
    quest8->npc_zone = ZONE5_B_S1;
}

void fill_quest7(game_quest_t *quest7)
{
    quest7->dialogs_text[0] = new_text("assets/font.ttf", Q7_DIAL0, (sfVector2f)
    {420, 800}, 26);
    quest7->dialogs_text[1] = new_text("assets/font.ttf", Q7_DIAL1, (sfVector2f)
    {420, 800}, 26);
    quest7->rewards[0] = SWORD2_R;
    quest7->rewards[1] = XP500_R;
    quest7->npc_zone = ZONE3_B_S1;
}

void fill_quest6(game_quest_t *quest6)
{
    quest6->dialogs_text[0] = new_text("assets/font.ttf", Q6_DIAL0, (sfVector2f)
    {420, 800}, 26);
    quest6->dialogs_text[1] = new_text("assets/font.ttf", Q6_DIAL1, (sfVector2f)
    {420, 800}, 26);
    quest6->npc_zone = ZONE3_B_S1;
}

void fill_quest5(game_quest_t *quest5)
{
    quest5->dialogs_text[0] = new_text("assets/font.ttf", Q5_DIAL0, (sfVector2f)
    {420, 800}, 26);
    quest5->dialogs_text[1] = new_text("assets/font.ttf", Q5_DIAL1, (sfVector2f)
    {420, 800}, 26);
    quest5->rewards[0] = XP100_R;
    quest5->npc_zone = ZONE4_B_S1;
}