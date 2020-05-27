/*
** EPITECH PROJECT, 2019
** unsigned_number
** File description:
** printf
*/

#include "my.h"

int unsigned_number(int nb)
{
    if (nb < 0)
        nb = -nb;
    return (nb);
}
