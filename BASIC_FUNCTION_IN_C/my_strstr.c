#include <unistd.h>
#include <stdio.h>
#include <string.h>

int my_strlen(char const *str)
{
    int  i = 0;

    while (str[i] != '\0') {
        i++;
    } return i;
}


int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && i < n) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
        i++;
    } return (s1[i] - s2[i]);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0, len = my_strlen(to_find);

    if (len == 0) { return str;}

    while (str[i] != '\0') {
        if (my_strncmp(&str[i], to_find, len) == 0) {
            return &(str[i]);
        }
        i++;
    } return NULL;
}