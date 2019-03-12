/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** printf
*/

#include "struct.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}