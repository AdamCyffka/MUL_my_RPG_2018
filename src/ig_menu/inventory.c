/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** inventory menu
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

open_inventory(game_setting_t *settings, game_scene_t *scene)
{
    if (settings->event.key.code == sfKeyE)
        sfRenderWindow_drawSprite(settings->window, scene->objs[INVENTORY_O_S1].sprite, NULL);
}

int exit_buttons_options(game_setting_t *settings, game_scene_t *scenes)
{
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes->
    buttons[EXIT_B_S1].shape), sfRectangleShape_getSize(scenes->
    buttons[EXIT_B_S1].shape)) == true)
        sfRenderWindow_close(settings->window);
    else if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes->
    buttons[DESKTOP_B_S1].shape), sfRectangleShape_getSize(scenes->
    buttons[DESKTOP_B_S1].shape)) == true)
        sfRenderWindow_close(settings->window);
}

void draw_cursor(game_setting_t *settings, game_scene_t *scenes)
{
    if (settings->current >= main_menu && settings->current <= defeat)
        sfSprite_setPosition(scenes->objs[CURSOR_O_S0].sprite, settings->cursor_pos);
}