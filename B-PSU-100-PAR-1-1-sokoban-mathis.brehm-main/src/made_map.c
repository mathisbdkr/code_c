/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-mathis.brehm
** File description:
** made_map
*/

#include "../include/sokoban.h"

int len_nbm(char *str)
{
    int nbm = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            nbm++;
        }
    }
    return nbm + 1;
}

int len_mot(char *str, int i)
{
    int nb = i;
    while (str[i] != '\n') {
        i++;
    }
    return i - nb;
}

char **my_str_to_word_array(char *str, struct sokoban_t *soko)
{
    int i = 0;int z = 0;int y = 0;
    int nb_lines = len_nbm(str);
    char **test = malloc(sizeof(char *) * nb_lines);
    while (str[i]) {
        int len = len_mot(str, i);
        if (len > soko->largest_line)
            soko->largest_line = len;
        test[z] = malloc(sizeof(char) * (len + 2));
        while (len > 0) {
            test[z][y] = str[i];
            y++;
            i++;
            len--;
        }
        test[z][y] = '\n';
        test[z][y + 1] = '\0';
        i++;y = 0;z++;
    }
    soko->nbl = z - 1;
    return test;
}

void check_carac(char *str)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] != '\n' && str[i] != ' ' && str[i] != '#'
        && str[i] != 'O' && str[i] != 'X' && str[i] != 'P' && str[i] != '\0')
            exit(84);
    }
}

void made_map(char *path, struct sokoban_t *soko)
{
    struct stat sb;
    int type = stat(path, &sb);
    int fd = open(path, O_RDONLY);
    char *buf = malloc(sizeof(char) * sb.st_size * 2);
    read(fd, buf, sb.st_size);
    close(fd);
    buf[sb.st_size] = '\n';
    buf[sb.st_size + 1] = '\0';
    buf = modif_map(buf);
    check_carac(buf);
    int nb = 0;
    for (int i = 0; buf[i]; i++) {
        if (buf[i] == 'O')
            nb++;
    }
    soko->nb_place = nb;
    soko->map = my_str_to_word_array(buf, soko);
}
