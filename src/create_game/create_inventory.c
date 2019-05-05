/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** create_inventory
*/

#include "rpg.h"
#include "enum.h"

int create_inventory(game_inventory_t *inventory)
{
    inventory[SLOT_0] = new_slot((sfVector2f) {35, 935}, true);
    if (&(inventory[SLOT_0]) == (game_inventory_t *) {0})
        return 84;
    inventory[SLOT_1] = new_slot((sfVector2f) {825, 495}, false);
    if (&(inventory[SLOT_1]) == (game_inventory_t *) {0})
        return 84;
    inventory[SLOT_2] = new_slot((sfVector2f) {890, 495}, false);
    if (&(inventory[SLOT_2]) == (game_inventory_t *) {0})
        return 84;
    inventory[SLOT_3] = new_slot((sfVector2f) {955, 495}, false);
    if (&(inventory[SLOT_3]) == (game_inventory_t *) {0})
        return 84;
    inventory[SLOT_4] = new_slot((sfVector2f) {1020, 495}, false);
    if (&(inventory[SLOT_4]) == (game_inventory_t *) {0})
        return 84;
    return 0;
}