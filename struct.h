/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** struct
*/

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#ifndef _STRUCT_
#define _STRUCT_

typedef struct format_s
{
    void (*fptr)(va_list);
    char tab;
} format_t;

#endif /* !_STRUCT_ */

void f_char(va_list list);
void f_integer(va_list list);
void f_string(va_list list);
void f_octal(va_list list);
void f_hexadecimal(va_list list);
void f_hexadecimalmaj(va_list list);
void f_binary(va_list list);
void f_pointer(va_list list);
void f_unsigned(va_list list);
void f_shadow(va_list list);
void my_putchar(char c);
void my_showstr_base(char *str);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_put_nbr_base(long nb, char *base);
int my_strlen(char const *str);