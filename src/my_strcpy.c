/*
** EPITECH PROJECT, 2019
** str copy
** File description:
** str cpy
*/

#include "rpg.h"

char *my_strcpy(char *str, char *dest)
{
    int tmp = 0;

    dest = malloc(my_strlen(str));
    for (; str[tmp]; tmp++)
        dest[tmp] = str[tmp];
    dest[tmp] = '\0';
    return (dest);
}
