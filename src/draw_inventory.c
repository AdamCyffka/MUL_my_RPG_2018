/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** draw_inventory
*/

#include "enum.h"
#include "rpg.h"
#include "struct.h"

void swap_pos_inventory(game_inventory_t *inventory, int tmp, int i)
{
    sfVector2f pos;

    if (inventory[i]._selected == true) {
        pos.x = inventory[tmp].item.position.x;
        pos.y = inventory[tmp].item.position.y;
        inventory[tmp].item.position.x = inventory[i].item.position.x;
        inventory[tmp].item.position.y = inventory[i].item.position.y;
        inventory[i].item.position.x = pos.x;
        inventory[i].item.position.y = pos.y;
        inventory[i]._selected = false;
        sfRectangleShape_setPosition(inventory[i].item.shape, 
        inventory[i].item.position);
    }
}

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

void fill_inventory(game_inventory_t *inventory, int content)
{
    for (int i = SLOT_0; i <= SLOT_4; i++)
        if (inventory[i].state < 0) {
            inventory[i].content = content;
            inventory[i].state = 1;
            break;
        }
}

void change_item_texture(game_inventory_t *inventory, char const *path, 
int reward, int tmp)
{
    if (inventory[tmp].content == reward) {
        inventory[tmp].item.texture = sfTexture_createFromFile(path, NULL);
        sfRectangleShape_setTexture(inventory[tmp].item.shape, 
        inventory[tmp].item.texture, sfTrue);
    }
}

void utils_change_texture(game_inventory_t *inventory, int tmp)
{
    change_item_texture(inventory, "assets/icon_sword1.png", SWORD1_R, tmp);
    change_item_texture(inventory, "assets/icon_sword2.png", SWORD2_R, tmp);
    change_item_texture(inventory, "assets/icon_quest.png", QBOOK_R, tmp);
    change_item_texture(inventory, "assets/icon_map.png", MINIMAP_R, tmp);
    change_item_texture(inventory, "assets/icon_boots.png", BOOTS_R, tmp);
    change_item_texture(inventory, "assets/icon_axe.png", AXE_R, tmp);
    change_item_texture(inventory, "assets/icon_golem.png", GOLEMHEAD_R, tmp);
}

void draw_inventory(game_inventory_t *inventory, game_setting_t *settings)
{
    for (int tmp = SLOT_0; tmp <= SLOT_4; tmp++) {
        if (tmp == 0 && inventory[tmp].state < 0) {
            utils_change_texture(inventory, tmp);
            sfRenderWindow_drawRectangleShape(settings->window,
            inventory[tmp].item.shape, NULL);
        }
        change_my_selected(inventory, settings, tmp);
        if (inventory[tmp].state >= 0) {
            utils_change_texture(inventory, tmp);
            sfRenderWindow_drawRectangleShape(settings->window,
            inventory[tmp].item.shape, NULL);
        }
    }
}