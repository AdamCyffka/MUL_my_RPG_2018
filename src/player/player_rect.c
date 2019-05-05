/*
** EPITECH PROJECT, 2019
** player_rect
** File description:
** rpg
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

int bordure_crossed(game_setting_t *settings, game_stat_t *stats,
    game_inventory_t *inventory)
{
    const sfView *view = sfRenderWindow_getView(settings->window);
    sfVector2f vector_view = sfView_getCenter(view);
    int speed = 4;

    if (equiped_or_not(inventory, BOOTS_R) == 1)
        speed += 1;
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        if (stats->player.position.x + 4 >= (vector_view.x - 960) + 1900)
            return 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        if (stats->player.position.y + 4 >= (vector_view.y - 540) + 870)
            return 1;
    }
    return 0;
}

void change_vector_view(game_setting_t *settings, sfVector2f vector_view)
{
    sfView *view = (sfView *)sfRenderWindow_getView(settings->window);

    sfView_setCenter((sfView *) {view}, vector_view);
    sfRenderWindow_setView(settings->window, view);
}

void player_rect_move(game_scene_t *scenes, game_stat_t *stats,
    game_setting_t *settings)
{
    if (player_is_on_rectangle(stats, scenes[settings->current]) == 0)
        return;
    if (settings->last_time >= (settings->timers.player_timer + 1)) {
        settings->timers.player_timer = settings->last_time;
        if (stats->player.rect.top >= 128)
            return;
        if (stats->player.rect.left < 48)
            stats->player.rect.left += 16;
        else
            stats->player.rect.left = 0;
    }
}

int player_pos_view(sfVector2f vector_view, game_stat_t *stats)
{
    if (stats->player.position.x < vector_view.x - 40
        || stats->player.position.x > vector_view.x + 40)
        return 1;
    return 0;
}
