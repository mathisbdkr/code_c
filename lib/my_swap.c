/*
** EPITECH PROJECT, 2022
** my_swap
** File description:
** task01
*/
void my_swap(int *adresseC, int *adresseD)
{
    int verre1 = *adresseC;
    int verre2 = *adresseD;

    *adresseC = verre2;
    *adresseD = verre1;
}
