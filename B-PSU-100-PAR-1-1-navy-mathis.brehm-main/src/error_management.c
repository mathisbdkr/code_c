/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** error_management
*/

#include "../include/my.h"

int check_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    close(fd);
    if (fd == 3) {
        return 1;
    }
    return 0;
}

int check_pid(char *pid)
{
    for (int i = 0; pid[i]; i++) {
        if (pid[i] < '0' || pid[i] > '9')
            return 84;
    }
    return 0;
}

int error_management(int ac, char **av)
{
    if (!check_file(av[1]) && !check_file(av[2]))
        return 84;
    if (ac == 3) {
        if (kill(my_getnbr(av[1]), 0) != 0)
            return 84;
    }
}
