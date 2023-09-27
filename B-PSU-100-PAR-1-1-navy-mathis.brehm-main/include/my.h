/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <signal.h>
    #include <fcntl.h>
    #include <string.h>
    #include <ucontext.h>
    #include <time.h>

extern int value_received;

struct navy_map_t {
    int x;
    int coefx;
    char **map_player;
    int coefy;
    char **map_data;
    char **map_attack;
    int rx;
    int ry;
    int hit;
};

struct navy_user_t {
    pid_t pid_p1;
    pid_t pid_p2;
    char *map_data;
    int player;
    int play_player;
    int sig;
    char *posi;
    char *pfin;
    int nb_hit;
    int p1_hit;
};

char *open_file(const char *filepath);
int error_management(int ac, char **av);
int check_data(char *str);

int game_init(int ac, char **av);

int game(struct navy_user_t *navy_user);

char **str_to_array(char *str);
int calc_depx(int x);
void coefy(int y1, int y2, struct navy_map_t *navy_map);
void coefx(int x1, int x2, struct navy_map_t *navy_map);
void made_map(struct navy_user_t *navy_user, struct navy_map_t *navy_map);
void disp_map(struct navy_user_t *navy_user, struct navy_map_t *navy_map);

int check_msg(char *msg);

void disp_hit(struct navy_map_t *navy_map, int pid);
void send_sig(int pid, char *num);
void rec(struct navy_map_t *navy_map);

int player_one(struct navy_user_t *navy_user, struct navy_map_t *navy_map);
int player_two(struct navy_user_t *navy_user, struct navy_map_t *navy_map);

int check_hit(struct navy_user_t *navy_user, struct navy_map_t *navy_map);
void disp_hit_msg(struct navy_map_t *navy_map, struct navy_user_t *navy_user);
void change_map(struct navy_user_t *navy_user,struct navy_map_t *navy_map,
    int x, int y);

int end(struct navy_user_t *navy_user, struct navy_map_t *navy_map);

void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char *str);
void my_put_nbr(int nb);
int my_getnbr(char *str);
int my_space_len(char *str);
char* int_to_string(int n);
int my_strcmp(const char* s1, const char* s2);
char *my_strcat(char* src, char* dest);
char *my_stradd(char *src, char *str);
void my_print_tab(char **tab);
int my_multiget(char c);

#endif /* !MY_H_ */
