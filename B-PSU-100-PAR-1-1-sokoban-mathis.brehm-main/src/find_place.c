/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-mathis.brehm
** File description:
** find_place
*/

#include "../include/sokoban.h"

int find_place2(struct sokoban_t *soko, int i)
{
    for (int j = 0; j <= my_strlen(soko->map[i]); j++) {
        if (soko->map[i][j] == 'O') {
            soko->pos[soko->l] = malloc(sizeof(int) * 3);
            soko->pos[soko->l][0] = i;
            soko->pos[soko->l][1] = j;
            soko->pos[soko->l][2] = '\0';
            soko->l++;
        }
    }
    return 0;
}

int find_place(struct sokoban_t *soko)
{
    soko->l = 0;
    soko->pos = malloc(sizeof(int *) * soko->nb_place);
    for (int i = 0; i <= soko->nbl; i++) {
        find_place2(soko, i);
    }
}
