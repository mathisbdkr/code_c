/*
** EPITECH PROJECT, 2022
** My_find_prime_sup
** File description:
** task07 day05
*/
int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) == 0) {
        nb++;
    }
    return nb;
}
