/*
** EPITECH PROJECT, 2019
** my_tab
** File description:
** my_tab
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"

char **my_tab(int nb)
{
    char **tab = malloc(sizeof(char *) * nb + 1);
    int i = 0;
    int y = 0;

    while (i != nb) {
        tab[i] = malloc(sizeof(char) * ((i * 2) + 1));
        while (y != (i * 2) + 1) {
            tab[i][y] = '|';
            y = y + 1;
        }
        tab[i][y] = '\0';
        y = 0;
        i = i + 1;
    }
    tab[i] = NULL;
    return (tab);
}

void putspace(int space)
{
    int y = 0;

    while (y != space) {
        my_putchar(' ');
        y = y + 1;
    }
}

void gametab(char **tab, int i, int space)
{
    my_putchar('*');
    putspace(space);
    my_putstr(tab[i]);
    putspace(space);
    my_putchar('*');
    my_putchar('\n');
}

void diplay_gametab(char **tab, int nb)
{
    int i = 0;
    int space = ((nb * 2) - 1) / 2;

    while (i != (nb * 2) + 1) {
        my_putchar('*');
        i = i + 1;
    }
    my_putchar('\n');
    i = 0;
    while (tab[i] != NULL) {
        gametab(tab, i, space);
        space = space - 1;
        i = i + 1;
    }
    i = 0;
    while (i != (nb * 2) + 1) {
        my_putchar('*');
        i = i + 1;
    }
    my_putchar('\n');
}
