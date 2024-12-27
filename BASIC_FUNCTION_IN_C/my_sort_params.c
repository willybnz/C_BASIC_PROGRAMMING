#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while(str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    } return 0;
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0, j = 0;

    while (src[i] != '\0') {
        dest[j] = src[i];
        i++, j++;
    } dest[j] = '\0';
    return dest;
}

int main(int ac, char **av)
{
    int i = 1, j = 1;
    char *stock = malloc(sizeof(char) * 1000);

    while (i < ac - 1) {
        while (j < - i) {
            if (av[i][j] > av[i][j + 1]) {
                my_strcpy(stock, av[j]);
                my_strcpy(av[j], av[j + 1]);
                my_strcpy(av[j + 1], stock);
            }
            j++;
        }
        i++;
    } i = 0;

    for (; i < ac; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    } free(stock);    
    return 0;
}
