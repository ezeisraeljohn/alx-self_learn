#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: The size of the array
 *
 * Return: Returns pointer to the newly created table or NULL
 * if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table; unsigned long int i;
	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		free(new_table);
		return NULL;
	}
	new_table->size = size;
	new_table->array = malloc (sizeof(hash_node_t *) * new_table->size);

	if (new_table == NULL)
	{
		free(new_table->array);
		return NULL;
	}

	for (i = 0; i < new_table->size; i++)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);

}
