#include "../include/clean.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    } return i;
}

char *clean_string(char *string)
{
    int i = 0, j = 0, len = my_strlen(string);

    char *stock = malloc(sizeof(char) * (len + 1));

    if (stock == NULL) return NULL;
    
    while (string[i] == ' ' || string[i] == '\t') i++;

    while (string[i] != '\0') {
        while ((string[i] == ' ' && string[i + 1] == ' ') || 
            (string[i] == '\t' && string[i + 1] == '\t') || 
            (string[i] == ' ' && string[i + 1] == '\t') || 
            (string[i] == '\t' && string[i + 1] == ' ')) {
            i++;
        }
        if (string[i] == '\t') {
            stock[j] = ' '; 
        } else {
            stock[j] = string[i];
        }
        i++, j++;
    }
    if ((j > 0 && stock[j - 1] == ' ') || (j > 0 && stock[j - 1] == '\t')) {
        stock[j - 1] = '\n';
        j++;
    } stock[j] = '\0';
    return stock;
}

int error_case(int ac, char **av)
{
    if (ac != 2)
        return 84;
}

int my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    } return 0;
}