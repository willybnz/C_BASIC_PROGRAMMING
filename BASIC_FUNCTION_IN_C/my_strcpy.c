#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0, j = 0;

    while (src[i] != '\0') {
        dest[j] = src[i];
        i++, j++;
    } dest[j] = '\0';
    return dest;
}
