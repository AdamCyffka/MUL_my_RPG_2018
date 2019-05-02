/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** other_options
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

int frame_to_60(game_setting_t *settings)
{
    sfWindow_setFramerateLimit(settings->window, 60);
    return (0);
}

int frame_to_30(game_setting_t *settings)
{
    sfWindow_setFramerateLimit(settings->window, 60);
    return (0);
}

int vsync_on(game_setting_t *settings)
{
    sfRenderWindow_setVerticalSyncEnabled(settings->window, sfTrue);
    return (0);
}

int vsync_off(game_setting_t *settings)
{
    sfRenderWindow_setVerticalSyncEnabled(settings->window, sfFalse);
    return (0);
}