#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	struct node *prev;
	int data;
	struct node *next;
}dlistint;

/**
 * Add_node - function to add node in an empty list
 * @head: The head of the program
 * @data: The data the list should hold
 * 
 * Return: Returns the head pointer
*/
dlistint *add_node(dlistint *head, int data)
{
	dlistint *temp = malloc(sizeof(dlistint));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	head = temp;

	return head;
}

/**
 * add_node_beginning - function that adds a node to the beginning of a list
 * @head: The head of the programm
 * @data: The data to be added
 * 
 * Return: This program returns the address of the pointer
*/
dlistint *add_node_beginning(dlistint *head, int data)
{
	dlistint *temp = malloc(sizeof(dlistint));
	temp->prev = NULL;
	temp->data = data;
	temp->next = head;
	head->prev = temp;
	head = temp;

	return head;
}
/**
 * add_node_end - This function adds a node to the end of a list
 * @head: The node added
 * @data: The data to be added
 * 
 * Return: The address to the memory
*/
dlistint *add_node_end()
{

}
int main()
{
	struct node *head = NULL;
	head = add_node(head, 56);
	head = add_node_beginning(head, 12);
	head = add_node_beginning(head, 45);
	dlistint *ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}

}



