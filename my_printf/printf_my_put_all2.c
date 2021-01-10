/*
** EPITECH PROJECT, 2020
** my_put_all2
** File description:
** emacs
*/
#include "include/printf_my.h"

int my_print_unsigned_int_base(unsigned int nbr, char *base)
{
    unsigned int calc = 0;
    unsigned int size = my_strlen(base);
    unsigned int nb = 0;
    unsigned int temp = 0;

    if (size < 0)
        return (84);
    if (nbr < 0) {
        nb *= -1;
        my_putchar('-');
        nb = nb + my_print_unsigned_int_base(-nbr, base);
    } else {
        temp = nbr % size;
        calc = (nbr - temp) / size;
        if (calc != 0)
            my_print_unsigned_int_base(calc, base);
        my_putchar(base[temp]);
    }
    return (nbr);
}
