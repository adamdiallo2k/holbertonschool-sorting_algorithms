#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void print_array(int *array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

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
