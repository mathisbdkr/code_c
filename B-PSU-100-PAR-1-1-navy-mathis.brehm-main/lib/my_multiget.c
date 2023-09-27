/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** my_multiget
*/

#include "../include/my.h"

int my_multiget(char c)
{
    int moin = 63;
    if (c >= '0' && c <= '9')
        moin = 46;
    int nb = c - moin;
    return nb;
}
