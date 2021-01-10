/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** like the printf
*/
#include <stdarg.h>
#include "include/printf_my.h"

int choose2(char *str, va_list list, int i, int test)
{
    if (str[i + 1] == 'x' && print_unsigned_int_hexadecimal(list))
        return (1);
    if (str[i + 1] == 'X' && print_unsigned_int_hexadecimal_maj(list))
        return (1);
    if (str[i + 1] == '%' && my_putchar('%'))
        return (1);
    if (str[i + 1] == 'b' && print_unsigned_int_binary(list))
        return (1);
}

int choose(char *str, va_list list, int i, int test)
{
    if (str[i] == '%') {
        if (str[i + 1] == 'c' && print_char(list))
            return (1);
        if (str[i + 1] == 'i' && print_int(list))
            return (1);
        if (str[i + 1] == 'd' && print_int(list))
            return (1);
        if (str[i + 1] == 's' && print_string(list))
            return (1);
        if (str[i + 1] == 'u' && print_unsigned_int(list))
            return (1);
        if (str[i + 1] == 'o' && print_unsigned_int_octal(list))
            return (1);
        test = choose2(str, list, i, test);
        if (test == 1)
            return (1);
        return (-1);
    }
    return (-1);
}

void my_printf(char *str, ...)
{
    va_list list;
    int i = 0;
    int test = 0;

    va_start(list, str);
    for (; str[i] != '\0';) {
        test = choose(str, list, i, test);
        if (test != -1)
            i += 2;
        if (test == -1) {
            my_putchar(str[i]);
            i += 1;
        }
    }
    va_end(list);
}
