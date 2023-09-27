/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-mathis.brehm
** File description:
** game
*/

#include "../include/sokoban.h"

int action(struct sokoban_t *soko, int key)
{
    if (key == KEY_UP)
        moove_player(soko, -1, 0);
    if (key == KEY_DOWN)
        moove_player(soko, 1, 0);
    if (key == KEY_RIGHT)
        moove_player(soko, 0, 1);
    if (key == KEY_LEFT)
        moove_player(soko, 0, -1);
    if (key == 32) {
        return 32;
    }
    return 0;
}

void size_term(struct sokoban_t *soko)
{
    int x, y;
    getmaxyx(stdscr, y, x);
    while (y <= soko->nbl || soko->largest_line >= x) {
        refresh();
        int sx = x;
        int sy = y;
        mvaddstr(y / 2, (x / 2) - 9, " display too small");
        mvaddstr((y / 2) + 1, (x / 2) - 7, " make it biger");
        getmaxyx(stdscr, y, x);
        if (x != sx || y != sy)
            clear();
    }
}

void game(struct sokoban_t *soko)
{
    initscr();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    char c = 0;
    find_player(soko);
    find_place(soko);
    while (c != 32 && soko->loose != 1 && soko->win != 1) {
        refresh();
        check_box(soko);
        if (soko->loose != 1) {
            size_term(soko);
            my_print_tab(soko->map, soko);
            c = action(soko, getch());
        }
        clear();
    }
    endwin();
}
