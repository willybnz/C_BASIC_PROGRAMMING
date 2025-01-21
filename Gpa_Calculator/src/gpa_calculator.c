#include "../include/gpa_calculator.h"

int grade_and_point(char grade)
{
    switch(grade) {
        case 'A':
            return 4;
        case 'B':
            return 3;
        case 'C':
            return 2;
        case 'D':
            return 1;
        case 'E':
            return 0;
        default:
            return -1;
    }
}

char *format_string(char *string)
{
    int i = 0, j = 0, len  = my_strlen(string) - 1;

    char *stock = malloc(sizeof(char)  * (my_strlen(string) + 1));

    while (string[i] == ' ' || string[i] == '\t') {
        i++;
    }

    while (string[i] != '\0') {
        if ((string[i] != ' ') && string[i] != '\t') {
            stock[j] = string[i];
            j++;
        }
        i++;
    } stock[j] = '\0';
    return stock;
}


char **stock_argument(int ac, char **argument)
{
    int i = 1, j = 0, k = 0, index = 2;

    char **stock = malloc(sizeof(char*) * ac);

    while (argument[i] != NULL) {
        argument[i] = format_string(argument[i]);
        stock[j] = malloc(sizeof(char) * my_strlen(argument[i]));
        while (argument[i][index] != '\0') {
            stock[j][k] = argument[i][index];
            index++;
            k++;
        }
        i++, j++, k = 0, index = 2;
    } stock[j] = NULL;
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
    int i = 1, point = 0, j = 0, k = 0, sum = 0;
    float calcul = 0.0;
    char **test = stock_argument(ac, av);

    while (i < ac) {
        calcul = calcul + ( grade_and_point(av[i][0]) * my_getnbr(test[j]));
        sum = sum + my_getnbr(test[j]);
        i++, j++;
    } calcul = calcul / sum; 
    printf("%.2f\n", calcul);
    free_tab(test);
    return 0;
}