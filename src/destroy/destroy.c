/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** destroy
*/

#include "rpg.h"
#include "struct.h"

void destroy_window(game_t *game)
{
    sfRenderWindow_destroy(game->settings->window);
}

void destroy_texts(game_t *game, int nbr)
{
    for (int tmp = 0; tmp < nbr; tmp++) {
        sfFont_destroy(game->scenes->texts[tmp].font);
        sfText_destroy(game->scenes->texts[tmp].text);
    }
}

void destroy_buttons(game_t *game, int nbr)
{
    for (int tmp = 0; tmp < nbr; tmp++) {
        sfRectangleShape_destroy(game->scenes->buttons[tmp].shape);
        sfTexture_destroy(game->scenes->buttons[tmp].texture);
    }
}

void destroy_sounds(game_t *game, int nbr)
{
    for (int tmp = 0; tmp < nbr; tmp++) {
        sfMusic_destroy(game->scenes->sounds[tmp].music);
    }
}

void destroy_objs(game_t *game, int nbr)
{
    for (int tmp = 0; tmp < nbr; tmp++) {
        sfSprite_destroy(game->scenes->objs[tmp].sprite);
        sfTexture_destroy(game->scenes->objs[tmp].texture);
    }
}