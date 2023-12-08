#include "lists.h"

/**
 * sum_dlistint - added a function that returns the sum of a linked list
 * @head: Pointer to the start of the list
 *
 * Return: The sum of the list if not empty else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cur = head; /*@cur means current*/

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}

	return (sum);

}
