#include "../include/prime_generator.h"

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

int prime_generator_when_x_inf_y(int x, int y)
{
    while (x <= y) {
        if ((check_if_number_is_prime(x)) == 1) {
            printf("%d\n", x);
        }
        x = x + 1;
    } return 0;
}

int prime_generator_when_x_sup_y(int x, int y)
{
    while (x >= y) {
        if ((check_if_number_is_prime(x)) == 1) {
            printf("%d\n", x);
        }
        x = x - 1;
    }
    return 0;
}

int prime_generator(int x, int y)
{
    if (x <= y) {
        prime_generator_when_x_inf_y(x, y);
    } else {
        prime_generator_when_x_sup_y(x, y);
    } return 0;
}

int error_case(int ac, char **av)
{
    if (atoi(av[1]) < 0 || atoi(av[2]) < 0) return 84;
    if (ac != 3) return 84;

    for (int i = 1; i < 3; i++) {
        for(int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] >= '0' && av[i][j] <= '9') {
            } else {
                return 84;
            }
        }
    } return 0;
}

