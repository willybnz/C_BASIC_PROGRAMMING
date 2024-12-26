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


int my_find_prime_sup(int nb)
{
    int value = nb + 1;
    while (value > 0) {
        if (my_is_prime(value) == 1) {
            return value;
        }
        value++;
    }
}

int main()
{
    int test = my_find_prime_sup(19);
    printf("%d\n", test);
}