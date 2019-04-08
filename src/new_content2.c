/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** new content 2
*/

#include "rpg.h"
#include "struct.h"

game_quest_t new_quest(const char *quest_statement, bool _instant,
int nb_of_task, int *rewards_id)
{
    game_quest_t quest;

    quest.nb_of_task = nb_of_task;
    quest.progress = 0;
    quest.quest_statement = (char *) {quest_statement};
    quest.reward_id = rewards_id;
    quest._instant = _instant;
    return (quest);
}

game_inventory_t new_slot(void)
{
    game_inventory_t slot;

    return (slot);
}