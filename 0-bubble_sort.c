#include <stdio.h>
#include <stdlib.h>
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
 * print_array - Prints the elements of an array.
 * @array: The array to be printed.
 * @size: The size of the array.
 */
void print_array(int *array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/**
 * bubble_sort - Sorts an array of integers in ascending order using the Bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size) {
    for (size_t i = 0; i < size-1; i++) {
        for (size_t j = 0; j < size-i-1; j++) {
            if (array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
                print_array(array, size);
            }
        }
    }
}
