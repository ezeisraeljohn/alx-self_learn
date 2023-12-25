#include "hash_tables.h"

/**
 * key_index - Function that returns the index of a key
 * @key: The key of the pair
 * @size: The size of the array
 * 
 * Return: The index
*/

unsigned long int key_index(const unsigned char *key, unsigned long size)
{
    unsigned long int hash, index;

    hash = hash_djb2(key);
    index = hash % size;

    return (index);
}