#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * @list: Double pointer to the head of the list
 *
 * Description: Prints the list after each swap
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prev_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;
		prev_node = current->prev;

		while (prev_node != NULL && prev_node->n > temp->n)
		{
			/* Swap nodes */
			if (prev_node->prev != NULL)
				prev_node->prev->next = temp;
			else
				*list = temp;

			if (temp->next != NULL)
				temp->next->prev = prev_node;

			prev_node->next = temp->next;
			temp->prev = prev_node->prev;
			temp->next = prev_node;
			prev_node->prev = temp;

			prev_node = temp->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
