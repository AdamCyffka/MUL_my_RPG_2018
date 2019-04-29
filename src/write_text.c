/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** write_text
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

int text_entered(game_t *game)
{
    if (game->settings->event.type == sfEvtTextEntered) {
        if (game->settings->event.text.unicode >= 33 && game->settings->event.text.unicode <= 126)
            printf("");
        else if (game->settings->event.text.unicode == 8)
            printf("backspace\n");
    }
    return (0);
}   