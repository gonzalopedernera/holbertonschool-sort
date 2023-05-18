#include "sort.h"
#include "swap.c"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array of integers to sort
 * @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t index = 0, j = 0, min = 0;
	int aux = 0;

	for (index = 0; index < size - 1; index++)
	{
		min = array[index];
		for (j = index + 1; j < size; j++) /* find the minimal integer */
		{
			if (array[j] < array[min])
			{
				aux = j; /* store new minimal integer position */
				min = array[j];
			}
		}

		if (min != index) /* case: integer less than current is found */
		{
			array[aux] = array[index];
			array[index] = min;
			print_array(array, size);
		}
	}
}
