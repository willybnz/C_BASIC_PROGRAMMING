#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    } return i;
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

int my_getnbr(char const *str)
{
    int i = 0, j = 0, calcul = 0, sign = 1;

    if (str[i] == '-') {
        sign = -1;
        i++;
    }

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            calcul = calcul * 10 + (str[i] - 48);
        } else {
            break;
        }
        i++;
    } return (calcul * sign);
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

int * stock_value(char **av)
{
    int i = 0, j = 0, count = 0;

    while (av[count] != NULL) {
        count++;
    } int *tab = malloc(sizeof(int) * count);

    while (av[i] != NULL) {
        tab[j] = my_getnbr(av[i]);
        i++, j++;
    } return tab;
}

void calculator(int ac, char **av)
{
    int i = 1, point = 0;

    while (av[i] != NULL) {
        point = grade_and_point(av[i][0]);
        i++;
    }
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
    int i = 0, point = 0, j = 1, k = 0, sum = 0;
    float calcul = 0.0;
    char **test = stock_argument(ac, av);
    int *stock = stock_value(test);

        while (j < ac - 1) {
            sum = sum + stock[k];
            j++, k++;
        }
       
       while (i < ac - 1) {
        point = grade_and_point(av[i][0]);
        calcul = calcul + (point * stock[i]);
        i++;
    }   
    
    calcul = calcul / sum;

    printf("%f\n", calcul);

    free(stock);
    free_tab(test);
    return 0;
}