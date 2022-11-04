/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** task07
*/
#include <unistd.h>

void my_putchar(char c);

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
