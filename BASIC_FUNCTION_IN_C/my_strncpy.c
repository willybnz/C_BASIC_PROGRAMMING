#include <stdio.h>
#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0, j = 0;

    while (src[i] != '\0' && i < n) {
        dest[j] = src[i];
        i++, j++;
    } dest[j] = '\0';
    return dest;
}
