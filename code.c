/*
** EPITECH PROJECT, 2022
** code.c
** File description:
** this programe take a string in parameter and change every leter into number
*/

#include "include/my.h"

char* encode(int ac, char const **av)
{
    if (ac != 3) {
        my_putstr("max argument number is 2\n");
        my_putstr("1st arg is the encode nbr\n");
        my_putstr("2nd arg is the string\n")
        return ("max argument number is 2\n");
    }
}

void main(int argc, char const **argv)
{
    encode(argc, argv);
}
