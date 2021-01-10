/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** map_and_song
*/
#include "include/my.h"
#include "my_printf/include/printf_my.h"

void mus_coin(runner_t *runner)
{
    runner->coin = sfMusic_createFromFile("data/coincoin.ogg");
    sfMusic_setVolume(runner->coin, 5);
    if (runner->vol == 1)
        sfMusic_setVolume(runner->coin, 0);
    sfMusic_play(runner->coin);
}

void map(sfRenderWindow *window, runner_t *runner, sfClock *duck)
{
    mus_coin(runner);
    if (runner->map[runner->cp_map] == '1')
        runner->mv_d1 = 1;
    if (runner->map[runner->cp_map] == '2')
        runner->mv_d2 = 1;
    if (runner->map[runner->cp_map] == '3')
        runner->mv_d3 = 1;
    if (runner->map[runner->cp_map] == '4')
        runner->mv_d4 = 1;
    if (runner->map[runner->cp_map] == '5')
        runner->mv_d5 = 1;
    if (runner->map[runner->cp_map] == '6')
        runner->mv_d6 = 1;
    if (runner->map[runner->cp_map] == '7')
        runner->mv_d7 = 1;
    if (runner->map[runner->cp_map] == '8')
        runner->mv_d8 = 1;
    runner->cp_map += 1;
    sfClock_restart(duck);
}

char *my_revstr(char *str)
{
    int tot;
    int j;
    int i;
    int k;

    tot= my_strlen(str) - 1;
    i = tot;
    for (j = 0; j <= tot / 2; j += 1) {
        k = str[j];
        str[j] = str[i];
        str[i] = k;
        i -= 1;
    }
    return (str);
}

char *nb_to_str(int nb)
{
    char *str;
    int temp = nb;
    int i = 0;
    int j = 0;

    for (; temp != 0; j += 1)
        temp = temp / 10;
    str = malloc(sizeof(char) * j);
    if (nb == 0) {
        str[0] = '0';
        return (str);
    }
    for (; nb > 0; i += 1) {
        str[i] = (nb % 10) + '0';
        nb = nb / 10;
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}

int tiret(int ac, char **av)
{
    if (ac != 2) {
        my_printf("./my_runner: bad arguments: 0 given");
        my_printf(" but 1 is required\nretry with -h\n");
        return (84);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_printf("Finite runner created with CSFML.\n\n");
        my_printf("USAGE\n ./my_runner map_easy.txt or map_hard.txt\n\n\n");
        my_printf(" mode.\n -h              print the usage and quit.\n");
        my_printf(" -c              chill mode without duck\n\n");
        my_printf("USER INTERACTIONS\n UP_ARROW          mooving up.\n");
        my_printf(" LEFT_ARROW        mooving left.\n");
        my_printf(" RIGHT_ARROW       mooving right\n");
        my_printf("You have to avoid the duck and ");
        my_printf("reach your communist comrades !\n");
    return (84);
    }
    return (0);
}