/*
** EPITECH PROJECT, 2019
** event_inventory.c
** File description:
** All event to manag inventory
*/

#include "enum.h"
#include "rpg.h"
#include "struct.h"

void change_my_selected(game_inventory_t *inventory, game_setting_t *settings,
int tmp)
{
    if (button_is_clicked(settings, inventory[tmp].item.position,
    (sfVector2f) {inventory[tmp].item.rect.width,
    inventory[tmp].item.rect.height}) && inventory[tmp]._selected != true) {
        for (int i = SLOT_0; i <= SLOT_4; i++)
            swap_pos_inventory(inventory, tmp, i);
        inventory[tmp]._selected = true;
        sfRectangleShape_setPosition(inventory[tmp].item.shape,
        inventory[tmp].item.position);
    }
}

void delete_item_inventory(game_inventory_t *inventory, int reward)
{
    for (int i = SLOT_0; i <= SLOT_4; i++)
        if (inventory[i].content == reward) {
            inventory[i].content = EMPTY;
            inventory[i].state = -1;
            change_item_texture(inventory, "assets/images/invisible.png",
            EMPTY, i);
        }
}

void fill_inventory(game_inventory_t *inventory, int content)
{
    for (int i = SLOT_0; i <= SLOT_4; i++)
        if (inventory[i].state < 0 && inventory[i].content == EMPTY) {
            inventory[i].content = content;
            inventory[i].state = 1;
            break;
        }
}