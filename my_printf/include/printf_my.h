/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** for the printf
*/
#include <stdio.h>
#include <stdarg.h>

int print_char(va_list list);
int print_int(va_list list);
int print_string(va_list list);
int print_unsigned_int(va_list list);
int print_unsigned_int_octal(va_list list);
int print_unsigned_int_hexadecimal(va_list list);
int print_unsigned_int_hexadecimal_maj(va_list list);
int print_unsigned_int_binary(va_list list);
int choose2(char *str, va_list list, int i, int test);
int choose(char *str, va_list list, int i, int test);
void my_printf(char *str, ...);
int my_print_unsigned_int_base(unsigned int nbr, char *base);
int my_strlen(char *str);
int my_putchar(char c);
void my_put_nbr(int nb);
int my_putstr(char const *str);
int gestion_error(char *filepath);
/*int load_file_in_mem(char *filepath);
int my_strlen_for_bsq(char *str, int nb);
char **mem_alloc_2d_array(char *str, int nb_cols, int nb_rows);
char **load_2d_arr_from_file(char *fp, char **arr, int nb_cols, int nb_rows);
char **replace_nb_by_cross(char **map, int x, int y, int v_max);
char **search_biggest_nbr(char **map, int nb_cols, int nb_rows);
char **replace_point_by_nbr(char **map, int nb_cols, int nb_rows);
int my_getnbr(char const *str);*/
