/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_put_nbr_base
*/

#include "struct.h"

int my_put_nbr_base(long nb, char *base)
{
    int count = my_strlen(base);

    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb / count > 0)
        my_put_nbr_base(nb / count, base);
    my_putchar(base[nb % count]);
    return (0);
}