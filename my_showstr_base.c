/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** showstr_modif
*/

#include "struct.h"

void my_showstr_base(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32) {
            my_putchar(92);
            my_put_nbr_base(str[i], "01234567");
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
}
