/*
** EPITECH PROJECT, 2022
** my_compute_power_rec
** File description:
** Write an recursive function
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    return nb * my_compute_power_rec(nb, p - 1);
}
