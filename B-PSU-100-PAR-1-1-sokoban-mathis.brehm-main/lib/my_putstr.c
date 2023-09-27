/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** my_putstr
*/

#include "../include/sokoban.h"

void my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
