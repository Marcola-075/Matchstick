/*
** EPITECH PROJECT, 2019
** game
** File description:
** game
*/

#include "my.h"

int take_line(int nb)
{
    char *buff = NULL;
    size_t len = 0;
    int res;
    int a;

    my_putstr("Line: ");
    a = getline(&buff, &len, stdin);
    if (a == -1)
        return (2000);
    res = my_getnbr(buff);
    if (check_nbr(buff) == -1 || check_empty(buff) == 1) {
        my_putstr("Error: invalid input (positive number expected)\n");
        res = take_line(nb) + 1;
    }
    if (res <= 0 || res > nb) {
        my_putstr("Error: this line is out of range\n");
        res = take_line(nb) + 1;
    }
    return (res - 1);
}

int my_error(int line, char **tab, int limit, int res)
{
    if (res > limit) {
        my_putstr("Error: you cannot remove more than ");
        my_putstr(inttochar(limit));
        my_putstr(" matches per turn\n");
        return (1000);
    }
    else if (res <= 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (1000);
    }
    else if (res > line_nbpipe(line, tab)) {
        my_putstr("Error: not enough matches on this line\n");
        return (1000);
    }
    return (res);
}

int take_matches(int line, char **tab, int limit)
{
    char *buff = NULL;
    size_t len = 0;
    int res;
    int a = 0;

    my_putstr("Matches: ");
    a = getline(&buff, &len, stdin);
    if (a == -1)
        return (2000);
    res = my_getnbr(buff);
    if (check_nbr(buff) != -1 && check_empty(buff) != 1)
        res = my_error(line, tab, limit, res);
    if (res == 1000)
        return (1000);
    if (check_nbr(buff) == -1 || check_empty(buff) == 1) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (1000);
    }
    return (res);
}

char *rm_it(char *line, int matches)
{
    int i = my_strlen(line);

    while (matches != 0) {
        if (line[i] == '|') {
            line[i] = ' ';
            matches -= 1;
        }
        i = i - 1;
    }
    return (line);
}
int game(char **tab, char **av)
{
    int turn = 0;
    int exit = 0;

    while (check_end(tab) == 1 && exit != 1) {
        if (turn == 0) {
            my_putstr("Your turn...\n");
            tab = take_arg(tab, av, turn, &exit);
        }
        if (turn == 1)
            my_putstr("AI's turn...\n");
        if (exit != 1) {
            diplay_gametab(tab, my_getnbr(av[1]));
            turn = change_turn(turn);
        }
    }
    if (exit == 0) {
        if (turn == 0) {
            my_putstr("I lost... snif... but I'll get you next time!!");
            return (1);
        }
        if (turn == 1) {
            my_putstr("You lost, too bad...");
            return (2);
        }
    }
    return (0);
}
