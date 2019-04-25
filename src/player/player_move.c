/*
** EPITECH PROJECT, 2019
** player_move
** File description:
** my_rpg
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void player_stop_moving(game_stat_t *stats, game_setting_t *settings)
{
    stats->player.rect.width = 16;
    stats->player.rect.height = 32;
    if (stats->player.rect.top == 157 && stats->player.rect.left == 0)
        stats->player.rect.top = 0;
    if (stats->player.rect.top == 157 && stats->player.rect.left == 16)
        stats->player.rect.top = 64;
    if (stats->player.rect.top == 129 && stats->player.rect.left == 0) {
        stats->player.position.y -= 4;
        stats->player.rect.top = 32;
    }
    if (stats->player.rect.top == 129 && stats->player.rect.left == 32) {
        stats->player.position.y -= 40 * settings->delta_time;
        stats->player.position.x += 500 * settings->delta_time;
        stats->player.rect.top = 96;
    }
    stats->player.rect.left = 0;
    sfSprite_setPosition(stats->player.sprite, stats->player.position);
    sfSprite_setTextureRect(stats->player.sprite, stats->player.rect);
}

int bordure_crossed(game_setting_t *settings, game_stat_t *stats)
{
    const sfView *view = sfRenderWindow_getView(settings->window);
    sfVector2f vector_view = sfView_getCenter(view);

    if (settings->event.key.code == sfKeyRight) {
        if (stats->player.position.x + 4 >= (vector_view.x - 960) + 1900)
            return 1;
    }
    if (settings->event.key.code == sfKeyDown) {
        if (stats->player.position.y + 4 >= (vector_view.y - 540) + 870)
            return 1;
    }
    return 0;
}

void move_window(game_setting_t *settings, game_stat_t *stats)
{
    const sfView *view = sfRenderWindow_getView(settings->window);
    sfVector2f vector_view = sfView_getCenter(view);

    if (player_pos_view(vector_view, stats) == 1) return;
    if (settings->event.key.code == sfKeyRight) {
        if (vector_view.x < 3390)
            vector_view.x += 40 * settings->delta_time;
    }
    if (settings->event.key.code == sfKeyLeft) {
        if (vector_view.x > 960)
            vector_view.x -= 40 * settings->delta_time;
    }
    if (settings->event.key.code == sfKeyUp)
        if (vector_view.y > 540)
            vector_view.y -= 40 * settings->delta_time;
    if (settings->event.key.code == sfKeyDown) {
        if (vector_view.y < 3225)
            vector_view.y += 40 * settings->delta_time;
    }
    change_vector_view(settings, vector_view);
}

void move_player(game_setting_t *settings, game_stat_t *stats)
{
    if (settings->event.key.code == sfKeyRight) {
        stats->player.position.x += 40 * settings->delta_time;
        stats->player.rect.top = 32;
    }
    if (settings->event.key.code == sfKeyLeft) {
        if (stats->player.position.x - 4 > 10)
            stats->player.position.x -= 40 * settings->delta_time;
        stats->player.rect.top = 96;
    }
    if (settings->event.key.code == sfKeyUp) {
        if (stats->player.position.y - 4 > 10)
            stats->player.position.y -= 40 * settings->delta_time;
        stats->player.rect.top = 64;
    }
    if (settings->event.key.code == sfKeyDown) {
        stats->player.position.y += 40 * settings->delta_time;
        stats->player.rect.top = 0;
    }
}

void key_to_move_or_not(game_scene_t scenes,
    game_setting_t *settings, game_stat_t *stats)
{
    if (settings->event.key.code == sfKeyRight
        || settings->event.key.code == sfKeyLeft
        || settings->event.key.code == sfKeyUp
        || settings->event.key.code == sfKeyDown) {
        if (player_is_on_rectangle(settings, stats, scenes) == 0)
            return;
        move_window(settings, stats);
        if (bordure_crossed(settings, stats) == 1)
            return;
        move_player(settings, stats);
        sfSprite_setPosition(stats->player.sprite, stats->player.position);
        sfSprite_setTextureRect(stats->player.sprite, stats->player.rect);
    }
}
