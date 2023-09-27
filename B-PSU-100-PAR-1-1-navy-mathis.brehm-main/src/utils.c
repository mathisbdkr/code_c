/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** utils
*/

#include "../include/my.h"

int check_msg(char *msg)
{
    if (msg[0] >= 'A' && msg[0] <= 'H' && msg[1] >= '0' && msg[1] <= '8') {
        return 0;
    } else {
        my_putstr("\033[0mwrong position");
        return 1;
    }
    return 0;
}

void disp_hit_msg(struct navy_map_t *navy_map, struct navy_user_t *navy_user)
{
    int x = navy_user->posi[0] - 64;
    int y = navy_user->posi[1] - 48;
    rec(navy_map);
    if (navy_map->rx == 26 && navy_map->ry == 1) {
        my_putstr("\033[0mhit\n");
        navy_user->p1_hit++;
    }
    if (navy_map->rx == 26 && navy_map->ry == 2) {
        my_putstr("\033[0mmissed\n");
    }
    change_map(navy_user, navy_map, x, y);
}

void disp_hit(struct navy_map_t *navy_map, int pid)
{
    char *posi = malloc(sizeof(char) * 2);
    posi[0] = navy_map->rx + 64;
    posi[1] = navy_map->ry + 48;
    if (navy_map->hit == 1) {
        my_putstr("\033[0m");
        write(1, posi, 2);
        my_putstr("\033[0m: hit\n");
        send_sig(pid, "Z1");
    }
    if (navy_map->hit == 0) {
        my_putstr("\033[0m");
        write(1, posi, 2);
        my_putstr("\033[0m: missed\n");
        send_sig(pid, "Z2");
    }
}
