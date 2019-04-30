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