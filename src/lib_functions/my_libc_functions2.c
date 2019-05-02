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

	if (new_str == NULL)
		return NULL;
	for (int tmp2 = 0; str[tmp2]; tmp2++) {
		new_str[tmp] = str[tmp2];
		tmp++;
	}
	new_str[tmp] = toadd;
	new_str[tmp + 1] = '\0';
	return (new_str);
}

char *my_strrem(const char *str)
{
	char *ret = malloc(sizeof(char) * my_strlen(str));
	int tmp = 0;

	if (ret == NULL)
		return NULL;
	for (; tmp < my_strlen(str) - 1; tmp++)
		ret[tmp] = str[tmp];
	ret[tmp] = '\0';
	return ret;
}