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

void player_rect_move(game_scene_t scenes, game_stat_t *stats,
    timer_clock_t *timers, game_setting_t *settings)
{
    if (player_is_on_rectangle(settings, stats, scenes) == 0)
        return;
    if (settings->last_time >= (timers->main_menu + 0.1)) {
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
