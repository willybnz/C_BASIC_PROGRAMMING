#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    int i = 0, j = 0, value = 0, count = 0;
    char *stock = malloc(sizeof(char) * 1000);

    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    } stock[i] = (nb % 10) + 48;
    value = nb / 10, i = i + 1;

    while (value >= 1) {
        stock[i] = (value % 10) + 48;
        i++, count++;
        value = value / 10;
    } stock[i] = '\0';

    while (count >= 0) {
        my_putchar(stock[count]);
        count--;
    } free(stock);
    return 0;
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
        return 1;
    }
    my_put_nbr(nb / 10);
    my_put_nbr(nb % 10);
}

