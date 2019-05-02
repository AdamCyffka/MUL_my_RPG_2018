/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** create_game3
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"
#include "define.h"

void create_stats(game_stat_t *stats)
{
    stats->life = 100;
    stats->xp = 0;
    stats->sex = 0;
    stats->life_t = new_text("assets/font/font.ttf", "100", (sfVector2f)
    {1810, 932}, 34);
    stats->xp_t = new_text("assets/font/font.ttf", "0", (sfVector2f)
    {895, 460}, 32);
    stats->name_t = new_text("assets/font/font.ttf", "'PLAYER'", (sfVector2f)
    {1000, 505}, 32);
    stats->_mov_allowed = false;
    stats->player = new_object("assets/images/girl1.png",
    (sfVector2f) {300, 500}, (sfIntRect) {0, 32, 16, 32}, 5);
    stats->current_quest = INTRO_Q;
}

void create_settings(game_setting_t *settings)
{
    sfVideoMode mode = {1920, 1080, 32};
    settings->window = sfRenderWindow_create(mode, "TRASHDEW VALLEY", sfClose |
    sfResize, NULL);
    settings->clock = sfClock_create();
    settings->timers = (timer_clock_t) {0, 0, 0, 0, 0, 0, 0, 0};
    settings->last_time = 0;
    settings->delta_time = 0;
    settings->_paused = false;
    settings->current = MAIN_MENU;
    sfRenderWindow_setFramerateLimit(settings->window, 60);
    sfRenderWindow_setMouseCursorVisible(settings->window, sfFalse);
}
