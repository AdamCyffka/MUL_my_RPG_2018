/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** draw_inventory
*/

#include "enum.h"
#include "rpg.h"
#include "struct.h"

void draw_inventory(game_inventory_t *inventory, game_setting_t *settings)
{
    for (int tmp = SLOT_0; tmp <= SLOT_4; tmp++)
        if (inventory[tmp].state >= 0)
            sfRenderWindow_drawRectangleShape(settings->window,
            inventory[tmp].item.shape, NULL);
}