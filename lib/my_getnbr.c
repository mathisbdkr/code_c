/*
** EPITECH PROJECT, 2022
** My_getnbr.c
** File description:
** task05 day04
*/
char *my_strdup(char const *src);

int my_strlen(char const *src);

int check_nbr(char c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}

int my_getnbr(char const *str)
{
    char *new_str = my_strdup(str);
    int a = 0;
    int b;
    int resultat = 0;
    if (check_nbr(new_str[0]) != 1 && new_str[0] != '-') {
        return 0;
    }
    while (check_nbr(new_str[a]) != 1) {
        a++;
        } b = a;
    while (check_nbr(new_str[a]) == 1) {
        resultat = ((resultat * 10) + new_str[a] - '0');
        a++;
    }
    if (new_str[b - 1] == '-') {
        resultat = resultat * -1;
    }
    return resultat;
}
