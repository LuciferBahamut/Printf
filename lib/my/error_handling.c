/*
** EPITECH PROJECT, 2019
** error
** File description:
** my_printf
*/

#include "my.h"

int other_flag(char const *fmt, int i)
{
    switch (fmt[i]) {
    case 'u' : return (0);
        break;
    case 'x' : return (0);
        break;
    case 'X' : return (0);
        break;
    case 'p' : return (0);
        break;
    }
    return (84);
}

int first_flag(char const *fmt, int i)
{
    switch (fmt[i]) {
    case 'd' : return (0);
        break;
    case 's' : return (0);
        break;
    case 'c' : return (0);
        break;
    case '%' : return (0);
        break;
    case 'b' : return (0);
        break;
    case 'i' : return (0);
        break;
    case 'S' : return (0);
        break;
    case 'o' : return (0);
        break;
    }
    other_flag(fmt, i);
    return (84);
}

int error_handling(char const *fmt)
{
    for (int i = 0; fmt[i] != '\0'; i++) {
        if (fmt[i] == '%') {
            i++;
            first_flag(fmt, i);
        }
    }
    return (0);
}
