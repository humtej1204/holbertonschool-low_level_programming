#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to struct.
 * @n: data to insert in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *tmp = *head;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		(*head) = node;
		return (node);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	node->prev = tmp;
	return (node);
}
