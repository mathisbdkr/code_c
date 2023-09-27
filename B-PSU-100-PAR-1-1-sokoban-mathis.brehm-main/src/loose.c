/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-mathis.brehm
** File description:
** loose
*/

#include "../include/sokoban.h"

int check_pos(struct sokoban_t *soko, int i, int j, int loose)
{
    loose = 0;
    if (soko->map[i][j] == 'X' && soko->map[i][j + 1] == '#' &&
    soko->map[i - 1][j] == '#')
        loose++;
    if (soko->map[i][j] == 'X' && soko->map[i][j - 1] == '#' &&
    soko->map[i - 1][j] == '#')
        loose++;
    if (soko->map[i][j] == 'X' && soko->map[i][j + 1] == '#' &&
    soko->map[i + 1][j] == '#')
        loose++;
    if (soko->map[i][j] == 'X' && soko->map[i][j - 1] == '#' &&
    soko->map[i + 1][j] == '#')
        loose++;
    return loose;
}

int check_box(struct sokoban_t *soko)
{
    soko->l = 0;
    int loose = 0;
    int **pos = malloc(sizeof(int *) * soko->nb_place);
    for (int i = 0; i <= soko->nbl; i++) {
        for (int j = 0; soko->map[i][j]; j++) {
            loose += check_pos(soko, i, j, loose);
        }
    }
    if (loose == soko->nb_place) {
        soko->loose = 1;
    }
}
