/*
** EPITECH PROJECT, 2022
** My_strncpy
** File description:
** task02 day06
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int len = 0;
    int i = 0;

    while (src[len] != '\0') {
        len++;
    }
    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    if (n > len) {
        dest[i] = '\0';
    }
    return dest;
}
