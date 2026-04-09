#include "sort.h"

/**
 * lomuto_partition - Lomuto partition scheme for Quick Sort
 * @array: The array to partition
 * @size: Full size of the array for printing
 * @low: Starting index of the partition
 * @high: Ending index of the partition (pivot)
 *
 * Return: The final index position of the pivot
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low;
	int j, temp;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_recursion - Recursive sorting helper
 * @array: The array to sort
 * @size: Full size of the array for printing
 * @low: Starting index of the current partition
 * @high: Ending index of the current partition
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
 * quick_sort - Sorts array using Quick Sort algorithm
 * @array: The array of integers to be sorted
 * @size: The total number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_recursion(array, size, 0, (int)size - 1);
}
