/*
** EPITECH PROJECT, 2022
** code.c
** File description:
** this programe take a string in parameter and change every leter into number
*/

#include "include/my.h"

char* encode(int ac, char **av)
{
    char *str = av[2];
    int i = 0;
    int key = my_getnbr(av[1]);
    int lettre = 0;
    key = (((key * key) * 3.14159) / 9) * 42; 
    while (str[i]) {
        if (str[i] == ' ') {
            my_putstr(" |");
            i++;
        }
        lettre = str[i];
        my_put_nbr(lettre * key);
        my_putchar('|');
        i++;
    }
    my_putchar('\n');
    return 0;
}

int check_argc(int ac)
{
    if (ac != 3) {
        my_putstr("max argument number is 2\n");
        my_putstr("1st arg is the encode nbr\n");
        my_putstr("2nd arg is the string\n");
        return 1;
    }
}

int main(int argc, char **argv)
{
    if (check_argc(argc) == 1)
        return 0;
    encode(argc, argv);
    return 0;
}
