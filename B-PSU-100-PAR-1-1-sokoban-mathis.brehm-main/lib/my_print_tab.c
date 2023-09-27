/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** my_print_tab
*/

#include "../include/sokoban.h"

int nbl_tab(char **tab)
{
    int i = 0;
    for (i; tab[i]; i++) {
    }
    return i;
}

void my_print_tab(char **tab, struct sokoban_t *soko)
{
    for (int i = 0; i <= soko->nbl; i++) {
        printw("%s", tab[i]);
    }
}
