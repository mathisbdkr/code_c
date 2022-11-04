/*
** EPITECH PROJECT, 2022
** My_strdup
** File description:
** Task01 day08
*/
#include <stdlib.h>

char *my_strcpy(char *dest, char const *src);

void my_putchar(char c);

int my_putstr(char const *src);

int my_strlen(char const *src);

char *my_strdup(char const *src)
{
    int i_src = 0;
    char *new_src;

    i_src = my_strlen(src);
    new_src = malloc(sizeof(char) * i_src);
    my_strcpy(new_src, src);
    return new_src;
}
