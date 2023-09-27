/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** check_data
*/

#include "../include/my.h"

int check_tab(char **tab, int i)
{
    if (tab[i][2] != tab[i][5] && tab[i][3] != tab[i][6]) {
        return 84;
    }
    if (tab[i][0] >= '2' && tab[i][0] <= '5') {
    } else {
        return 84;
    }
    if (tab[i][2] == tab[i][5] && tab[i][3] == tab[i][6]) {
        return 84;
    }
}

int nb_boat(char *str)
{
    int len = 0;
    int i = 0;
    while (str[i]) {
        if (str[i] > '0' && str[i] < '8' && str[i + 1] == ':') {
            len++;
        }
        i++;
    }
    if (len != 8)
        return 84;
}

int check_taille(char **tab, int i)
{
    int l = tab[i][2] - tab[i][5];
    int n = tab[i][3] - tab[i][6];
    int taille = tab[i][0] - 49;
    if (l < 0)
        l *= -1;
    if (n < 0)
        n *= -1;
    if (l != taille && n != taille) {
        return 84;
    }
}

int check_data(char *str)
{
    if (nb_boat(str) == 84)
        return 84;
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'H' || str[i] >= '1' && str[i] <= '8'
        || str[i] == ':' || str[i] == '\n') {
        } else {
            return 84;
        }
    }
    char **tab = str_to_array(str);
    int total = 0;
    for (int i = 0; i < 4; i++) {
        if (check_tab(tab, i) == 84 || check_taille(tab, i) == 84)
            return 84;
        total += tab[i][0] - 48;
    }
    if (total != 14)
        return 84;
    return 0;
}
