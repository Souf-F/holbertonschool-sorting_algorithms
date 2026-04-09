#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 * @array: The array to be sorted.
 * @size: Number of elements in @array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	/* 1. Safety check */
	if (array == NULL || size < 2)
		return;

	/* 2. Main loop moves the boundary of the unsorted subarray */
	for (i = 0; i < size - 1; i++)
	{
		/* Assume the first element of the unsorted part is the minimum */
		min_idx = i;

		/* 3. Inner loop to find the actual minimum in the rest of the array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		/* 4. Swap if a smaller element was found */
		if (min_idx != i)
		{
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;

			/* 5. Print the array after the swap (Requirement) */
			print_array(array, size);
		}
	}
}
