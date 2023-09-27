/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** my_stradd
*/

#include "../include/my.h"

char *my_stradd(char *src, char *str)
{
    int len = my_strlen(src);
    int i = 0;
    while (str[i]) {
        src[len + i] = str[i];
        i++;
    }
    return src;
}
