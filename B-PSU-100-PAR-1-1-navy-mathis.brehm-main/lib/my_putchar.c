/*
** EPITECH PROJECT, 2022
** My_putchar
** File description:
** write something
*/
#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
