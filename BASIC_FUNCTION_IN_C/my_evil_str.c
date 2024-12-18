#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    } return i;
}


char *my_evil_str(char *str)
{
    int i = 0, len = my_strlen(str) - 1;

    char stock = 'a';

    while (i < (my_strlen(str) / 2)) {
        stock = str[i];
        str[i] = str[len];
        str[len] = stock;
        i++, len--;
    } return str;
}
