#include "../include/prime_generator.h"

int main(int ac, char **av)
{
    if (error_case(ac, av) == 84) {
        return 84;
    } else {
        int test = prime_generator(atoi(av[1]), atoi(av[2]));
    }
}
