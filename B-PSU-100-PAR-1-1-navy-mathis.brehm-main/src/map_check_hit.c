/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** map_check_hit
*/

#include "../include/my.h"

int check_hit(struct navy_user_t *navy_user, struct navy_map_t *navy_map)
{
    int x = calc_depx(navy_map->rx + 1) + 1;
    int y = navy_map->ry + 1;
    char posi = navy_map->map_player[y][x];
    usleep(100);
    if (posi >= '1' && posi <= '5') {
        navy_map->map_player[y][x] = 'x';
        navy_user->nb_hit++;
        navy_map->hit = 1;
        return 1;
    }
    if (posi == '.') {
        navy_map->map_player[y][x] = 'o';
        navy_map->hit = 0;
        return 2;
    }
    if (posi == 'o' || posi == 'x') {
        navy_map->hit = 0;
        return 2;
    }
}

void change_map(struct navy_user_t *navy_user,struct navy_map_t *navy_map,
    int x, int y)
{
    x = calc_depx(x + 1) + 1;
    y = y + 1;
    if (navy_map->rx == 26 && navy_map->ry == 1) {
        navy_map->map_attack[y][x] = 'X';
    }
    if (navy_map->rx == 26 && navy_map->ry == 2) {
        navy_map->map_attack[y][x] = 'o';
    }
}
