#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning
 * @head: dlistint_t
 * @n: value to be added into new node
 * Return: new node address - or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = tmp;
	if (tmp != NULL)
		tmp->prev = new;
	*head = new;
	return (new);
}
