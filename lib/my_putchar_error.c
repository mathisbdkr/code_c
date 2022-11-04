/*
** EPITECH PROJECT, 2022
** My_putchar_error.c
** File description:
** Rush-2
*/
#include <unistd.h>

void my_putchar_error(char c)
{
    write(2, &c, 1);
}
