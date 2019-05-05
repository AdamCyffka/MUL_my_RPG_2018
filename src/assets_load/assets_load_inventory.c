/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** assets_load_inventory
*/

#include "rpg.h"
#include "enum.h"

int assets_load_inventory(game_inventory_t *inventory)
{
    for (int tmp = 0; tmp <= SLOT_4; tmp++)
        if (inventory[tmp].item.texture == NULL ||
        inventory[tmp].item.shape == NULL)
            return 84;
    return 0;
}