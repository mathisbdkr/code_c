/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** player_one
*/

#include "../include/my.h"

void player_one_input(struct navy_user_t *navy_user, char input[], int check,
    struct navy_map_t *navy_map)
{
    if (check == 0) {
        send_sig(navy_user->pid_p2, input);
        navy_user->posi = input;
        navy_user->play_player = 2;
        my_putstr("\033[0m");
        my_putchar(input[0]);
        my_putchar(input[1]);
        my_putstr(": ");
        disp_hit_msg(navy_map, navy_user);
    }
}

void player_two_getpos(struct navy_user_t *navy_user,
    struct navy_map_t *navy_map)
{
    my_putstr("\033[0m\nwaiting for enemy's attack...\n");
    rec(navy_map);
    int hit = 0;
    hit = check_hit(navy_user, navy_map);
    navy_user->play_player = 2;
    disp_hit(navy_map, navy_user->pid_p1);
}

int player_one(struct navy_user_t *navy_user, struct navy_map_t *navy_map)
{
    char input[2];
    if (navy_user->player == 1) {
        my_putstr("\033[0m\nattack: \033[3m");
        while (read(STDIN_FILENO, &input, 2) > 1) {
            usleep(1000);
            int check = check_msg(input);
            player_one_input(navy_user, input, check, navy_map);
        }
    }
    if (navy_user->player == 2) {
        player_two_getpos(navy_user, navy_map);
    }
    int fin = end(navy_user, navy_map);
    if (fin == 42) {
        return 1;
    } else if (fin == 43) {
        return 2;
    }
    usleep(1000);
    return 0;
}
