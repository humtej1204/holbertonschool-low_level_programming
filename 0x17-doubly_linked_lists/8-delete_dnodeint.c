#include "lists.h"

/**
 * dlistint_len - Computes the elements of a dlistint_t list.
 * @h: Pointer to struct.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h)
		return (1 + dlistint_len(h->next));
	return (0);
}
/**
 * delete_dnodeint_at_index - Deletes node of a dlistint_t linked list.
 * @head: Double pointer to struct.
 * @index: Index position to remove node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(tmp) < index + 1)
		return (-1);
	if (index == 0)
	{
		if (tmp->next)
			tmp->next->prev = NULL;
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (-1);

	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
