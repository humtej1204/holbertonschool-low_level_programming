#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head = NULL;
	unsigned long int i = 0;
	int x = 0;

	/*Checking if ht exist*/
	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (i < ht->size)
	{
		head = ht->array[i];
		if (head != NULL)
		{
			while (head)
			{
				if (x == 1)
					printf(", ");
				printf("'%s': '%s'", head->key, head->value);
				head = head->next;
				x = 1;
			}
		}
		i++;
	}
	printf("}\n");
}
