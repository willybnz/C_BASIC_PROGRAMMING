#include <unistd.h>
#include <stdio.h>

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z' || (str[i] >= 'A' && str[i] <= 'Z'))) {
        } else {
            return 0;
        }
        i++;
    } return 1;
}
