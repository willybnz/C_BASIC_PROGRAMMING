#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while(str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}


int main(int ac, char **av)
{
    for (int i = 0; av[i] != NULL; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    } return 0;
}