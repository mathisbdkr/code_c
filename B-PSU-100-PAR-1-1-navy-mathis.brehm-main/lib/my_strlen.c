/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** my_strlen
*/

#include "../include/my.h"

int my_strlen(char *str)
{
    if (!str) return 0;
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
