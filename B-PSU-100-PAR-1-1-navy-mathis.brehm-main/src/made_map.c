/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-mathis.brehm
** File description:
** made_map
*/

#include "../include/my.h"

void made_attack_map(struct navy_map_t *navy_map)
{
    navy_map->map_attack = malloc(sizeof(char *) * 100);
    navy_map->map_attack[0] = " |A B C D E F G H\n";
    navy_map->map_attack[1] = "-+---------------\n";
    int len = 0;
    for (int i = 2; i < 10; i++) {
        navy_map->map_attack[i] = malloc(sizeof(char) * 100);
        char *tmp = malloc(sizeof(char) * 100);
        tmp = my_strcat(int_to_string(i - 1), "|");
        for (int j = 0; j < 8; j++) {
            tmp = my_strcat(tmp, ". ");
        }
        tmp[17] = '\n';
        navy_map->map_attack[i] = tmp;
    }
}

void change_player_map(struct navy_map_t *navy_map)
{
    char **map = navy_map->map_player;
    char **data = navy_map->map_data;
    for (int i = 0; i < 4; i++) {
        int y = my_multiget(data[i][3]) - 1;
        int x = calc_depx(my_multiget(data[i][2])) + 1;
        for (int j = 0; j < my_multiget(data[i][0]) - 2; j++) {
            coefx(my_multiget(data[i][2]), my_multiget(data[i][5]), navy_map);
            coefy(my_multiget(data[i][3]), my_multiget(data[i][6]), navy_map);
            map[y][x] = data[i][0];
            x += navy_map->coefx;
            y += navy_map->coefy;
        }
    }
    navy_map->map_player = map;
}

void made_player_map(struct navy_map_t *navy_map)
{
    navy_map->map_player = malloc(sizeof(char *) * 100);
    navy_map->map_player[0] = " |A B C D E F G H\n";
    navy_map->map_player[1] = "-+---------------\n";
    int len = 0;
    for (int i = 2; i < 10; i++) {
        navy_map->map_player[i] = malloc(sizeof(char) * 100);
        char *tmp = malloc(sizeof(char) * 100);
        tmp = my_strcat(int_to_string(i - 1), "|");
        for (int j = 0; j < 8; j++) {
            tmp = my_strcat(tmp, ". ");
        }
        tmp[17] = '\n';
        navy_map->map_player[i] = tmp;
    }
    change_player_map(navy_map);
}

char **str_to_array(char *str)
{
    char **tab = malloc(sizeof(char *) * 100);
    int x = 0;
    int y = 0;
    for (int i = 0; i < my_strlen(str) + 3; i++) {
        tab[y] = malloc(sizeof(char) * 100);
        for (x = 0; x < 7; x++) {
            tab[y][x] = str[i];
            tab[y][x + 1] = '\n';
            i++;
        }
        y++;
    }
    return tab;
}

void made_map(struct navy_user_t *navy_user, struct navy_map_t *navy_map)
{
    navy_map->map_data = str_to_array(navy_user->map_data);
    made_attack_map(navy_map);
    made_player_map(navy_map);
}
