#include <stdio.h>
#include <stdlib.h>

/**
 * struct list - A linked list
 * @num: The number to be stored
 * @next: pointer to the next node
 */
typedef struct listint
{
	int num;
    	struct listint *next;
} listint;

/**
 * main - Entry point
 *
 * Retrun: Always 0
*/

int main(void)
{
	int i;
	listint *head = malloc(sizeof(listint));
	head->num = 32;
	head->next = NULL;

	listint *current = malloc(sizeof(listint));
	current->num = 35;
	head->next = current;
	current->next = NULL;

	 current = malloc(sizeof(listint));
	 current->num = 69;
	head->next->next = current;
	current->next = NULL;

	while(head != NULL)
	{
		printf("%d\n", head->num);
		head = head->next;

	}
	return (0);
}
