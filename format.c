/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** format
*/

#include <stdlib.h>
#include "struct.h"

void f_char(va_list list)
{
    my_putchar(va_arg(list, int));
}

void f_integer(va_list list)
{
    my_put_nbr_base(va_arg(list, int), "0123456789");
}

void f_string(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void f_octal(va_list list)
{
    my_put_nbr_base((unsigned int)va_arg(list, int), "01234567");
}

void f_hexadecimal(va_list list)
{
    my_put_nbr_base((unsigned int)va_arg(list, int), "0123456789abcdef");
}
