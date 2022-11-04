/*
** EPITECH PROJECT, 2022
** my_str_isprint
** File description:
** task16 day06
*/

int my_str_isprintable(char const *str)
{
    int str_length = 0;
    int s = 0;
    int return_value = 1;

    while (str[str_length] != '\0') {
        str_length++;
    }
    str_length--;

    while (s <= str_length) {
        if (str[s] > 31 && str[s] < 127) {
            return_value = 1;
            s++;
        } else {
            return_value = 0;
            return return_value;
        }
    }
    return return_value;
}
