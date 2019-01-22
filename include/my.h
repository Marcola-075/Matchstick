/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

int my_strcmp(char const *sone, char const *stwo);
int my_putstr(char const *str);
void my_putchar(char c);
int    my_put_nbr(int nb);
int my_strlen(char const *str);
char **my_tab(int nb);
void diplay_gametab(char **tab, int nb);
int    my_getnbr(char const *str);
int check_end(char **tab);
int line_nbpipe(int line, char **tab);
int take_line(int nb);
int take_matches(int line, char **tab, int limit);
int check_nbr(char const *str);
char *inttochar(int nb);
char *rm_it(char *line, int matches);
int game(char **tab, char **av);
int change_turn(int trun);
char **take_arg(char **tab, char **av, int turn, int *exit);
int check_empty(char *buff);

#endif
