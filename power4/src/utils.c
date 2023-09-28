/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-1-BSQ-mathis.brehm
** File description:
** valid
*/

#include "../include/my.h"

void display_player(game_t *game)
{
    display_board(game);
    if (game->player == 1) {
        attron(player_one);
        printw("\n");
        printw("Player one : ");
    } else {
        attron(player_two);
        printw("\n");
        printw("Player two : ");
    }
}

void change_player(game_t *game)
{
    if (game->player == 1) {
        game->player = 2;
    } else if (game->player == 2) {
        game->player = 1;
    } else {
        game->player = 0;
    }
}

void player_char(game_t *game)
{
    if (game->player == 1) {
        game->player_char = game->player_one_char;
        return;
    }
    if (game->player == 2) {
        game->player_char = game->player_two_char;
        return;
    }
}

static void display_board_char(game_t *game, int i, int j)
{
    if (game->board[i][j] == game->player_one_char) {
        attron(player_one);
        printw("%c", game->board[i][j]);
        attroff(player_one);
    } else if (game->board[i][j] == game->player_two_char) {
        attron(player_two);
        printw("%c", game->board[i][j]);
        attroff(player_two);
    } else {
        printw("%c", game->board[i][j]);
    }
}

void display_board(game_t *game)
{
    char *str = malloc(sizeof(char) * (colones * 2 + 3));
    char nb = '1';
    int i = 1;

    str[0] = '|';
    while (i < (colones * 2)) {
        str[i] = nb;
        str[i + 1] = '|';
        i += 2;
        nb += 1;
    }
    str[i] = '\n';
    str[i + 1] = '\0';
    clear();
    printw("%s", str);
    for (int i = 0; i < (lignes * 2); i++) {
        for (int j = 0; j < (colones * 2 + 2); j++) {
            display_board_char(game, i, j);
        }
    }
}
