/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** clock
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void clock(game_scene_t *scene, game_setting_t *settings)
{
    sfTime time = sfClock_getElapsedTime(settings->clock);
    float seconds = time.microseconds / 100000.0;

    if (settings->_paused == true)
        settings->last_time = seconds;
    settings->delta_time = (seconds - settings->last_time);
    settings->last_time = seconds;
    move_sprite_main_menu(settings, scene, settings->delta_time);
}
