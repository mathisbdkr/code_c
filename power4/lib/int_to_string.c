/*
** EPITECH PROJECT, 2023
** power4
** File description:
** int_to_string
*/

#include "../include/my.h"

char* int_to_string(int n)
{
    char* str = malloc(10000 * sizeof(char));
    int i = 0;

    if (n == 0) {
        str[0] = '0';
        i++;
    }
    while (n > 0) {
        str[i++] = n % 10 + '0';
        n /= 10;
    }
    str[i] = '\0';
    for (int j = 0; j < i / 2; j++) {
        char c = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = c;
    }
    return str;
}
