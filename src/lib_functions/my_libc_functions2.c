/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** my_libc_functions2
*/

#include "rpg.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}

char *my_stradd(const char *str, char toadd)
{
    char *new_str = malloc(sizeof(char) * (my_strlen(str) + 2));
    int tmp = 0;

    for (int tmp2 = 0; str[tmp2]; tmp2++) {
        new_str[tmp] = str[tmp2];
        tmp++;
    }
    new_str[tmp] = toadd;
    new_str[tmp + 1] = '\0';
    return (new_str);
}
