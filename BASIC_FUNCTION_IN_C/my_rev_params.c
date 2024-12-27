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
    int len = ac - 1;

    while (len >= 0) {
        my_putstr(av[len]);
        my_putchar('\n');
        len--;
    } return 0;
}