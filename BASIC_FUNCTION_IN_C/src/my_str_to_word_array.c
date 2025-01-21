#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    } return i;
}

int my_putstr(char const *str)
{
    int i = 0;

    while(str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    } return 0;
}

char **my_str_to_word_array(char const*str)
{
    int i = 0, j = 0, k = 0, m = 0, n = 0, count = 0;

    while (str[i] != '\0') {
        if (((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') &&
            (str[i] < '0' || str[i] > '9'))) {
                count++;
            }
        i++;
    } i = 0, count = count + 1;

    char **stock = malloc(sizeof(char*) * (count + 1));

    while(i < count) {
        stock[i] = malloc(sizeof(char) * (my_strlen(str) + 1));
        while (str[j] != '\0' && ((str[i] < 'a' || str[i] > 'z') && 
                (str[i] < 'A' || str[i] > 'Z') &&
            (str[i] < '0' || str[i] > '9'))) {
                stock[i][k] = str[j];
                k++, j++;
        } //stock[i][k] = '\0';
        i++, j = 0, k++;
    } //stock[i] = NULL;
    return stock;
}

void free_tab(char **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        free(tab[i]);
        i++;
    } free(tab);
}

int main(int ac, char **av)
{
    char **tab = my_str_to_word_array("Je mange du riz:avec#tony!bake#et@peter");

    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        write(1, "\n", 1);
    }
    free_tab(tab);
    return 0;
}