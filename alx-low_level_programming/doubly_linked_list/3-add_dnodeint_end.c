#include "lists.h"

/**
 * add_dnodeint_end - Function to add a node to the end of a list
 * @head: pointer to the head of the list
 * @data: The data to be added in the list
 *
 * Return: Return the pointer to the head of the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int data)
{
	dlistint_t *temp;
	dlistint_t *tp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		temp->prev = NULL;
		temp->n = data;
		temp->next = NULL;
		*head = temp;

		return (*head);
	}

	tp = *head;

	/* Traverse the list to get the last element*/
	while (tp->next != NULL)
	{
		tp = tp->next;
	}

	tp->next = temp;
	temp->n = data;
	temp->next = NULL;
	temp->prev = tp;

	return (*head);
}
