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

int create_stats(game_stat_t *stats)
{
    stats->life = 100;
    stats->xp = 0;
    stats->sex = 0;
    stats->life_t = new_text("assets/font/font.ttf", "100", (sfVector2f)
    {1810, 932}, 34);
    if (&(stats->life_t) == (game_text_t *) {0})
        return 84;
    stats->xp_t = new_text("assets/font/font.ttf", "0", (sfVector2f)
    {895, 460}, 32);
    if (&(stats->xp_t) == (game_text_t *) {0})
        return 84;
    stats->name_t = new_text("assets/font/font.ttf", "'PLAYER'", (sfVector2f)
    {1000, 505}, 32);
    if (&(stats->name_t) == (game_text_t *) {0})
        return 84;
    stats->_mov_allowed = false;
    stats->player = new_object("assets/images/girl1.png",
    (sfVector2f) {300, 500}, (sfIntRect) {0, 32, 16, 32}, 5);
    stats->current_quest = INTRO_Q;
    return 0;
}

int create_settings(game_setting_t *settings)
{
    sfVideoMode mode = {1920, 1080, 32};
    settings->window = sfRenderWindow_create(mode, "TRASHDEW VALLEY", sfClose |
    sfResize, NULL);
    if (settings->window == NULL)
        return 84;
    settings->clock = sfClock_create();
    if (settings->clock == NULL)
        return 84;
    settings->timers = (timer_clock_t) {0, 0, 0, 0, 0, 0, 0, 0};
    settings->last_time = 0;
    settings->delta_time = 0;
    settings->_paused = false;
    settings->current = MAIN_MENU;
    sfRenderWindow_setFramerateLimit(settings->window, 60);
    sfRenderWindow_setMouseCursorVisible(settings->window, sfFalse);
    return 0;
}
