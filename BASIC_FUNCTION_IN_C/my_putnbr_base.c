#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    } return i;
    
}

int my_putnbr_base(int nbr, char const *base)
{
    int i = 0, j = 0, len = my_strlen(base), value = 0;
    char *stock = malloc(sizeof(char) * (len * len) + len);

    stock[i] = (nbr % len) + 48, value = nbr / len, i++;

    while (value >= len) {
        if ((value % len) > 9) {
            stock[i] = (value % len) + 55;
        } else {
            stock[i] = (value % len) + 48;
        }
        value = value / len;
        i++;
    } stock[i] = value + 48, stock[i + 1] = '\0';
    i = my_strlen(stock) - 1;

    for (; i >= 0; i--) {
        write(1, &stock[i], 1);
    } write(1, "\n", 1);
    free(stock);
    return 0;
}
