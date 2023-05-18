#include "sort.h"
#include "swap.c"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers to sort
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, change = 1;

	while (change == 1) /* if there are any changes */
	{
		change = 0;
		for (i = 0; i < size - 1; i++) /* avoid exceeding the array limit */
		{
			if (array[i] > array[i + 1])
			{
				change = 1;
				swap(array, i);
				print_array(array, size);
			}
		}
		if (change == 0) /* case: the array is ordered */
			return;
	}
}
