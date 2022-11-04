/*
** EPITECH PROJECT, 2022
** my_putstr_error.c
** File description:
** errrreeeeuruur
*/

void my_putchar_error(char c);

void my_putstr_error(char *str)
{
    int i = 0;
    while (str[i]) {
        my_putchar_error(str[i]);
        i++;
    }
}
