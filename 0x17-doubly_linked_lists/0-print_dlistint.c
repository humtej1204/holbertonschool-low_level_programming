#include "lists.h"

/**
 * print_dlistint - count number of nodes
 * @h: head of double linked list
 * Return: number of nodes, or NULL if failed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
