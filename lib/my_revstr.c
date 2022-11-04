/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** task03 day06
*/

char *my_revstr(char *str)
{
    int last = 0;
    int first = 0;
    char verre;

    while (str[last] != '\0') {
        last++;
    }
    last--;

    while (first < last) {
        verre = str[first];
        str[first] = str[last];
        str[last] = verre;
        first++;
        last--;
    }
    return str;
}
