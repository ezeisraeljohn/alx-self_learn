#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to a table
 * @ht: The hash table the element is to be inserted
 * @key: Key is the key and cannot be an empty string
 * @value: The value associated with the key
 *
 * Return: returns 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (key == (const char *)"\0")
		return (0); /*Return zero if key is empty string*/


	node = create_node(key, value);
	index = key_index((const unsigned char *)node->key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node; /*Add the element to the array*/
	}

	if (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, node->key) == 0)
			ht->array[index] = node; /*update the node with the latest change*/
			
		ht->array[index]->next = node; /*create a linked list if not NULL*/
	}
	/*printf("{%s : %s}\n", ht->array[index]->key, ht->array[index]->value);*/

	return (1);

}

/**
 * create_node - Function that creates element of the hashtable
 * @key: The key of the pair
 * @value: The value of the pair
 *
 * Return: pointer to the node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL); /*Failed to create node*/


	new_node->key = (char *)key;
	new_node->value = strdup(value);

	return (new_node);

}
