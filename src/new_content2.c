/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** new content 2
*/

#include "rpg.h"
#include "struct.h"
#include "define.h"
#include "enum.h"

game_quest_t new_quest(int nb_dial, char *statement, int nb_of_task,
int nb_reward)
{
    game_quest_t quest;

    quest.dialogs_text = malloc(sizeof(game_text_t) * nb_dial);
    quest.statement_text = new_text("assets/font.ttf", statement,
    (sfVector2f) {500, 500}, 24);
    quest.nb_of_dial = nb_dial;
    quest.state = Q_NOT_STARTED;
    quest.npc_zone = ZONESPECIAL_B_S1;
    quest.progress = 0;
    quest.current_dial = 0;
    quest.nb_of_task = nb_of_task;
    quest.rewards = malloc(sizeof(int) * (nb_reward + 1));
    quest.rewards[nb_reward] = EOA;
    return (quest);
}

game_inventory_t new_slot(sfVector2f position, bool _selected)
{
    game_inventory_t slot;

    slot.item = new_button("assets/invisible.png", position,
    (sfIntRect) {0, 0, 100, 100}, 0);
    slot.content = EMPTY;
    slot.state = -1;
    slot._selected = _selected;
    return (slot);
}