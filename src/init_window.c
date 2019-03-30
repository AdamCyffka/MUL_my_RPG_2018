/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** init functions
*/

#include "rpg.h"
#include "struct.h"

void init_params(window_t *params)
{
    sfVideoMode mode = {1920, 1080, 32};
    params->window = sfRenderWindow_create
    (mode, "TRASHDEW VALLEY", sfClose, NULL);
}

void init_window(window_t *params)
{
    sfRenderWindow_setFramerateLimit(params->window, 60);
    sfRenderWindow_setMouseCursorVisible(params->window, sfFalse);
}
