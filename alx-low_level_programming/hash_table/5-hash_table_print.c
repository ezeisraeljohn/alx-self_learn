#include "hash_tables.h"

/**
 * hash_table_print - Prints element of a hash table
 * @ht: The hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		if (tmp == NULL)
			continue;

		while (tmp != NULL)
		{
			printf("'%s': '%s',", tmp->key, tmp->value);
			if (tmp->next != NULL)
				printf(", ");

			tmp = tmp->next;
		}
	}
	printf ("}");
}

