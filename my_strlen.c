/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** printf
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
