/*
** EPITECH PROJECT, 2019
** convert_base.c
** File description:
** my_printf
*/

#include "my.h"

char *convert_binary(int const base, int nb, char *result)
{
    for (int i = 0; nb != 0; i++) {
        result[i] = (nb % base) + '0';
        nb /= base;
    }
    return (result);
}

char *convert_octal(int const base, int nb, char *result)
{
    for (int i = 0; nb != 0; i++) {
        result[i] = (nb % base) + '0';
        nb /= base;
    }
    return (result);
}

char *convert_hexa(int const base, int nb, char *result)
{
    for (int i = 0; nb != 0; i++) {
        result[i] = (nb % base) + '0';
        switch (result[i]) {
        case ':' : result[i] = 'a';
            break;
        case ';' : result[i] = 'b';
            break;
        case '<' : result[i] = 'c';
            break;
        case '=' : result[i] = 'd';
            break;
        case '>' : result[i] = 'e';
            break;
        case '?' : result[i] = 'f';
            break;
        }
        nb /= base;
    }
    return (result);
}

char *convert_hexa_maj(int const base, int nb, char *result)
{
    for (int i = 0; nb != 0; i++) {
        result[i] = (nb % base) + '0';
        switch (result[i]) {
        case ':' : result[i] = 'A';
            break;
        case ';' : result[i] = 'B';
            break;
        case '<' : result[i] = 'C';
            break;
        case '=' : result[i] = 'D';
            break;
        case '>' : result[i] = 'E';
            break;
        case '?' : result[i] = 'F';
            break;
        }
        nb /= base;
    }
    return (result);
}

void convert_base(int const base, int vl, int i)
{
    int nb = unsigned_number(vl);
    char *result = malloc(nb + 1);
    char *dis = "0x";

    switch (i) {
    case 0 : convert_binary(base, nb, result);
        break;
    case 1 : convert_octal(base, nb, result);
        break;
    case 2 : convert_hexa(base, nb, result);
        break;
    case 3 : convert_hexa_maj(base, nb, result);
        break;
    case 4 : convert_hexa(base, nb, result);
        my_putstr(dis);
        break;
    }
    my_putstr(my_revstr(result));
    free(result);
}
