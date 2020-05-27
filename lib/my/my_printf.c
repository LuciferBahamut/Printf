/*
** EPITECH PROJECT, 2019
** myprintf
** File description:
** myprintf
*/

#include "my.h"

int my_printf(const char *fmt, ...)
{
    va_list ap;

    if (error_handling(fmt) == 84)
        return (84);
    va_start(ap, fmt);
    display(fmt, ap);
    va_end(ap);
    return (0);
}
