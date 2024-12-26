#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (isprint(str[i]) == 0) {
            return 0;
        }
        i = i + 1;
    } return 1;
}
