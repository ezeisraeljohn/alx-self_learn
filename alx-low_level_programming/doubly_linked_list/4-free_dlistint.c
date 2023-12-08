#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp; /* The temporary pointer acting as the head */

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
