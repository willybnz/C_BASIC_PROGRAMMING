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

    for (; av[i] != NULL; i++) {
        len = len + my_strlen(av[i]);
    } i = 0, len = len + ac + 1;

    char *stock = malloc(sizeof(char) * (len));

    for(; i < ac ; i++, j = 0) {
        for (; av[i][j] != '\0'; j++, k++) {
            stock[k] = av[i][j];
        } stock[k] = '\n';
    }    
    return stock;
}

int main(int ac, char **av)
{
    char *test = concat_params(ac, av);
    printf("%s", test);
    free(test);
}