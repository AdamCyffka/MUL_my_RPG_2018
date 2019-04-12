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
    float seconds = time.microseconds / 1000000.0;
    static timer_clock_t timers = {0, 0, 0};

    if (seconds >= (timers.main_menu + 0.1)) {
        timers.main_menu = seconds;
        move_sprite_main_menu(scene);
    }
}