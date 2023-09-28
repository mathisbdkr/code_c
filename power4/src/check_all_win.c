/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-mathis.brehm
** File description:
** algo
*/

#include "../include/my.h"

static int check_board(game_t *game)
{
    int l = 0;

    for (int c = 1; c < (colones * 2); c += 2) {
        if (game->board[l][c] == ' ') {
            return 0;
        }
    }
    game->player = 0;
    return 42;
}

int check_all_win(game_t *game)
{
    if (check_win_line(game) == 42 || check_board(game) == 42) {
        return 42;
    }
    return 0;
}
