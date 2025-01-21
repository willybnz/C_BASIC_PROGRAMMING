#include <stdio.h>
#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    } return i;
}

char *my_revstr(char *str)
{
    int i = 0, j = 0, len = my_strlen(str) - 1;

    char stock = ' ';

    while (i < (my_strlen(str) /2)) {
        stock = str[i];
        str[i] = str[len];
        str[len] = stock;
        i++, len--;
    } return str;
}
