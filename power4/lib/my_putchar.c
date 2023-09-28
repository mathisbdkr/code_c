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

void my_putstr(char *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int my_intlen(int *nb)
{
    int i = 0;

    while (nb[i]) {
        i++;
    }
    return (i);
}

void my_put_nbr(int nb)
{
    int num = nb;

    if (num > 9) {
        my_put_nbr(num / 10);
        my_put_nbr(num % 10);
    } else if (num < 0) {
        my_putchar('-');
        num = num * -1;
        my_put_nbr(num / 10);
        my_put_nbr(num % 10);
    } else {
        my_putchar(num + '0');
    }
}
