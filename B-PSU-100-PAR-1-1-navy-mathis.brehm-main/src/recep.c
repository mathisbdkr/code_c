/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** recep
*/

#include "../include/my.h"

void signal_handler(int signal)
{
    if (signal == SIGUSR1)
        value_received++;
    else {
        value_received = 100;
    }
}

int xy_recp(int pass, struct navy_map_t *navy_map)
{
    if (value_received < 100 && pass == 0) {
        navy_map->rx = value_received;
    }
    if (value_received < 100 && pass > 0) {
        navy_map->ry = value_received;
    }
    if (value_received >= 100) {
        value_received = 0;
        pass++;
    }
    return pass;
}

void rec(struct navy_map_t *navy_map)
{
    signal(SIGUSR1, signal_handler);
    signal(SIGUSR2, signal_handler);
    navy_map->rx = 0;
    navy_map->ry = 0;
    int pass = 0;
    int fin = 0;
    while (pass != 2) {
        pause();
        pass = xy_recp(pass, navy_map);
    }
    navy_map->ry++;
}
