/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** main
*/
#include "../include/sokoban.h"

int check_file(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    close(fd);
    if (fd == 3) {
        return 0;
    }
    return 84;
}

int info(char *argv, int ac)
{
    if (ac != 2)
        return 84;
    if (argv[0] == '-' && argv[1] == 'h') {
        my_putstr("USAGE\n");
        my_putstr("     ./my_sokoban map\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("     map file representing ");
        my_putstr("the warehouse map, containing '#' for walls,\n");
        my_putstr("          'P' for the player, 'X' for boxes");
        my_putstr(" and 'O' for storage locations\n");
        return 1;
    }
    return 84;
}

int main(int argc, char **argv)
{
    if (info(argv[1], argc) == 1) {
        return 0;
    }
    if (argc < 2 || check_file(argv[1]))
        return 84;
    struct sokoban_t *soko = malloc(sizeof(struct sokoban_t));
    soko->largest_line = 0;
    soko->loose = 0;
    soko->win = 0;
    made_map(argv[1], soko);
    game(soko);
    if (soko->loose == 1)
        return 1;
}
