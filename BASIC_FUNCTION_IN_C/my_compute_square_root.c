#include <stdio.h>

int my_compute_square_root(int nb)
{
    int value = 1, calcul = 0;
    if (nb <= 0) return 0;

    while (value < nb) {
        calcul = value * value;
        if (calcul == nb) {
            return value;
        }
        value++;
    } return 0;
}

int main()
{
    printf("%d\n", my_compute_square_root(0));
}