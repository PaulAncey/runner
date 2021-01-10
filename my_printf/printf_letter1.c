/*
** EPITECH PROJECT, 2020
** letter1
** File description:
** different letter for the printf
*/
#include <stdarg.h>
#include "include/printf_my.h"

int print_char(va_list list)
{
    my_putchar(va_arg(list, int));
    return (1);
}

int print_int(va_list list)
{
    my_put_nbr(va_arg(list, int));
    return (1);
}

int print_string(va_list list)
{
    my_putstr(va_arg(list, char *));
    return (1);
}

int print_unsigned_int(va_list list)
{
    unsigned int result = va_arg(list, unsigned int);
    unsigned int nb_count = 1;
    unsigned int value = 0;

    while ((result / nb_count) >= 10)
        nb_count *= 10;
    while (nb_count > 0) {
        value = result / nb_count;
        value %= 10;
        my_putchar(value + 48);
        nb_count /= 10;
    }
    return (1);
}
