/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** game
*/

#include "../include/my.h"

int game(struct navy_user_t *navy_user)
{
    struct navy_map_t *navy_map = malloc(sizeof(struct navy_map_t));
    made_map(navy_user, navy_map);
    disp_map(navy_user, navy_map);
    navy_user->pfin = "..";
    navy_user->p1_hit = 0;
    int fin = 0;
    while (fin == 0) {
        if (navy_user->play_player == 1 && fin == 0) {
            fin = player_one(navy_user, navy_map);
        }
        if (navy_user->play_player == 2 && fin == 0) {
            fin = player_two(navy_user, navy_map);
        }
        if (navy_user->play_player == 3 && fin == 0) {
            disp_map(navy_user, navy_map);
            navy_user->play_player = 1;
        }
        usleep(100000);
    }
    return fin;
}
