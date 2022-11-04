/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** lib
*/
int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int length_dest = my_strlen(dest);
    int length_src = my_strlen(src);
    int length_all = length_dest + length_src;
    int i = 0;

    while (length_dest < length_all) {
        dest[length_dest] = src[i];
        i++;
        length_dest++;
    }
    dest[length_dest] = '\0';

    return dest;
}
