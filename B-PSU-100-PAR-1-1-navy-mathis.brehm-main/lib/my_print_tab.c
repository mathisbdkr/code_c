/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** my_print_tab
*/

#include "../include/my.h"

int nbl_tab(char **tab)
{
    int i = 0;
    for (i; tab[i]; i++) {
    }
    return i;
}

void my_print_tab(char **tab)
{
    for (int i = 0; i < 10; i++) {
        write(1, tab[i], 19);
    }
}
