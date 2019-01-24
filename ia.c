/*
** EPITECH PROJECT, 2019
** ia
** File description:
** ia
*/

#include "my.h"

int my_line(char **tab, char **av)
{
    int line;
    int max = my_getnbr(av[1]);

    line = my_random(max);
    if (count_line_len(tab, 1) == 1
        && count_line_betlen(tab, 1, my_getnbr(av[2])) == 1) {
        line = takenbline(tab, 1, my_getnbr(tab[2]));
    }
    else {
        while (line_nbpipe(line, tab) == 0)
            line = my_random(max);
    }
    return (line);
}

int my_matches(char **tab, char **av, int line)
{
    int matches;
    int max = line_nbpipe(line, tab);

    if (count_line_len(tab, 1) == 1
        && count_line_betlen(tab, 1, my_getnbr(av[2])) == 1) {
        if (max < line_nbpipe(line, tab))
            matches = 1;
        else
            matches = line_nbpipe(line, tab);
    }
    else if (count_line_difflen(tab, 0) == 1 && line_nbpipe(line, tab) - 1 < max
             && line_nbpipe(line, tab) - 1 > 0)
        matches = line_nbpipe(line, tab) - 1;
    else {
        matches = my_random(max + 1);
        while (matches == 0)
            matches = my_random(max + 1);
    }
    return (matches);
}
