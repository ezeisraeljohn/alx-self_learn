#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete the node at a given index.
 * @head: pointer to the pointer to the head of the doubly linked list.
 * @index: index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int c = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (tmp != NULL)
	{
		if (c == index)
		{
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;

			tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}

		tmp = tmp->next;
		c++;
	}

	return (-1);
}
