/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** init functions
*/

#include "rpg.h"
#include "struct.h"

void init_params(game_setting_t *params)
{
    sfVideoMode mode = {1920, 1080, 32};
    params->window = sfRenderWindow_create(mode, "TRASHDEW VALLEY", sfClose,
                                           NULL);
}

void init_window(game_setting_t *params)
{
    init_params(params);
    sfRenderWindow_setVerticalSyncEnabled(params->window, sfTrue);
    sfRenderWindow_setMouseCursorVisible(params->window, sfFalse);
}
