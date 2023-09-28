/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <fcntl.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <ncurses/ncurses.h>

enum{RIEN, GREEN, BLUE, RED, YELLOW};

#define player_one COLOR_PAIR(GREEN)
#define player_two COLOR_PAIR(BLUE)
#define alerte COLOR_PAIR(RED)
#define victoir COLOR_PAIR(YELLOW)
#define enter 10
#define space 32
#define taille_ligne 2

//default 7, max 9 colones
#define colones 7

//default 6, no max
#define lignes 6

static char *const txt_win[3] = {
    "no one win this game",
    "Player one win this game",
    "Player two win this game"
};

typedef struct game_s {
    char **board;
    char c;
    int player;
    int game_end;
    char player_one_char;
    char player_two_char;
    char player_char;
} game_t;

void my_putstr(char *str);
int my_strlen(char const *str);
void my_putchar(char c);
void my_put_nbr(int nb);
int my_getnbr(char *str);
int my_intlen(int *nb);
char *my_strcpy(char* dest, char* src);
char *my_strcat(char* src, char* dest);
char* int_to_string(int n);

void init_struct(game_t *game);
void player_char(game_t *game);
void change_player(game_t *game);
void display_player(game_t *game);
void display_board(game_t *game);

void play(game_t *game);
int check_all_win(game_t *game);
int check_win_line(game_t *game);

#endif /* !MY_H_ */
