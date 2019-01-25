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
    int a = 0;

    if (ac != 3 || my_getnbr(av[1]) <= 1 || my_getnbr(av[1]) >= 100)
        return (84);
    if (my_getnbrold(av[2]) <= 0)
        return (84);
    tab = my_tab(my_getnbr(av[1]));
    diplay_gametab(tab, my_getnbr(av[1]));
    a = game(tab, av);
    if (a == 2)
        return (0);
    if (a == 0) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    if (a == 1) {
        my_putstr("You lost, too bad...\n");
        return (2);
    }
}
