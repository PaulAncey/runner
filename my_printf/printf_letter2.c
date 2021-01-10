/*
** EPITECH PROJECT, 2020
** letter2
** File description:
** emacs
*/
#include <stdarg.h>
#include "include/printf_my.h"

int print_unsigned_int_octal(va_list list)
{
    my_print_unsigned_int_base(va_arg(list, unsigned int), "01234567");
    return (1);
}

int print_unsigned_int_hexadecimal(va_list list)
{
    my_print_unsigned_int_base(va_arg(list, unsigned int), "0123456789abcdef");
    return (1);
}

int print_unsigned_int_hexadecimal_maj(va_list list)
{
    my_print_unsigned_int_base(va_arg(list, unsigned int), "0123456789ABCDEF");
    return (1);
}

int print_unsigned_int_binary(va_list list)
{
    my_print_unsigned_int_base(va_arg(list, unsigned int), "01");
    return (1);
}
