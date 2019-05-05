/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** create_quests
*/

#include "rpg.h"
#include "enum.h"
#include "fill_quest.h"

int create_quest4(game_quest_t *quests)
{
    fill_quest9(&(quests[SHEEP_COUNT_Q]));
    quests[JODI_Q] = new_quest(2, Q10_BOOK, 1, 0);
    if (&(quests[JODI_Q]) == (game_quest_t *) {NULL})
        return 84;
    fill_quest10(&(quests[JODI_Q]));
    quests[SKELETONS_Q] = new_quest(1, Q11_BOOK, 20, 1);
    if (&(quests[SKELETONS_Q]) == (game_quest_t *) {NULL})
        return 84;
    fill_quest11(&(quests[SKELETONS_Q]));
    quests[BOSS_Q] = new_quest(3, Q12_BOOK, 1, 1);
    if (&(quests[BOSS_Q]) == (game_quest_t *) {NULL})
        return 84;
    fill_quest12(&(quests[BOSS_Q]));
    return 0;
}

int create_quest3(game_quest_t *quests)
{
    fill_quest6(&(quests[PIERRE_Q]));
    quests[GHOSTS_Q] = new_quest(2, Q7_BOOK, 15, 2);
    if (&(quests[GHOSTS_Q]) == (game_quest_t *) {NULL})
        return 84;
    fill_quest7(&(quests[GHOSTS_Q]));
    quests[GEORGE_Q] = new_quest(2, Q8_BOOK, 1, 0);
    if (&(quests[GEORGE_Q]) == (game_quest_t *) {NULL})
        return 84;
    fill_quest8(&(quests[GEORGE_Q]));
    quests[SHEEP_COUNT_Q] = new_quest(2, Q9_BOOK, 1, 2);
    if (&(quests[SHEEP_COUNT_Q]) == (game_quest_t *) {NULL})
        return 84;
    return (create_quest4(quests));
}

int create_quest2(game_quest_t *quests)
{
    quests[GOLEMS_Q] = new_quest(1, Q3_BOOK, 10, 2);
    if (&(quests[GOLEMS_Q]) == (game_quest_t *) {0})
        return 84;
    fill_quest3(&(quests[GOLEMS_Q]));
    quests[ROBIN_Q] = new_quest(1, Q4_BOOK, 1, 0);
    if (&(quests[ROBIN_Q]) == (game_quest_t *) {0})
        return 84;
    fill_quest4(&(quests[ROBIN_Q]));
    quests[FIND_LOST_Q] = new_quest(2, Q5_BOOK, 1, 2);
    if (&(quests[FIND_LOST_Q]) == (game_quest_t *) {0})
        return 84;
    fill_quest5(&(quests[FIND_LOST_Q]));
    quests[PIERRE_Q] = new_quest(2, Q6_BOOK, 1, 0);
    if (&(quests[PIERRE_Q]) == (game_quest_t *) {NULL})
        return 84;
    return (create_quest3(quests));
}

int create_quests(game_quest_t *quests)
{
    quests[INTRO_Q] = new_quest(3, Q0_BOOK, 1, 2);
    if (&(quests[INTRO_Q]) == (game_quest_t *) {0})
        return 84;
    fill_quest0(&(quests[INTRO_Q]));
    quests[BLACKSMITH_Q] = new_quest(2, Q1_BOOK, 1, 1);
    if (&(quests[BLACKSMITH_Q]) == (game_quest_t *) {0})
        return 84;
    fill_quest1(&(quests[BLACKSMITH_Q]));
    quests[EMILY_Q] = new_quest(2, Q2_BOOK, 1, 0);
    if (&(quests[EMILY_Q]) == (game_quest_t *) {0})
        return 84;
    fill_quest2(&(quests[EMILY_Q]));
    return (create_quest2(quests));
}