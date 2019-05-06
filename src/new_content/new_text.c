/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** new_text
*/

#include "rpg.h"
#include "struct.h"

game_text_t new_text(const char *path_to_font, const char *towrite,
sfVector2f pos, int size)
{
    game_text_t text;

    text.text = sfText_create();
    text.font = sfFont_createFromFile(path_to_font);
    text.state = -1;
    text.position = pos;
    sfText_setPosition(text.text, pos);
    sfText_setString(text.text, towrite);
    sfText_setFont(text.text, text.font);
    sfText_setCharacterSize(text.text, size);
    return (text);
}