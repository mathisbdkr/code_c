/*
** EPITECH PROJECT, 2022
** my_isneg.c
** File description:
** task04
*/
#include <unistd.h>

void my_putchar(char c);

void my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    else
        my_putchar('N');
    my_putchar('\n');
}
