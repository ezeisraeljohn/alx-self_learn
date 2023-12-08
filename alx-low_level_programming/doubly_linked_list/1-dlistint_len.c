#include "lists.h"

/**
 * dlistint_len - A function that returns the number of node in a list
 * @head: The list in question
 *
 * Return: The number of nodes in a list
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
