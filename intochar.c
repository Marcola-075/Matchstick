/*
** EPITECH PROJECT, 2019
** inttochar
** File description:
** inttochar
*/

#include <stdlib.h>

int nb_len(int nb)
{
    int len = 0;

    while (nb != 0) {
        nb = nb / 10;
        len = len + 1;
    }
    return (len);
}

int takenbr(int nb, int i)
{
    while (i != 1) {
        nb = nb / 10;
        i = i - 1;
    }
    nb = nb % 10;
    return (nb);
}

char *inttochar(int nb)
{
    int i = nb_len(nb) - 1;
    int a = 0;
    int save;
    char *out = malloc(sizeof(char) * nb_len(nb) + 1);

    while (a != nb_len(nb)) {
        save = takenbr(nb, i + 1) + 48;
        out[a] = save;
        i = i - 1;
        a = a + 1;
    }
    out[nb_len(nb)] = '\0';
    return (out);
}
