/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** my_strcat
*/

#include "../include/my.h"

char *my_strcat(char* src, char* dest)
{
    int len = my_strlen(src);
    int i;

    for (i = 0; dest[i] != '\0'; ++i) {
        src[len + i] = dest[i];
    }

    src[len + i] = '\0';
    return src;
}
