/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** bistro
*/

char *my_revstr(char *str)
{
    char c;
    int i = 0;
    int j = 0;

    while (str[i] != '\0')
        i++;
    i--;
    while (j <= i ) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i--;
        j++;
    }
    return (str);
}
