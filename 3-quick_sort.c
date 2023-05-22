#include "sort.h"
#include "swap.c"

/**
 * qsort - sorting and partitioning of an array
 * @array: array of integers to sort
 * @low: lower position in the array
 * @high: array partition
 * @size: size of array
*/
void qsort(int *array, int low, int high, size_t size)
{
	int j = 0, i = 0, pivot = 0;

	i = low - 1;
	pivot = array[high]; /*initialize pivot*/

	if (low < high)
	{
		for (j = low; j < (int)high; j++) /*partitioning of the sorting*/
		{
			if (array[j] < pivot) /*if current value < selected pivot, swap it*/
			{
				i++;
				if (array[j] != array[i])
					swap(array, j, i), print_array(array, size);
			}
		}
		i++;
		swap(array, high, i);
		if (array[high] != array[i])
			print_array(array, size);
		qsort(array, 0, i - 1, size); /*recursive function call*/
		qsort(array, i + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array with quick sort algorithm
 * @array: array of integers to sort
 * @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	qsort(array, 0, (int)size - 1, size);
}
