#include "sort.h"

/**
 * swap - swaps the value of two integers
 * @array: array of integers
 * @integer: integer value to swap
*/
void swap(int *array, size_t integer)
{
	int tmp = 0;

	tmp = array[integer];
	array[integer] = array[integer + 1];
	array[integer + 1] = tmp;
}
