#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble
 * @array: Pointer to the array to sort
 * @size: Size of the array
 *
 * Description: Prints the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	n = size;

	do {
		swapped = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		n = n - 1;
	} while (swapped != 0);
}
