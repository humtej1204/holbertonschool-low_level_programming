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

	if (ht == NULL || value == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];
	if (key != NULL)
	{
		while (head)
		{
			if (strcmp(head->key, key) == 0)
			{
				free(head->value);
				head->value = strdup(value);
				return (1);
			}
			head = head->next;
		}
	}
	head = ht->array[index];
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
		return (0);
	new_n->key = strdup(key);
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
