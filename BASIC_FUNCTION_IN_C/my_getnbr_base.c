#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') { 
        i++;
    } return i;
}

int my_getnbr(char const *str)
{
    int i = 0, j = 0, calcul = 0, sign = 1;

    if (str[i] == '-') {
        sign = -1;
        i++;
    }

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            calcul = calcul * 10 + (str[i] - 48);
        } else {
            break;
        }
        i++;
    } return (calcul * sign);
}


int my_getnbr_base(char const *str, char const *base)
{
    int number = my_getnbr(str), len = my_strlen(base), i = 0, value = 0;
    char *stock = malloc(sizeof(char) * (len * len) + len);
    
    stock[i] = (number % len) + 48, i++, value = number / len;
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