#include <stdio.h>
#include <stdlib.h>

int my_compute_factorial_it(int nb)
{
    int value = 1, calcul = 1;

    if (nb < 0 || nb > 12) return 0;

    while (value <= nb) {
        calcul = calcul * value;
        value = value + 1;
    } return calcul;
}
