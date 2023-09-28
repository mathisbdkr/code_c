/*
** EPITECH PROJECT, 2022
** puissance 4
** File description:
** main
*/

#include "../include/my.h"

static void end_msg(game_t *game)
{
    char c = 0;

    change_player(game);
    clear();
    while (c != enter) {
        clear();
        attron(victoir);
        printw("%s\n\n", txt_win[game->player]);
        attroff(victoir);
        printw("Press enter to close");
        refresh();
        c = getch();
    }
}

static void init_ncurse_window(void)
{
    initscr();
    start_color();
    curs_set(FALSE);
    init_pair(RED, COLOR_RED, COLOR_BLACK);
    init_pair(YELLOW, COLOR_YELLOW, COLOR_BLACK);
    init_pair(GREEN, COLOR_GREEN, COLOR_BLACK);
    init_pair(BLUE, COLOR_BLUE, COLOR_BLACK);
}

static int launch_game(game_t *game)
{
    while (game->game_end == 0) {
        clear();
        display_player(game);
        game->c = getch();
        attroff(player_one);
        attroff(player_two);
        if (getch() != enter) {
            launch_game(game);
        }
        play(game);
        if (check_all_win(game) == 42) {
            break;
        }
        refresh();
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc > 1 || argv[0][0] == '\0')
        return 84;
    game_t *game = malloc(sizeof(game_t));
    init_struct(game);
    init_ncurse_window();

    launch_game(game);
    end_msg(game);

    endwin();
    return 0;
}
