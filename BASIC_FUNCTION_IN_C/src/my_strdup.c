#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    } return i;
}

char *my_strdup(char const *src)
{
    int i = 0;

    char *stock = malloc(sizeof(char) * (my_strlen(src) + 1));

    for (; src[i] != '\0'; i++) {
        stock[i] = src[i];
    } stock[i] = '\0';
    return stock;
}
