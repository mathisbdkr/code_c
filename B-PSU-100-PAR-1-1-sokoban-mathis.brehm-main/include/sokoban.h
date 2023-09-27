/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_

    #include <fcntl.h>
    #include <unistd.h>
    #include <ncurses.h>
    #include <sys/stat.h>
    #include <stdlib.h>

struct sokoban_t {
    int win;
    int loose;
    int nbl;
    int px;
    int py;
    int largest_line;
    char **map;
    int nb_place;
    int **pos;
    int l;
};

//open the file and save the map as a array on the structure
void made_map(char *path, struct sokoban_t *soko);
char *modif_map(char *buf);

//call function to move player display map ect..
void game(struct sokoban_t *soko);

//display the array (map) on the screen
void my_print_tab(char **tab, struct sokoban_t *soko);

//find and save position
int find_player(struct sokoban_t *soko);
int find_place(struct sokoban_t *soko);

//move player and box on the map
void moove_player(struct sokoban_t *soko, int y, int x);

//call elementary function on the folder lib
void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char *str);

#endif /* !SOKOBAN_H_ */
