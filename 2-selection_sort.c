#include "sort.h"
#include <stddef.h>
#include <stdio.h>
/**
 * selection_sort - sorting algorithm
 * @array: array of number
 * @size: size of algorithm
 */
void selection_sort(int *array, size_t size)
{
	size_t swap;
	size_t i = 0, j = 1;
	size_t min;

	for (i = 0; i < size - 1 ; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;

		}
		if (min != i)
		{
			swap = array[min];
			array[min] = array[i];
			array[i] = swap;
			print_array(array, size);
		}
	}
}
