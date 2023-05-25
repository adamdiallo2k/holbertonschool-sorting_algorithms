#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 * @list: pointer to a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;
	listint_t *tmp;

	if (list == NULL)
		exit(9);

	node = *list;
	while (node)
	{
		while (node->prev != NULL && node->prev->n > node->n)
		{
			tmp = node->prev;
			tmp->next = node->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp;
			node->prev = tmp->prev;
			if (node->prev != NULL)
				node->prev->next = node;
			node->next = tmp;
			tmp->prev = node;
			if (node->prev == NULL)
				*list = node;
			print_list(*list);
		}
		node = node->next;
	}
}
