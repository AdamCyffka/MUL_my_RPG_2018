/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** button_exit2
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void button_exit7(game_scene_t *scenes, int enable, int disable)
{
    scenes[TOWN].buttons[V0_B_S1].state = ((enable == 1) ? disable : enable);
    scenes[BOSS].buttons[V0_B_S2].state = ((enable == 1) ? disable : enable);
    scenes[FOREST].buttons[V0_B_S3].state = ((enable == 1) ? disable : enable);
    scenes[BEACH].buttons[V0_B_S4].state = ((enable == 1) ? disable : enable);
    scenes[TOWN].buttons[SAVE_B_S1].state = ((enable == 1) ? enable : disable);
    scenes[BOSS].buttons[SAVE_B_S2].state = ((enable == 1) ? enable : disable);
    scenes[FOREST].buttons[SAVE_B_S3].state = ((enable == 1) ? enable :
    enable);
    scenes[BEACH].buttons[SAVE_B_S4].state = ((enable == 1) ? enable :
    disable);
    scenes[CAMP].buttons[SAVE_B_S5].state = ((enable == 1) ? enable : disable);
    scenes[TOWN].buttons[CLOSE_B_S1].state = ((enable == 1) ? enable : disable);
    scenes[BOSS].buttons[CLOSE_B_S2].state = ((enable == 1) ? enable : disable);
    scenes[FOREST].buttons[CLOSE_B_S3].state = ((enable == 1) ? enable :
    enable);
    scenes[BEACH].buttons[CLOSE_B_S4].state = ((enable == 1) ? enable :
    disable);
    scenes[CAMP].buttons[CLOSE_B_S5].state = ((enable == 1) ? enable : disable);
}

void button_exit6(game_inventory_t *inventory, game_scene_t *scenes,
int enable, int disable)
{
    scenes[BEACH].texts[VSYNC_T_S4].state = ((enable == 1) ? disable : enable);
    scenes[CAMP].texts[VSYNC_T_S5].state = ((enable == 1) ? disable : enable);
    scenes[TOWN].texts[NAME_T_S1].state = ((enable == 1) ? disable : enable);
    scenes[BOSS].texts[NAME_T_S2].state = ((enable == 1) ? disable : enable);
    scenes[FOREST].texts[NAME_T_S3].state = ((enable == 1) ? disable : enable);
    scenes[BEACH].texts[NAME_T_S4].state = ((enable == 1) ? disable : enable);
    scenes[CAMP].texts[NAME_T_S5].state = ((enable == 1) ? disable : enable);
    scenes[TOWN].texts[XP_T_S1].state = ((enable == 1) ? disable : enable);
    scenes[BOSS].texts[XP_T_S2].state = ((enable == 1) ? disable : enable);
    scenes[FOREST].texts[XP_T_S3].state = ((enable == 1) ? disable : enable);
    scenes[BEACH].texts[XP_T_S4].state = ((enable == 1) ? disable : enable);
    scenes[CAMP].texts[XP_T_S5].state = ((enable == 1) ? disable : enable);
    for (int i = SLOT_0; i <= SLOT_4; i++) {
        if (inventory[i]._selected != true && inventory[i].state != EMPTY)
            inventory[i].state = ((enable == 1) ? disable : enable);
    }
    button_exit7(scenes, 1, -1);
}