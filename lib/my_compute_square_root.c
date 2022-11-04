/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** Write a function that returns the square root
*/

int my_compute_square_root(int nb)
{
    int carre = 0;
    int res = 0;
    while (res < nb) {
        carre++;
        res = carre * carre;
    }
    if (res > nb) {
        return 0;
    }
    return carre;
}
