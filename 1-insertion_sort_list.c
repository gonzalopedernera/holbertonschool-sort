#include "sort.h"

/**
 * insertion_sort_list - sorts a list of integers in ascending order
 * @list: list of integers
*/
void insertion_sort_list(listint_t **list)
{
}

/**
 * swap_nodes - ...
 * @before: ...
 * @tmp: ...
*/
void swap_nodes(listint_t **list, listint_t *high, listint_t *low)
{
	listint_t *tmp = NULL;

	tmp = *list;
	while (tmp->next != NULL)
	{
		while (tmp->prev != NULL)
		{}
	}
	/* Si tmp no existe, high es list */
	/* Acomodar low y high, prev y next */
	/* low -> next ? no cambiar low -> next -> prev */
}
