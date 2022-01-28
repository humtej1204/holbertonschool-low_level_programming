#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head = NULL;
	unsigned long int i = 0;

	/*Checking if ht exist*/
	if (ht == NULL)
	{
		return;
	}
	while (i < ht->size)
	{
		head = ht->array[i];
		if (head != NULL)
		{
			recursive_delete(head);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
/**
 * recursive_delete - function that use the recursive method
 * to delete the liked list recursively
 *
 * @node: is a node of hash table
 */
void recursive_delete(hash_node_t *node)
{
	if (node->next)
	{
		recursive_delete(node->next);
	}
	free(node->key);
	free(node->value);
	free(node);
}
