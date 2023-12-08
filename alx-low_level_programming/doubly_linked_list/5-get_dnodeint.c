#include "lists.h"

/**
 * get_dnodeint_at_index - This function gets the node at a particular index
 * @head: pointer to the start of the list
 * @index: the index at which the node is to be returned
 *
 * Return: Return the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, count = 0;
	dlistint_t *nth_node;

	nth_node = head;

	/* get the length of the list */
	while (nth_node != NULL)
	{
		count++;
		nth_node = nth_node->next;
	}

	nth_node = head;

	/* if the index is greater than the length of the list, return Null*/
	if (index > count)
	{
		return (NULL);
	}

	while (i < index)
	{
		nth_node = nth_node->next;
		i++;
	}

	return (nth_node);
}

