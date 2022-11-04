/*
** EPITECH PROJECT, 2022
** My_is_prime
** File description:
** task06 day05
*/

int my_is_prime(int nb)
{
        int half = 2;
        int is_modulo = 0;

        if (nb == 2) {
            is_modulo = 1;
            return is_modulo;
        }

        while (half < nb) {
            if (nb % half != 0 && nb != 2) {
                is_modulo = 1;
                half++;
            } else {
                is_modulo = 0;
                return is_modulo;
            }
        }
        return is_modulo;
}
