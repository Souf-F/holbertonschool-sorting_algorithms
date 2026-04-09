#include "sort.h"

/**
 * swap - swaps two integers
 * @a: first integer
 * @b: second integer
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - partitions the array using Lomuto partition scheme
 * @array: array to be partitioned
 * @low: starting index of the array
 * @high: ending index of the array
 * @size: size of the array
 * Return: index of the p element after partition
 */

int partition(int *array, int low, int high, size_t size)
{
	int p, i, j;

	p = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] <= p)
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
 * quick_sort_helper - recursive helper function for quick sort
 * @array: array to be sorted
 * @low: starting index of the array
 * @high: ending index of the array
 * @size: size of the array
 */

static void quick_sort_helper(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quick_sort_helper(array, low, p - 1, size);
		quick_sort_helper(array, p + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: pointer to the array of integers to be sorted
 * @size: number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	quick_sort_helper(array, 0, (int)size - 1, size);
}
