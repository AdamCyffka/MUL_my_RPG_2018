/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** buttons activation
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void buttons_activation(game_t *game)
{
    if (game->settings->current == main_menu) {
        button_new();
        button_load();
        button_desktop();
        button_credits();
        button_close();
    }
    if (game->settings->current >= town && game->settings->current <= camp) {
        button_mainmenu();
        button_desktop();
        button_save(game);
        button_plus();
        button_minus();
        button_mute();
        button_inventory();
        button_me();
        button_options();
        button_exit();
    }
    if (game->settings->current == defeat || game->settings->current ==
    victory) {
        button_mainmenu();
        button_desktop();
    }
}