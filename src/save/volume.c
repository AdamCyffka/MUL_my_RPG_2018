/*
** EPITECH PROJECT, 2019
** volume
** File description:
** rpg
*/

#include "rpg.h"
#include "struct.h"

int button_setting(game_t *game)
{
    if (sfMusic_getVolume(game->scenes->sounds[0].music) == 0.00)
        sfText_setString(game->scenes[TOWN]->buttons[0]->text,
        "Music: Off");
    else
        sfText_setString(rpg->scenes[TOWN]->buttons[0]->text,
        "Music: On");
    settings->current = TOWN;
    return (0);
}
