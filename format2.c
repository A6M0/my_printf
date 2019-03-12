/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** forma2
*/

#include "struct.h"

void f_hexadecimalmaj(va_list list)
{
    my_put_nbr_base((unsigned int)va_arg(list, int), "0123456789ABCDEF");
}

void f_binary(va_list list)
{
    my_put_nbr_base((unsigned int)va_arg(list, int), "01");
}

void f_pointer(va_list list)
{
    write(1, "0x", 2);
    my_put_nbr_base((long)va_arg(list, int *), "0123456789abcdef");
}

void f_unsigned(va_list list)
{
    my_put_nbr_base((unsigned int)va_arg(list, int), "0123456789");
}

void f_shadow(va_list list)
{
    my_showstr_base(va_arg(list, char *));
}