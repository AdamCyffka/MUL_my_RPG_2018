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
    write(1, "RPG made with CSFML\n\n", 21);
    write(1, "USAGE:\n", 7);
    write(1, "DESCRIPTION:", 12);
}

int main(int ac, char **av, char **env)
{
    if (*env == NULL)
        return (84);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')
        help();
    else if (ac != 1) {
        write(1, "Usage : my_rpg -h\n", 18);
        return (84);
    } else
        my_rpg();
    return (0);
}