#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Double pointer to struct.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
		free_dlistint(head->next);
	free(head);
}
