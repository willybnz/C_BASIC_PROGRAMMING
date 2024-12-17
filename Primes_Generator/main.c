#include "prime_generator.h"

int main(int ac, char **av)
{
    if (error_case(ac, av) == 84) return 84;
    int test = prime(atoi(av[1]), atoi(av[2]));
}

