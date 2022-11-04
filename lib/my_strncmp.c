/*
** EPITECH PROJECT, 2022
** My_strncmp
** File description:
** task07 day06
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (i < n && i < n) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}
