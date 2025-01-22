#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

char *clean_string(char *string);
int my_strlen(char *str);
int error_case(int ac, char **av);
int my_putstr(char *str);
void my_putchar(char c);