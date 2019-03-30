/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** main functions
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void analyse_events(sfRenderWindow *window, sfEvent event, game_stat_t *stats)
{
}

int my_rpg(void)
{
    game_t *game = create_game(game);

    while (sfRenderWindow_isOpen(game->settings->window)) {
        sfRenderWindow_clear(game->settings->window, sfBlack);
        scene_selection(game->stats, game->scenes);
        game_change(game->stats, game->scenes, game->settings->window);
        draw_scene(game->scenes[game->stats->current], game->settings->window,
        game->stats->current);
        while (sfRenderWindow_pollEvent(game->settings->window,
        game->settings->event))
            analyse_events(game->settings->window, game->settings->event,
            game->stats);
        sfRenderWindow_display(game->settings->window);
    }
    destroy_all(&game);
    return (0);
}