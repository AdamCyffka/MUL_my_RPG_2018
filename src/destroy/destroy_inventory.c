/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** destroy_inventory
*/

#include "rpg.h"
#include "enum.h"

void destroy_inventory(game_inventory_t *inventory)
{
    for (int tmp = 0; tmp <= SLOT_4; tmp++) {
        sfRectangleShape_destroy(inventory[tmp].item.shape);
        sfTexture_destroy(inventory[tmp].item.texture);
    }
    free(inventory);
}