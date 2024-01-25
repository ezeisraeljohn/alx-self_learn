#include "sort.h"

/**
 * insertion_sort_list - Function that sorts a list using insertion sort
 * @list: The list to be sorted.
 * 
 * Return Nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *key, *first_el, *last_el, *current;

	/* Check if the list is NULL or has less than two elements */
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	/* Start iterating from the second element of the list */
	temp = (*list)->next;

	while(temp)
	{
		 /* Set key as the current element */
		key = temp;
		last_el = key;
		first_el = key;
		current = key->prev;
		temp = temp->next;

		/* If the previous element is smaller, continue to the next iteration */
		if (key->prev->n <= key->n)
		{
			continue;
		}
		else
		{
			 /* Disconnect key from the list */
			if (temp == NULL)
			{
				last_el->prev->next = NULL;
			}
			else
			{
				last_el->next->prev = last_el->prev;
				last_el->prev->next = last_el->next;
			}

			/* Find the correct position for key in the sorted part of the list */
			while (current != NULL && current->n > key->n)
			{
				print_list(*list);
				current = current->prev;
				first_el = first_el->prev;
			}

			 /* Insert key at the correct position in the sorted part of the list */
			if (current == NULL)
			{
				first_el->prev = key;
				key->next = first_el;
				key->prev = NULL;
				*list = key;
				print_list(*list);
			}
			else
			{
				key->next = current->next;
				key->prev = current;
				if (current->next != NULL)
					current->next->prev = key;
				current->next = key;
				print_list(*list);
			}
		}
	}
}
