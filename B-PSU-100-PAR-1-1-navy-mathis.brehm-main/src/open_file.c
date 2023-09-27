/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** open_file
*/

#include "../include/my.h"

char *open_file(const char *filepath)
{
    FILE* file = fopen(filepath, "r");
    char* buffer = NULL;
    size_t buffer_size = 0;
    ssize_t line_size;
    char *map = malloc(sizeof(char) * 100);
    map[0] = '\0';
    while ((line_size = getline(&buffer, &buffer_size, file)) != -1) {
        char *tmp = map;
        map = my_strcat(tmp, buffer);
    }
    map = my_strcat(map, "\0");
    fclose(file);
    return map;
}
