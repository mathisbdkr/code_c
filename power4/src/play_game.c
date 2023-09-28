/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** replace
*/

#include "../include/my.h"

static int change_board(game_t *game, int place)
{
    char *tmp;
    int ligne = (lignes * 2 - 2);

    while (game->board[ligne][place] != ' ') {
        ligne -= 2;
        if (ligne < 0) {
            return 84;
        }
    }
    tmp = malloc(sizeof(char) * my_strlen(game->board[ligne]) + 1);
    my_strcpy(tmp, game->board[ligne]);
    tmp[place] = game->player_char;
    game->board[ligne] = malloc(sizeof(char) * my_strlen(tmp) + 1);
    my_strcpy(game->board[ligne], tmp);
    return 0;
}

static int input_error(game_t *game)
{
    if (game->c < '1' || game->c > colones + '0') {
        display_board(game);
        return 84;
    }
    return 0;
}

void play(game_t *game)
{
    int place = 0;
    char tmp[2];

    if (game->game_end != 0)
        return;
    tmp[0] = game->c;
    if (input_error(game) == 84) {
        return;
    }
    player_char(game);
    place = (my_getnbr(tmp) * 2) - 1;
    if (change_board(game, place) == 84) {
        display_board(game);
        return;
    }
    change_player(game);
}
