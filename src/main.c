/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** main my_rpg
*/

#include "rpg.h"
#include "struct.h"

void help(void)
{
    my_printf("RPG made with CSFML\n");
    my_printf("\n");
    my_printf("USAGE:\n");
    my_printf("DESCRIPTION:");
}

int main(int ac, char **av, char **env)
{
    window_t params;

    if (*env == NULL)
        return (84);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')
        help();
    else if (ac != 1) {
        my_printf("Usage : my_rpg -h\n");
        return (84);
    } else {
        init_params(&params);
        my_rpg(&params);
    }
    return (0);
}