#include "sort.h"

/**
 * swap - Swaps two integers in an array
 * @a: First integer
 * @b: Second integer
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Lomuto partition scheme
 * @array: Array to partition
 * @size: Size of the array
 * @low: Starting index
 * @high: Ending index
 *
 * Return: Final position of pivot
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort_recursive - Recursively sorts using quick sort
 * @array: Array to sort
 * @size: Size of array
 * @low: Starting index
 * @high: Ending index
 */
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = lomuto_partition(array, size, low, high);
		quick_sort_recursive(array, size, low, pi - 1);
		quick_sort_recursive(array, size, pi + 1, high);
	}
}

/**
 * quick_sort - Sorts an array using Quick sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, size, 0, size - 1);
}
