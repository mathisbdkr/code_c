/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** fin
*/

#include "../include/my.h"

int end(struct navy_user_t *navy_user, struct navy_map_t *navy_map)
{
    if (navy_user->p1_hit == 14) {
        my_putstr("\033[0m");
        disp_map(navy_user, navy_map);
        my_putstr("\nI won\n");
        return 43;
    }
    if (navy_user->nb_hit == 14) {
        my_putstr("\033[0m");
        disp_map(navy_user, navy_map);
        my_putstr("\nEnemy won\n");
        return 43;
    }
}
