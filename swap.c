#include "sort.h"

/**
 * swap - swaps the value of two integers
 * @array: array of integers
 * @a: integer value to swap
 * @b: integer value to swap
*/
void swap(int *array, int a, int b)
{
	int tmp = 0;

	tmp = array[a];
	array[a] = array[b];
	array[b] = tmp;
}
