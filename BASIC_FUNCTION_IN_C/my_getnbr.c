#include <unistd.h>
#include <stdio.h>

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
