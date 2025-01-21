#include <stdio.h>

void my_sort_int_array(int *array, int size)
{
    int i = 0, j = 0, stock = 0;
    
    while (i < size) {
        while (j < size - 1) {
            if (array[j] > array[j + 1]) {
                stock = array[j];
                array[j] = array[j + 1];
                array[j + 1] = stock;
            }
            j++;
        }
        i++, j = 0;
    }
}

