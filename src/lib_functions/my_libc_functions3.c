/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** my_libc_functions3
*/

#include "rpg.h"
#include <unistd.h>

char *my_strrem(const char *str)
{
    int tmp = 0;
    char *ret = malloc(sizeof(char) * my_strlen(str));

    if (ret == NULL)
        return NULL;
    for (; tmp < my_strlen(str) - 1; tmp++)
        ret[tmp] = str[tmp];
    ret[tmp] = '\0';
    return ret;
}
