/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include <stddef.h>
#include "my.h"

int main (int ac, char **av)
{
    char **tab = NULL;

    if (ac != 3 || my_getnbr(av[1]) <= 1 || my_getnbr(av[1]) >= 100)
        return (84);
    if (my_getnbr(av[2]) <= 0)
        return (84);
    tab = my_tab(my_getnbr(av[1]));
    diplay_gametab(tab, my_getnbr(av[1]));
    game(tab, av);
    my_putchar('\n');
    
    return (0);
}
