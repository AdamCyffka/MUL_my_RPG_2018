/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** basic functions
*/

#include "rpg.h"
#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (!str)
        return (0);
    while (str[i] != '\0')
        i++;
    return (i);
}

int my_strcmp(char const *str1, char const *str2)
{
    if (my_strlen(str1) != my_strlen(str2))
        return 0;
    for (int tmp = 0; str1[tmp]; tmp++) {
        if (str1[tmp] != str2[tmp])
            return 0;
    }
    return 1;
}

int nb_len(int nb)
{
    int len = 0;

    if (nb == 0)
        return (1);
    while (nb != 0) {
        nb /= 10;
        len++;
    }
    return (len);
}

char *my_itoa(int nb)
{
    int isneg = nb < 0 ? 1 : 0;
    int len = nb_len(nb) + isneg;
    char *res = malloc(sizeof(char) * (len + 1));

    if (res == NULL)
        return (NULL);
    res[len] = '\0';
    len--;
    if (isneg) {
        res[0] = '-';
        nb = -nb;
    }
    while (len >= isneg) {
        res[len] = nb % 10 + '0';
        nb /= 10;
        len--;
    }
    return (res);
}

char *my_strcpy(char *str, char *dest)
{
    int tmp = 0;

    dest = malloc(my_strlen(str));
    for (; str[tmp]; tmp++)
        dest[tmp] = str[tmp];
    dest[tmp] = '\0';
    return (dest);
}