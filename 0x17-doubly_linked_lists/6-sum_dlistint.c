#include "lists.h"

/**
 * sum_dlistint - sum all data (n) in a linked list dlistint_t.
 * @head: Double pointer to struct.
 *
 * Return: 0 if empty or sum of n value
 */
int sum_dlistint(dlistint_t *head)
{
	if (head)
		return (head->n + sum_dlistint(head->next));
	return (0);
}
