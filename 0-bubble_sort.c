#include <stdio.h>
#include "sort.h"

/**
 * swap - Swaps two integers.
 * @xp: Pointer to the first integer.
 * @yp: Pointer to the second integer.
 */
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order using the Bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size) {
    size_t i;
    size_t j;
    if (array == NULL || size == 0) {
        printf("Invalid input: NULL array or size 0\n");
        return;
    }
    for (i = 0; i < size - 1; i++) {   
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
            }
        }
    }
}
