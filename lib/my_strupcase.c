/*
** EPITECH PROJECT, 2022
** My_strupcase
** File description:
** Task08 day06
*/

char *my_strupcase(char *str)
{
    int length = 0;
    int i = 0;

    while (str[length] != '\0') {
        length++;
    }

    while (i < length) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        } else {
            str[i] = str[i];
        }
        i++;
    }
    return str;
}
