/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** my_strlen_test
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include <rpg.h>

Test(my_strlen_1, null_string)
{
	int i = my_strlen(NULL);

	cr_assert_eq(i, 0);
}

Test(my_strlen_1, simple_string)
{
	int i = my_strlen("hey guys\n");

	cr_assert_eq(i, 9);
}