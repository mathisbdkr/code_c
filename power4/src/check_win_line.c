/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** map_array
*/

#include "../include/my.h"

static int cmpt_coup_diag(game_t *game, int l, int c, char tmp)
{
    int nb_coup_left = 0;
    int nb_coup_right = 0;
    int tmp_l = l;
    int tmp_c = c;

    while (tmp_c < (colones * 2) && tmp_l >= 0 &&
    game->board[tmp_l][tmp_c] == tmp) {
        tmp_c += 2;
        tmp_l -= 2;
        nb_coup_right++;
    }
    while (c > 0 && l >= 0 && game->board[l][c] == tmp) {
        c -= 2;
        l -= 2;
        nb_coup_left++;
    }
    if (nb_coup_left < taille_ligne && nb_coup_right < taille_ligne) {
        return 0;
    }
    return 1;
}

static int cmpt_coup(game_t *game, int l, int c, char tmp)
{
    int nb_coup = 0;
    int tmp_c = c;

    while (game->board[l][tmp_c] == tmp && tmp_c < (colones * 2)) {
        tmp_c += 2;
    }
    while (game->board[l][c] == tmp && l >= 2) {
        nb_coup++;
        l -= 2;
    }
    if (nb_coup < taille_ligne) {
        nb_coup = 0;
    }
    if ((tmp_c - c) / 2 > taille_ligne - 1)
        nb_coup = (tmp_c - c) / 2;
    return nb_coup;
}

static int check_nb_coup(game_t *game, int l, int c, char tmp)
{
    int nb_coup = 0;

    nb_coup = cmpt_coup(game, l, c, tmp) + cmpt_coup_diag(game, l, c, tmp);
    if (nb_coup != 0) {
        game->game_end = 1;
        return 42;
    }
    return 0;
}

static int check_line(game_t *game, int l)
{
    int c = 1;
    int end = 0;

    while (c < (colones * 2) && end == 0) {
        if (game->board[l][c] != ' ') {
            end = check_nb_coup(game, l, c, game->board[l][c]);
        }
        c += 2;
    }
    return end;
}

int check_win_line(game_t *game)
{
    int l = (lignes * 2) - 2;
    int win = 0;

    while (l >= 0 && win == 0) {
        win = check_line(game, l);
        l -= 2;
    }
    return win;
}
