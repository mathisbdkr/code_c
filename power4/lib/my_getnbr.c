/*
** EPITECH PROJECT, 2022
** My_getnbr.c
** File description:
** task05 day04
*/

#include "../include/my.h"

char *my_strcpy(char* dest, char* src)
{
    char *ptr = dest;

    while (*src != '\0') {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}

int size_nbr(int nbr)
{
    int nb = nbr;
    int size = 0;

    if (nb < 0) {
        size++;
        nb *= -1;
    }
    while (nb != 0) {
        if (nb < 10) {
            size++;
            nb = 0;
        }
        if (nb >= 10) {
            size++;
            nb = nb / 10;
        }
    }
    return size;
}

int my_getnbr(char *str)
{
    int i = 0;
    int nbr = 0;

    if (str[0] == '-' || str[0] == '+')
        i++;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            nbr = nbr * 10 + (str[i] - '0');
        }
        i++;
    }
    if (str[0] == '-') {
        nbr *= -1;
    }
    return nbr;
}
