#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: is the size of the array
 *
 * Return: Returns a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	ht->size = size;

	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}

	return (ht);
}
