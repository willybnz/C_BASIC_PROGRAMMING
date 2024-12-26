#include <stdio.h>

int my_compute_power_it(int nb, int p)
{
    int value = 0, calcul = 1;

    if (p < 0) return 0; 

    while (value < p) {
        calcul = calcul * nb;
        value++;
    } return calcul;
}
