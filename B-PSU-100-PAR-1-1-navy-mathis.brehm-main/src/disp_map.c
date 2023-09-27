/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** disp_map
*/

#include "../include/my.h"

int calc_depx(int x)
{
    x -= 2;
    if (x == 1)
        return 3;
    x += x - 1;
    x += 2;
    return x;
}

void coefx(int x1, int x2, struct navy_map_t *navy_map)
{
    int coef = (x2 - x1) * 2;
    if (coef > 0)
        navy_map->coefx = 2;
    if (coef < 0)
        navy_map->coefx = -2;
    if (coef == 0)
        navy_map->coefx = 0;
}

void coefy(int y1, int y2, struct navy_map_t *navy_map)
{
    int coef = y2 - y1;
    if (coef > 0)
        navy_map->coefy = 1;
    if (coef < 0)
        navy_map->coefy = -1;
    if (coef == 0)
        navy_map->coefy = 0;
}

void disp_map(struct navy_user_t *navy_user, struct navy_map_t *navy_map)
{
    my_putstr("\nmy positions:\n");
    my_print_tab(navy_map->map_player);
    my_putstr("\nenemy's positions:\n");
    my_print_tab(navy_map->map_attack);
}
