/*
** EPITECH PROJECT, 2019
** test
** File description:
** test
*/

#include <time.h>
#include <stdlib.h>

int my_random(int nb_max)
{
    int res = 0;

    srandom(time(0));
    res = random() % nb_max;
    return (res);
}
