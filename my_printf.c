/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

static const format_t form[11] = {
    {&f_char, 'c'},
    {&f_integer, 'd'},
    {&f_integer, 'i'},
    {&f_string, 's'},
    {&f_octal, 'o'},
    {&f_hexadecimal, 'x'},
    {&f_hexadecimalmaj, 'X'},
    {&f_binary, 'b'},
    {&f_pointer, 'p'},
    {&f_unsigned, 'u'},
    {&f_shadow, 'S'},
};

int search_form(char const *f, va_list p_list, int j)
{
    int i = 0;

    while (i < 11) {
        if (f[j] == '%') {
            my_putchar('%');
            return (0);
        }
        if (form[i].tab == f[j]) {
            (form[i].fptr(p_list));
        }
        i++;
    }
    return (0);
}

int my_printf(char const *format, ...)
{
    int i = 0;
    va_list p_list;
    va_start(p_list, format);

    while (format[i] != '\0') {
        if (format[i] != '%') {
            my_putchar(format[i]);
            i++;
        }
        if (format[i] == '%') {
            i++;
            search_form(format, p_list, i);
            i++;
        }
    }
    return (i);
}
