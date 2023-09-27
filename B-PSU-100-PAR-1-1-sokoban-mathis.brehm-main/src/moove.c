/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-mathis.brehm
** File description:
** moove_player
*/

#include "../include/sokoban.h"

void place_pos(struct sokoban_t *soko)
{
    int win = 0;
    for (int i = 0; i < soko->nb_place; i++) {
        if (soko->map[soko->pos[i][0]][soko->pos[i][1]] == ' ')
            soko->map[soko->pos[i][0]][soko->pos[i][1]] = 'O';
        if (soko->map[soko->pos[i][0]][soko->pos[i][1]] == 'X')
            win++;
    }
    if (win == soko->nb_place)
        soko->win = 1;
}

void moove_box(struct sokoban_t *soko, int y, int x)
{
    if (soko->map[soko->py + y][soko->px + x] == 'X') {
        if (soko->map[soko->py + (y * 2)][soko->px + (x * 2)] == ' ' ||
        soko->map[soko->py + (y * 2)][soko->px + (x * 2)] == 'O') {
            soko->map[soko->py + (y * 2)][soko->px + (x * 2)] = 'X';
            soko->map[soko->py][soko->px] = ' ';
            soko->map[soko->py + y][soko->px + x] = 'P';
            soko->py += y;
            soko->px += x;
        }
    }
}

void moove_player(struct sokoban_t *soko, int y, int x)
{
    if (soko->map[soko->py + y][soko->px + x] == ' ' ||
    soko->map[soko->py + y][soko->px + x] == 'O') {
        soko->map[soko->py][soko->px] = ' ';
        soko->map[soko->py + y][soko->px + x] = 'P';
        soko->py += y;
        soko->px += x;
        place_pos(soko);
        return;
    }
    moove_box(soko, y, x);
    place_pos(soko);
}
