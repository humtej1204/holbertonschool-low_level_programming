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
	hash_node_t *new_n = NULL, *head = NULL;
	unsigned long int index = 0;

	if (ht == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];
	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	if (key != NULL)
	{
		while (head)
		{
			if (head->key == key)
			{
				head->value = (char *)value;
				return (1);
			}
			if (head->next)
				head = head->next;
			else
				break;
		}
	}
	head = ht->array[index];
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
		return (0);
	new_n->key = (char *)key;
	new_n->value = strdup(value);
	new_n->next = NULL;
	if (head != NULL)
	{
		new_n->next = head;
		ht->array[index] = new_n;
		return (1);
	}
	ht->array[index] = new_n;
	return (1);
}
