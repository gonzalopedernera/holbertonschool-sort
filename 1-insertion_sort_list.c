#include "sort.h"

/**
 * insertion_sort_list - sorts a list of integers in ascending order
 * @list: list of integers
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;

	if (!list || !(*list))
		return;

	current = (*list)->next;
	while (current)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			/* swaps current node in the right position */
			swap_nodes(list, current->prev, current);
			if (current->prev != NULL)
				current = current->prev; /* follow the check */
			print_list(*list);
		}
		current = current->next;
	}
}

/**
 * swap_nodes - swap nodes
 * @list: pointer to first node
 * @high: pointer to greater value
 * @low: pointer to lower value
*/
void swap_nodes(listint_t **list, listint_t *high, listint_t *low)
{
	listint_t *tmp_next = NULL, *tmp_prev = NULL;

	/* store the corresponding nodes so as not to lose links */
	tmp_next = low->next;
	tmp_prev = high->prev;

	/* updating pointers */
	high->next = tmp_next;
	high->prev = low;
	low->next = high;
	low->prev = tmp_prev;

	if (tmp_prev != NULL)
		tmp_prev->next = low;
	else
		*list = low; /* high is the first node, low becomes the new first node */

	if (tmp_next != NULL)
		tmp_next->prev = high;
}
