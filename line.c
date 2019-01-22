/*
** EPITECH PROJECT, 2019
** line
** File description:
** line
*/

#include "my.h"

int line_nbpipe(int line, char **tab)
{
    int i = 0;
    int out = 0;

    while (tab[line][i] != '\0') {
        if (tab[line][i] == '|')
            out += 1;
        i = i + 1;
    }
    return (out);
}

int check_empty(char *buff)
{
    if (buff[0] == '\n')
        return (1);
    return (0);
}
