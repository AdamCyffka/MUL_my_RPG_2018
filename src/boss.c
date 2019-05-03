/*
** EPITECH PROJECT, 2019
** boss
** File description:
** RPG
*/

#include "struct.h"
#include "enum.h"
#include "rpg.h"

void change_view_boss(game_setting_t *settings)
{
    sfView *view = sfRenderWindow_getView(settings->window);

    sfView_setCenter((sfView *) {view}, (sfVector2f) {1660, 1400});
    sfRenderWindow_setView(settings->window, view);
}
