/*
** EPITECH PROJECT, 2019
** player_change_map
** File description:
** rpg
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void player_change_map(game_stat_t *stats, game_setting_t *settings)
{
    sfView *view = sfRenderWindow_getView(settings->window);

    if (settings->current == town) {
        if (stats->player.position.x >= 4320 && stats->player.position.y < 1000) {
            settings->current = camp;
            sfView_setCenter((sfView *) {view}, (sfVector2f) {960, 540});
            sfRenderWindow_setView(settings->window, view);
            stats->player.position.x = 40;
            stats->player.position.y = 750;
            sfSprite_setPosition(stats->player.sprite, stats->player.position);
        }
        if (stats->player.position.x >= 4320 && stats->player.position.y > 1000) {
            settings->current = forest;
            sfView_setCenter((sfView *) {view}, (sfVector2f) {960, 540});
            sfRenderWindow_setView(settings->window, view);
            stats->player.position.x = 40;
            stats->player.position.y = 750;
            sfSprite_setPosition(stats->player.sprite, stats->player.position);
        }
        if (stats->player.position.y > 3400) {
            settings->current = beach;
            sfView_setCenter((sfView *) {view}, (sfVector2f) {960, 540});
            sfRenderWindow_setView(settings->window, view);
            stats->player.position.x = 1200;
            stats->player.position.y = 40;
            sfSprite_setPosition(stats->player.sprite, stats->player.position);
        }
    }
    if (settings->current == camp) {
        if (stats->player.position.x <= 20) {
            settings->current = town;
            sfView_setCenter((sfView *) {view}, (sfVector2f) {3394, 533});
            sfRenderWindow_setView(settings->window, view);
            stats->player.position.x = 4300;
            stats->player.position.y = 450;
            sfSprite_setPosition(stats->player.sprite, stats->player.position);
        }
    }
    if (settings->current == forest) {
        if (stats->player.position.x <= 20) {
            settings->current = town;
            sfView_setCenter((sfView *) {view}, (sfVector2f) {3394, 2697});
            sfRenderWindow_setView(settings->window, view);
            stats->player.position.x = 4300;
            stats->player.position.y = 2587;
            sfSprite_setPosition(stats->player.sprite, stats->player.position);
        }
    }
}
