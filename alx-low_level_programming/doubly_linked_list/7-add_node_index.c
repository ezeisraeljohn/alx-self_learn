#include "lists.h"

/**
 * add_node_index - This adds a node to at a particular index
 * @data: The data to be added
 * @index: The index to add the new node
 * @head: The start to the list
 *
 * Return: The address of the new node
 */
dlistint_t *add_node_index(dlistint_t **head, unsigned int index, int data)
{
	dlistint_t *new_node, *tp1, *tp2;
	unsigned int i = 0, count;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL); /* Fail to create node */

	if (*head == NULL)
		return (add_dnodeint(head, data));

	if (index == 0)
		return (add_dnodeint(head, data));

	tp1 = *head;

	count = count_node(head);

	if (index > count)
		return (NULL);

	while (i < (index - 1))
	{
		tp1 = tp1->next;
		i++;
	}

	tp2 = tp1->next;
	tp1->next = new_node;
	tp2->prev = new_node;
	new_node->prev = tp1;
	new_node->next = tp2;
	new_node->n = data;

	return (new_node);
}

/**
 * count_node - Function that counts the node in a list
 * @head: The start to the node
 *
 * Return: The total number of node in the list
 */

unsigned int count_node(dlistint_t **head)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = *head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
