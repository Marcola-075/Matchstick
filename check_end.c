/*
** EPITECH PROJECT, 2019
** check_end
** File description:
** check_end
*/

#include "my.h"

int check_pipe(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '|')
            return (1);
        i = i + 1;
    }
    return (0);
}

int check_end(char **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        if (check_pipe(tab[i]) == 1)
            return (1);
        i = i + 1;
    }
    return (0);
}
