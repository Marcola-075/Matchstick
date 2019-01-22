/*
** EPITECH PROJECT, 2019
** gametwo
** File description:
** gametwo
*/

#include "my.h"

int change_turn(int trun)
{
    if (trun == 0)
        trun = 1;
    else
        trun = 0;
    return (trun);
}

void put_playact(int lines, int matches, int turn)
{
    if (turn == 0)
        my_putstr("Player one");
    else
        my_putstr("AI");
    my_putstr(" removed ");
    my_putstr(inttochar(matches));
    my_putstr(" match(es) form line ");
    my_putstr(inttochar(lines + 1));
    my_putchar('\n');
}

char **take_arg(char **tab, char **av, int turn, int *exit)
{
    int line;
    int matches;

    line = take_line(my_getnbr(av[1]));
    if (line == 2000) {
        (*exit) = 1;
        return (tab);
    }
    matches = take_matches(line, tab, my_getnbr(av[2]));
    if (matches == 2000) {
        (*exit) = 1;
        return (tab);
    }
    if (matches == 1000)
        tab = take_arg(tab, av, turn, exit);
    else {
        put_playact(line, matches, turn);
        tab[line] = rm_it(tab[line], matches);
    }
    return (tab);
}
