/*
** EPITECH PROJECT, 2019
** line
** File description:
** line
*/

#include "my.h"

int takenbline(char **tab, int min, int max)
{
    int i = 0;

    while (tab[i] != NULL) {
        if (line_nbpipe(i, tab) > min && line_nbpipe(i, tab) <= max)
            return (i);
        i = i + 1;
    }
    return (1);
}
