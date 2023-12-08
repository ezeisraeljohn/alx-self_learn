#include "lists.h"
/**
 * print_dlistint - This is a function that prints the total elements in a list
 * @head: The list to be considered
 *
 * Return: Return the number of elements in the list
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
