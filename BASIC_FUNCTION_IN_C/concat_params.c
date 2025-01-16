#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    } return i;
}

char *concat_params(int ac, char **av)
{
    int i = 0, j = 0, k = 0, len = 0;

    for (; i < ac; i++) {
        len = len + my_strlen(av[i]);
    } i = 0, len = len + (ac - 1) + 1;

    char *stock = malloc(sizeof(char) * (len));

    if (stock == NULL) {
        return NULL;
    }

    while (i < ac) {
        while (av[i][j] != '\0') {
            stock[k] = av[i][j];
            j++, k++;
        } stock[k] = '\n';
        i++, j = 0, k++;
    } stock[k] = '\0';
    return stock;
}
