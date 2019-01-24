/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** getnbr
*/

#include <limits.h>

int check_char(char c)
{
    char *nbr = "0123456789\n";
    int i = 0;

    while (nbr[i] != '\0') {
        if (c == nbr[i])
            return (0);
        i = i + 1;
    }
    return (-1);
}

int check_nbr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (check_char(str[i]) != 0)
            return (-1);
        i = i + 1;
    }
    return (0);
}

int    my_getnbr(char const *str)
{
    int    c = 0;
    int    number = 0;
    int    a = 1;

    if (check_nbr(str) == -1)
        return (404);
    while (str[c] == '-' || str[c] == '+') {
        if (str[c] == '-') {
            a = a * -1;
        }
        c = c + 1;
    }
    while (str[c] >= '0' && str[c] <= '9')
    {
        number = number * 10 + str[c] -48;
        c = c + 1;
        if (number <= (INT_MIN / 10) || number > (INT_MAX)) {
            return (0);
        }
    }
    return (number * a);
}
