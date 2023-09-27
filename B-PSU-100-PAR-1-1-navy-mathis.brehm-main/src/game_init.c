/*
** EPITECH PROJECT, 2023
** all_navy
** File description:
** game_init
*/

#include "../include/my.h"

int value_received;

void get_pid(int sig, siginfo_t *info, void *ucontext)
{
    value_received = info->si_pid;
}

void connection(struct navy_user_t *navy_user)
{
    int co = 0;
    if (navy_user->player == 2) {
        kill(navy_user->pid_p1, SIGUSR2);
        usleep(100);
        return;
    }
    while (co == 0) {
        struct sigaction action;
        action.sa_sigaction = get_pid;
        action.sa_flags = SA_SIGINFO;
        sigaction(SIGUSR2, &action, NULL);
        pause();
        if (value_received != 0) {
            my_putstr("enemy connected\n");
            navy_user->pid_p2 = value_received;
            value_received = 0;
            co = 1;
        }
    }
}

void init_player(int ac, char **av, struct navy_user_t *navy_user)
{
    if (ac == 2) {
        navy_user->pid_p1 = getpid();
        navy_user->player = 1;
        my_putstr("waiting for enemy connection...\n\n");
    } else {
        navy_user->pid_p1 = my_getnbr(av[1]);
        navy_user->pid_p2 = getpid();
        navy_user->player = 2;
        my_putstr("successfully connected\n");
    }
}

int game_init(int ac, char **av)
{
    value_received = 0;
    struct navy_user_t *navy_user = malloc(sizeof(struct navy_user_t));
    my_putstr("\033[0mmy_pid: ");
    my_put_nbr(getpid());
    init_player(ac, av, navy_user);
    navy_user->map_data = open_file(av[navy_user->player]);
    connection(navy_user);
    navy_user->play_player = 1;
    navy_user->nb_hit = 0;
    int win = game(navy_user);
    return win;
}
