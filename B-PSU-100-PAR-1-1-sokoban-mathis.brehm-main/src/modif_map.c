/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-mathis.brehm
** File description:
** modif_map
*/

#include "../include/sokoban.h"

char* replace(char *str)
{
    int i;
    int len = my_strlen(str);
    int k = 0;
    while (str[k] != '\\' && str[k + 1] != 'n') {
        k++;
    }
    for (int j = 0; j < 2; j++) {
        for (i = k; i < len - 1; i++) {
            str[i] = str[i + 1];
        }
    }
    k = 0;
    while (str[k] != 'n') {
        k++;
    }
    str[k] = '\n';
    str[len - 1] = '\0';
    return str;
}

char *modif_map(char *buf)
{
    int i = 0;int nb = 0;
    for (int i = 0; buf[i] != '\0'; i++) {
        if (buf[i] == '\\' && buf[i + 1] == '\\' && buf[i + 2] == 'n') {
            nb++;
        }
    }
    if (nb == 0)
        return buf;
    char *tes = replace(buf);
    while (i < nb - 1) {
        tes = replace(buf);
        i++;
    }
    while (tes[my_strlen(tes) - 1] == '\n') {
        tes[my_strlen(tes) - 1] = '\0';
    }
    tes[my_strlen(tes)] = '\n';
    tes[my_strlen(tes)] = '\0';
    return tes;
}
