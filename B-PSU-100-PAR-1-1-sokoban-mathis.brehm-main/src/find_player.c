/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-mathis.brehm
** File description:
** find_player
*/

#include "../include/sokoban.h"

int find_player2(struct sokoban_t *soko, int i)
{
    for (int j = 0; j <= my_strlen(soko->map[i]); j++) {
        if (soko->map[i][j] == 'P') {
            soko->px = j;
            soko->py = i;
            return 24;
        }
    }
}

int find_player(struct sokoban_t *soko)
{
    for (int i = 0; i <= soko->nbl; i++) {
        if (find_player2(soko, i) == 24)
            return 0;
    }
}
