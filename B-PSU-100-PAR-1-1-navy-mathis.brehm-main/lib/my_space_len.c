/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** my_space_len
*/

#include "../include/my.h"

int my_space_len(char *str)
{
    int i = 0;
    int nb = 0;
    while (str[i]) {
        if (str[i] == ' ' || str[i] == '\n')
            nb++;
        i++;
    }
    return (nb);
}
