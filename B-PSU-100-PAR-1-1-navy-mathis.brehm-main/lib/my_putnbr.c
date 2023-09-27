/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** my_putnbr
*/

#include "../include/my.h"

void put_nb(int nb)
{
    int num = nb;
    if (num > 9) {
        put_nb(num / 10);
        put_nb(num % 10);
    } else if (num < 0) {
        my_putchar('-');
        num = num * -1;
        put_nb(num / 10);
        put_nb(num % 10);
    } else {
        my_putchar(num + '0');
    }
}

void my_put_nbr(int nb)
{
    put_nb(nb);
    my_putchar('\n');
}
