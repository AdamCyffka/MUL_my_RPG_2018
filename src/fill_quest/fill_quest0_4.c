/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** fill_quest0_4
*/

#include "rpg.h"
#include "define.h"
#include "enum.h"
#include "struct.h"
#include "fill_quest.h"

void fill_quest4(game_quest_t *quest4)
{
    quest4->dialogs_text[0] = new_text("assets/font/font.ttf", Q4_DIAL0,
    (sfVector2f) {420, 800}, 26);
    quest4->npc_zone = ZONE4_B_S1;
}

void fill_quest3(game_quest_t *quest3)
{
    quest3->dialogs_text[0] = new_text("assets/font/font.ttf", Q3_DIAL0,
    (sfVector2f) {420, 800}, 26);
    quest3->rewards[0] = GOLEMHEAD_R;
    quest3->rewards[1] = XP50_R;
    quest3->npc_zone = ZONE6_B_S1;
}

void fill_quest2(game_quest_t *quest2)
{
    quest2->dialogs_text[0] = new_text("assets/font/font.ttf", Q2_DIAL0,
    (sfVector2f) {420, 800}, 26);
    quest2->dialogs_text[1] = new_text("assets/font/font.ttf", Q2_DIAL1,
    (sfVector2f) {420, 800}, 26);
    quest2->npc_zone = ZONE6_B_S1;
}

void fill_quest1(game_quest_t *quest1)
{
    quest1->dialogs_text[0] = new_text("assets/font/font.ttf", Q1_DIAL0,
    (sfVector2f) {420, 800}, 26);
    quest1->dialogs_text[1] = new_text("assets/font/font.ttf", Q1_DIAL1,
    (sfVector2f) {420, 800}, 26);
    quest1->rewards[0] = SWORD1_R;
    quest1->npc_zone = ZONE2_B_S1;
}

void fill_quest0(game_quest_t *quest0)
{
    quest0->dialogs_text[0] = new_text("assets/font/font.ttf", Q0_DIAL0,
    (sfVector2f) {420, 800}, 26);
    quest0->dialogs_text[1] = new_text("assets/font/font.ttf", Q0_DIAL1,
    (sfVector2f) {420, 800}, 26);
    quest0->dialogs_text[2] = new_text("assets/font/font.ttf", Q0_DIAL2,
    (sfVector2f) {420, 800}, 26);
    quest0->rewards[0] = MINIMAP_R;
    quest0->rewards[1] = QBOOK_R;
    quest0->npc_zone = ZONESPECIAL_B_S1;
}