/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** change victory and defeat
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void change_victory(void)
{

}

void change_defeat(game_setting_t *settings)
{
    sfView *view = sfRenderWindow_getView(settings->window);

    sfView_setCenter((sfView *) {view}, (sfVector2f) {960, 540});
    sfRenderWindow_setView(settings->window, view);
}
