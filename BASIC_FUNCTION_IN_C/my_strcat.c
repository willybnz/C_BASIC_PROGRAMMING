#include <string.h>
#include <unistd.h>
#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    } return i;
}

char *my_strcat(char *dest, char const *src)
{
    int i = 0, j = 0, len = my_strlen(dest);

}

int main()
{
    char c[100] = "Fuck", d[100] = "You";
    char *test = strcat(c, d);
    printf("%s\n", test);
}
