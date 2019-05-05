/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** destroy_settings
*/

#include "rpg.h"
#include "enum.h"

void destroy_settings(game_setting_t *settings)
{
    sfClock_destroy(settings->clock);
    sfRenderWindow_destroy(settings->window);
    free(settings);
}