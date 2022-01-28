#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_n = NULL;
	unsigned long int index = 0;

	/*Checking if key exist*/
	if (key == NULL)
	{
		return (0);
	}
	/*Giving space to the new node and seting values*/
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
	{
		return (0);
	}
	new_n->key = (char *)key;
	new_n->value = (char *)value;
	new_n->next = ht->array[index];
	ht->array[index] = new_n;

	return (1);
}
