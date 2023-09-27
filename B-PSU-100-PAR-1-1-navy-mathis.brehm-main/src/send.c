/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** send
*/

#include "../include/my.h"

void send_sig(int pid, char *num)
{
    for (int x = 0; x < num[0] - 64; x++) {
        kill(pid, SIGUSR1);
        usleep(5000);
    }
    kill(pid, SIGUSR2);
    for (int x = 0; x < num[1] - 48; x++) {
        kill(pid, SIGUSR1);
        usleep(5000);
    }
    kill(pid, SIGUSR2);
}
