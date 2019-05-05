/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** state_menu
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

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