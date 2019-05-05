/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** change victory and defeat
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void change_victory(game_t *game)
{
    sfView *view = (sfView *)sfRenderWindow_getView(game->settings->window);

    button_victory(game->settings, game->scenes, game->stats);
    sfView_setCenter((sfView *) {view}, (sfVector2f) {960, 540});
    sfRenderWindow_setView(game->settings->window, view);
}

void change_defeat(game_t *game)
{
    sfView *view = (sfView *)sfRenderWindow_getView(game->settings->window);

    button_defeat(game->settings, game->scenes, game->stats);
    sfView_setCenter((sfView *) {view}, (sfVector2f) {960, 540});
    sfRenderWindow_setView(game->settings->window, view);
}
