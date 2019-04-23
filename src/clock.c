/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** clock
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void clock(game_scene_t *scene, game_setting_t *settings, game_quest_t *quests)
{
    sfTime time = sfClock_getElapsedTime(settings->clock);
    float seconds = time.microseconds / 100000.0;
    static timer_clock_t timers = {0, 0, 0, 0};

    settings->delta_time = (seconds - settings->last_time);
    settings->last_time = seconds;
    move_sprite_main_menu(scene, settings->delta_time);
    /*if (seconds >= (timers.main_menu + 0.1)) {
        timers.main_menu = seconds;
        move_sprite_main_menu(scene, settings->delta_time);
        }*/
    if (seconds >= (timers.timer2 + 10)) { //FONCTION TEST VALENTIN
        timers.timer2 = seconds;
        test_quest(quests);
    }
    /*if (seconds >= (timers.timer3 + 2.5)) {
        timers.timer3 = seconds;
        sfMusic_play(scene[town].sounds[WALK_S_S1].music);
    }*/
}
