#include "../include/clean.h"

int main(int ac, char **av)
{
    if (error_case(ac, av) == 84) return 84;
    char *test = clean_string(av[1]);
    my_putstr(test);
    free(test);
    return 0;
}
