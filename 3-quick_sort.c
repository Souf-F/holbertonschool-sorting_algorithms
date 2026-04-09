#include "sort.h"
/**
 * swap_elements - Swaps two integers in an array and prints the array.
 * @array: The full array to be printed after swap.
 * @size: Size of the array for the print function.
 * @a: Pointer to the first element to swap.
 * @b: Pointer to the second element to swap.
 */
void swap_elements(int *array, size_t size, int *a, int *b)
{
	int tmp;

	if (*a != *b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
		print_array(array, size);
	}
}

/**
 * lomuto_partition - Implements the Lomuto partition scheme for Quick Sort.
 * @array: The array to partition.
 * @size: Full size of the array for printing.
 * @low: Starting index of the partition.
 * @high: Ending index of the partition (pivot).
 *
 * Return: The final index position of the pivot.
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			swap_elements(array, size, &array[i], &array[j]);
			i++;
		}
	}
	swap_elements(array, size, &array[i], &array[high]);
	return (i);
}

/**
 * quick_recursion - Helper function that implements the recursive sorting.
 * @array: The array to sort.
 * @size: Full size of the array for printing.
 * @low: Starting index of the current partition.
 * @high: Ending index of the current partition.
 */
void quick_recursion(int *array, size_t size, int low, int high)
{
	int p_idx;

	if (low < high)
	{
		p_idx = lomuto_partition(array, size, low, high);

		quick_recursion(array, size, low, p_idx - 1);
		quick_recursion(array, size, p_idx + 1, high);
	}
}

/**
 * quick_sort - Sorts an array of integers using the Quick Sort algorithm.
 * @array: The array of integers to be sorted.
 * @size: The total number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_recursion(array, size, 0, (int)size - 1);
}
