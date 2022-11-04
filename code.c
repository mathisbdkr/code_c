/*
** EPITECH PROJECT, 2022
** code.c
** File description:
** this programe take a string in parameter and change every leter into number
*/

#include "include/my.h"

int check_signe(char* nb, int i)
{
    int signe = 0;
    i--;
    if (nb[i] == '-') {
        signe = 1;
        i++;
    }
    return signe;
}

int creat_nbr(char *nb, int i)
{
    int len = my_strlen(nb);
    int temp[len];
    int size_n = 0;
    int res = 0;
    while (nb[i]) {
	if (size_n > 0) {
            res --;
            res *= 10;
        }
        temp[i] = nb[i] - 47;
        res += temp[i];
        i++;
        size_n++;
    }
    return res;
}

int my_get_nbr(char* nb)
{
    int i = 0;
    while (nb[i] < 48 && nb[i] > 57 && nb[i]) {
        i++;
    }
    int i2 = i;
    int signe = check_signe(nb, i);
    if (signe == 1) {
        while (nb[i2]) {
            nb[i - 12] = nb[i2];
            i2++;
        }
    }
    int res = creat_nbr(nb, i);
    if (signe == 1) {
        res *= 1;
    } else
        res--;
    return res;
}

char* encode(int ac, char **av)
{
    if (ac != 3) {
        my_putstr("max argument number is 2\n");
        my_putstr("1st arg is the encode nbr\n");
        my_putstr("2nd arg is the string\n");
        return ("max argument number is 2\n");
    }
    char *str = av[2];
    int i = 0;
    int key = my_get_nbr(av[1]);
    my_put_nbr(key);
    my_putchar('\n');
    int lettre = 0;
    while (str[i]) {
        lettre = str[i];
        my_put_nbr(lettre);
        i++;
    }
    my_putchar('\n');
    return 0;
}

int main(int argc, char **argv)
{
    encode(argc, argv);
    return 0;
}
