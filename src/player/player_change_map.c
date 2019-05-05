/*
** EPITECH PROJECT, 2019
** player_change_map
** File description:
** rpg
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void player_change_map4(game_stat_t *stats, game_setting_t *settings)
{
    sfView *view = (sfView *)sfRenderWindow_getView(settings->window);

    if (settings->current == BEACH) {
        if (stats->player.position.y <= 20) {
            settings->current = TOWN;
            sfView_setCenter((sfView *) {view}, (sfVector2f) {3000, 3300});
            sfRenderWindow_setView(settings->window, view);
            stats->player.position.x = 3000;
            stats->player.position.y = 3390;
            sfSprite_setPosition(stats->player.sprite, stats->player.position);
        }
    }
}

void player_change_map3(game_stat_t *stats,
    game_setting_t *settings, sfView *view)
{
    if (settings->current == CAMP) {
        if (stats->player.position.x <= 20) {
            settings->current = TOWN;
            sfView_setCenter((sfView *) {view}, (sfVector2f) {3394, 533});
            sfRenderWindow_setView(settings->window, view);
            stats->player.position.x = 4300;
            stats->player.position.y = 450;
            sfSprite_setPosition(stats->player.sprite, stats->player.position);
        }
    }
    if (settings->current == FOREST) {
        if (stats->player.position.x <= 20) {
            settings->current = TOWN;
            sfView_setCenter((sfView *) {view}, (sfVector2f) {3394, 2697});
            sfRenderWindow_setView(settings->window, view);
            stats->player.position.x = 4300;
            stats->player.position.y = 2737;
            sfSprite_setPosition(stats->player.sprite, stats->player.position);
        }
    }
}

void player_change_map2(game_stat_t *stats, game_quest_t *quests,
    game_setting_t *settings)
{
    sfView *view = (sfView *)sfRenderWindow_getView(settings->window);

    if (stats->player.position.x >= 4320 && stats->player.position.y > 1000
        && quests[GHOSTS_Q].state == Q_IN_PROGRESS) {
        settings->current = FOREST;
        sfView_setCenter((sfView *) {view}, (sfVector2f) {960, 540});
        sfRenderWindow_setView(settings->window, view);
        stats->player.position.x = 40;
        stats->player.position.y = 750;
        sfSprite_setPosition(stats->player.sprite, stats->player.position);
    }
    if (stats->player.position.y > 3400
        && quests[SKELETONS_Q].state == Q_IN_PROGRESS) {
        settings->current = BEACH;
        sfView_setCenter((sfView *) {view}, (sfVector2f) {960, 540});
        sfRenderWindow_setView(settings->window, view);
        stats->player.position.x = 1200;
        stats->player.position.y = 40;
        sfSprite_setPosition(stats->player.sprite, stats->player.position);
    }
}

void player_change_map(game_stat_t *stats, game_quest_t *quests,
    game_setting_t *settings)
{
    sfView *view = (sfView *)sfRenderWindow_getView(settings->window);

    if (settings->current == TOWN) {
        if (stats->player.position.x >= 4320
            && stats->player.position.y < 1000
            && quests[GOLEMS_Q].state == Q_IN_PROGRESS) {
            settings->current = CAMP;
            sfView_setCenter((sfView *) {view}, (sfVector2f) {960, 540});
            sfRenderWindow_setView(settings->window, view);
            stats->player.position.x = 40;
            stats->player.position.y = 750;
            sfSprite_setPosition(stats->player.sprite, stats->player.position);
        }
        player_change_map2(stats, quests, settings);
    }
    player_change_map3(stats, settings, view);
    player_change_map4(stats, settings);
}
