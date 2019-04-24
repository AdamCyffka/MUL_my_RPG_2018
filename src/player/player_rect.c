/*
** EPITECH PROJECT, 2019
** player_rect
** File description:
** rpg
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void change_vector_view(game_setting_t *settings, sfVector2f vector_view)
{
    const sfView *view = sfRenderWindow_getView(settings->window);

    sfView_setCenter((sfView *) {view}, vector_view);
    sfRenderWindow_setView(settings->window, view);
}

void player_rect_move(game_scene_t *scenes, game_stat_t *stats, game_setting_t *settings)
{
    if (player_is_on_rectangle(settings, stats, scenes[settings->current]) == 0)
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
