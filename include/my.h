/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** lib for code
*/

#include <stdlib.h>

#ifndef MY_H
    #define MY_H

int my_compyte_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
void my_getnbr(char const *str);
int my_isneg(int n);
void my_putchar(char c);
int my_is_prime(int nb);
void my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *adresseC, int *adresseD);
char *my_strdup(char const *src);
void my_putchar_error(char c);
void my_putstr_error(char *ptr);
int my_strlen_rush(char const *s);

#endif /* MY_H */
