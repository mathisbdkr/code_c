/*
** EPITECH PROJECT, 2022
** My_str_to_word_array
** File description:
** Task04 day08
*/
#include <stdlib.h>

int my_strlen(char const *str);

int my_char_isan(char sw)
{
    if ((sw >= 'A' && sw <= 'Z') || (sw >= 'a' && sw <= 'z')) {
        return 1;
    }
    if (sw >= '1' && sw <= '9') {
        return 1;
    }
    return 0;
}

int new_array_imp(char *new_str, char **new_array, int a)
{
    if (my_char_isan(new_str[0]) == 1) {
        new_array[a] = new_str;
        a++;
    }
    return a;
}

char **my_str_to_word_array(char const *str)
{
    int w = 0;
    int s = 0;
    int a = 0;
    int str_length = my_strlen(str);
    char *new_str = malloc(sizeof(char) * str_length + 1);
    char **new_array = malloc(sizeof(char *) * str_length + 1);
    while (w <= str_length) {
        if (my_char_isan(str[w]) == 1) {
            new_str[s] = str[w];
            w++;
            s++;
        } else {
            a = new_array_imp(new_str, new_array, a);
            w++;
            s = 0;
            new_str = malloc(sizeof(char) * str_length + 1);
        }
    }
    return new_array;
}
