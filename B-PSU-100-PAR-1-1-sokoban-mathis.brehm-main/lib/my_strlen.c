/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** my_strlen
*/

#include "../include/sokoban.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
