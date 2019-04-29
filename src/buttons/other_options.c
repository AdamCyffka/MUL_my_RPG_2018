/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** other_options
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

int frame_to_60(game_scene_t *scenes, game_setting_t *settings)
{
    sfWindow_setFramerateLimit(settings->window, 60);
}

int frame_to_30(game_scene_t *scenes, game_setting_t *settings)
{
    sfWindow_setFramerateLimit(settings->window, 60);
}

int vsync_on(game_scene_t *scenes, game_setting_t *settings)
{
    sfRenderWindow_setVerticalSyncEnabled(settings->window, sfTrue);
}

int vsync_off(game_scene_t *scenes, game_setting_t *settings)
{
    sfRenderWindow_setVerticalSyncEnabled(settings->window, sfFalse);
}