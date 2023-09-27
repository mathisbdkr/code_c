/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** main
*/

#include "../include/my.h"

int help(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h'
    && av[1][2] == '\0' && ac == 2) {
        my_putstr("USAGE\n");
        my_putstr("     ./navy [first_player_pid] navy_positions\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("     first_player_pid: only for the 2nd player");
        my_putstr(". pid of the first player.\n");
        my_putstr("     navy_positions: file representing the");
        my_putstr(" positions of the ships.\n");
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 3) {
        return 84;
    }
    if (help(argc, argv) == 1)
        return 0;
    if (error_management(argc, argv) == 84 ||
    check_data(open_file(argv[argc - 1])) == 84)
        return 84;
    int win = game_init(argc, argv);
    if (win == 1)
        return 0;
    if (win == 2)
        return 1;
    return 0;
}
