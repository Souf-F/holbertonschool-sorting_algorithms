#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers
 * in ascending order using the Bubble Sort algorithm.
 * @array: The array of integers to be sorted.
 * @size: The size of the array.
 *
 *return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	/* Main loop to traverse the entire array */
	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			/* If current element is greater than the next, swap them */
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				/*Print the array after every swap*/
				print_array(array, size);
			}
		}
	}
}
