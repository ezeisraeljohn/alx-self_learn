#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value of a hash table
 * @ht: The hash table
 * @key: The key, string
 * 
 * Return The value retrieved
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || key == (const char *)"\0" || ht->size == 0)
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}


