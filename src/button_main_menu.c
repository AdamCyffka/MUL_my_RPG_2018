/*
** EPITECH PROJECT, 2019
** button_main_menu.c
** File description:
** All function to manag button main_menu
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

int button_is_clicked(game_setting_t *settings, sfVector2f pos, sfVector2f size)
{
    int ret;
    int x = (int)settings->cursor_pos.x;
    int y = (int)settings->cursor_pos.y;

    settings->_mouse = (sfMouse_isButtonPressed(sfMouseLeft)) ? true : false;
    if (settings->_mouse == true) {
        ((x >= pos.x && x <= pos.x + size.x) && (y >= pos.y && y <= pos.y
        + size.y)) ? (ret = true) : (ret = false);
        return ret;
    } else
        return 0;
}

void button_hover(game_scene_t scenes, game_setting_t *settings, int nbr)
{
    int x = (int)settings->cursor_pos.x;
    int y = (int)settings->cursor_pos.y;
    sfVector2f pos = sfRectangleShape_getPosition(scenes.buttons[nbr].shape);
    sfVector2f size = sfRectangleShape_getSize(scenes.buttons[nbr].shape);

    if ((x >= pos.x && x <= pos.x + size.x) && (y >= pos.y && y <= pos.y
    + size.y))
        scenes.buttons[nbr].state = 2;
    else
        scenes.buttons[nbr].state = 0;
}

void state_men_button(game_scene_t scenes, int but)
{
    if (scenes.buttons[but].state == 2)
        scenes.buttons[but].rect.left = 147;
    else if (scenes.buttons[but].state == 1)
        scenes.buttons[but].rect.left = 300;
    else
        scenes.buttons[but].rect.left = 0;
}

void men_game_button(game_setting_t *settings, game_scene_t scenes, int nbr)
{
    button_hover(scenes, settings, nbr);
    if (scenes.buttons[nbr].state != 1) {
        if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
        .buttons[nbr].shape), sfRectangleShape_getSize(scenes.buttons[nbr]
        .shape)) == true)
            scenes.buttons[nbr].state = 1;
    }
    state_men_button(scenes, nbr);
    sfRectangleShape_setTextureRect(scenes.buttons[nbr].shape,
        scenes.buttons[nbr].rect);
    if (nbr == EXIT_B_S0 && scenes.buttons[nbr].state == 1)
        sfRenderWindow_close(settings->window);
}

void button_menu(game_setting_t *settings, game_scene_t scenes)
{
    men_game_button(settings, scenes, NEW_B_S0);
    men_game_button(settings, scenes, EXIT_B_S0);
    men_game_button(settings, scenes, LOAD_B_S0);
    if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[CREDITS_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[CREDITS_B_S0].shape)) == true)
        scenes.buttons[CREDITS_B_S0].state = true;
    else if (button_is_clicked(settings, sfRectangleShape_getPosition(scenes
    .buttons[CLOSE_B_S0].shape), sfRectangleShape_getSize(scenes
    .buttons[CLOSE_B_S0].shape)) == true)
        scenes.buttons[CREDITS_B_S0].state = false;
}