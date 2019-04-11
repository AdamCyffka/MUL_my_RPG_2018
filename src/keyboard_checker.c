/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** main functions
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void keyboard_checker(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyE) == true)
        printf("dd");
    else if (sfKeyboard_isKeyPressed(sfKeyH))
        utils_button_menu(game->scenes[main_menu], 1, -1);
    else if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
        printf("Echap");
    else if (sfKeyboard_isKeyPressed(sfKeyA) == sfTrue)
        printf("Echap");
    else if (sfKeyboard_isKeyPressed(sfKeyB) == sfTrue)
        printf("Echap");
    else if (sfKeyboard_isKeyPressed(sfKeyF) == sfTrue)
        printf("Echap");
    else if (sfKeyboard_isKeyPressed(sfKeyJ) == sfTrue)
        printf("Echap");
}