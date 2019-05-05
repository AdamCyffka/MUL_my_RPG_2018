/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** button_inventory2
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void button_inventory6(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable)
{
    scenes[TOWN].buttons[SAVE_B_S1].state = ((enable == 1) ? disable : enable);
    scenes[BOSS].buttons[SAVE_B_S2].state = ((enable == 1) ? disable : enable);
    scenes[FOREST].buttons[SAVE_B_S3].state = ((enable == 1) ? disable :
    enable);
    scenes[BEACH].buttons[SAVE_B_S4].state = ((enable == 1) ? disable :
    enable);
    scenes[CAMP].buttons[SAVE_B_S5].state = ((enable == 1) ? disable : enable);
    scenes[BEACH].texts[XP_T_S4].state = ((enable == 1) ? disable : enable);
    scenes[CAMP].texts[XP_T_S5].state = ((enable == 1) ? disable : enable);
    for (int i = SLOT_0; i <= SLOT_4; i++) {
        if (inventory[i]._selected != true && inventory[i].state != EMPTY)
            inventory[i].state = ((enable == 1) ? 2 : disable);
    }

}