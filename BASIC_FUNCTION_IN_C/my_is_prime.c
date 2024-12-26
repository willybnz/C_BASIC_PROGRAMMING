#include <stdio.h>

int my_is_prime(int nb)
{
    int begin = 2, count = 0;

    if (nb < 0) return 0;

    while (begin < nb) {
        if ((nb % begin) == 0) {
            count++;
        }
        begin++;
    }

    if (count > 0) {
        return 0;
    } else {
        return 1;
    }
}
