#include "prime_generator.h"

int check_if_number_is_prime(int number)
{
    int start = 2, count = 0;

    if (number < 0) return -1;
    if (number == 1 || number == 0) return -1;

    while (start < number) {
        if ((number % start) == 0) {
            count++;
        }
        start = start + 1;
    }

    if (count > 0) {
        return -1;
    } else {
        return 1;
    }
}

int prime_generator1(int x, int y)
{
    while (x <= y) {
        if ((check_if_number_is_prime(x)) == 1) {
            printf("%d\n", x);
        }
        x = x + 1;
    } return 0;
}

int prime_generator2(int x, int y)
{
    
    while (x >= y) {
        if ((check_if_number_is_prime(x)) == 1) {
            printf("%d\n", x);
        }
        x = x - 1;
    }
    return 0;
}

int prime(int x, int y)
{
    if (x <= y) {
        prime_generator1(x, y);
    } else {
        prime_generator2(x, y);
    } return 0;
}

int error_case(int ac, char **av)
{
    if (atoi(av[1]) < 0 || atoi(av[2]) < 0) {
        return 84;
    }
    if (ac != 3) return 84;
}

