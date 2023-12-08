#include "lists.h"

/**
 * add_dnodeint - This adds a node to the beginning of a list
 * @head: pointer to the head of the list
 * @data: The data to be added to the list
 *
 * Return: The head to the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int data)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = data;
	temp->next = *head;
	temp->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = temp;
	}

	*head = temp;

	return (*head);
}
