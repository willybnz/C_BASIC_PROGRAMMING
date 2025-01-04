#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *convert_char_in_hexa(char c)
{
    int stock = c;

    while (stock >= 16) {}
}

int my_showstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (isprint(str[i]) == 0) {
            str[i];
        }
        i++;
    } return 0;
}


int main()
{
    int test = my_showstr("I like \n ponies!");
}