/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** task03
*/


int my_strlen_rush(char const *s)
{
    int i = 0;
    int count = 0;

    while (s[i]) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            count++;
        }
        i++;
    }
    return (count);
}
