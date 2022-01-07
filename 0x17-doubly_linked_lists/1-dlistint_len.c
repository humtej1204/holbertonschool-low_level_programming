#include "lists.h"

/**
 * dlistint_len - count number of nodes
 * @h: head of double linked list
 * Return: number of nodes, or NULL if failed
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
