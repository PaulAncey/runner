/*
** EPITECH PROJECT, 2020
** my_put_all
** File description:
** tout afficher
*/
#include <unistd.h>
#include "include/printf_my.h"

int my_strlen(char *str)
{
    int i = 0;

    for (;str[i] != '\0'; i += 1);
    return (i);
}

int my_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

void my_put_nbr(int nb)
{
    int nb_count = 1;
    int value = 0;

    if (nb == -2147483648) {
        nb = 147483648;
        my_putchar('-');
        my_putchar('2');
    }
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    while ((nb / nb_count) >= 10)
        nb_count *= 10;
    while (nb_count > 0) {
        value = nb / nb_count;
        value %= 10;
        my_putchar(value + 48);
        nb_count /= 10;
    }
}

int my_putstr(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i += 1)
        my_putchar(str[i]);
    return (1);
}
