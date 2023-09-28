/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** display
*/

#include "../include/my.h"

static char *map_separator(char separator_one, char separator_two)
{
    char *str = malloc(sizeof(char) * (colones * 2 + 3));
    int i = 1;

    str[0] = separator_two;
    while (i < (colones * 2)) {
        str[i] = separator_one;
        str[i + 1] = separator_two;
        i += 2;
    }
    str[i] = '\n';
    str[i + 1] = '\0';
    return str;
}

static void made_player_map(game_t *game)
{
    game->board = malloc(sizeof(char *) * (lignes * 2));
    for (int i = 0; i < (lignes * 2 - 1); i += 2) {
        game->board[i] = map_separator(' ', '|');
        game->board[i + 1] = map_separator('-', '-');
    }
}

void init_struct(game_t *game)
{
    game->game_end = 0;
    game->player = 1;
    game->player_one_char = 'O';
    game->player_two_char = 'X';
    made_player_map(game);
}
