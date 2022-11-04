/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** task01 day06
*/
char *my_strdup(char const *src);

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
