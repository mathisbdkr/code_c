/*
** EPITECH PROJECT, 2022
** My_strlowcase
** File description:
** Task09 day06
*/

char *my_strlowcase(char *str)
{
    int length = 0;
    int i = 0;

    while (str[length] != '\0') {
        length++;
    }

    while (i < length) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        } else {
            str[i] = str[i];
        }
        i++;
    }
    return str;
}
