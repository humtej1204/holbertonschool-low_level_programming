#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: dlistint_t list
 * @n: value
 * Return: address of the new node - NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *new, *tmp;

        tmp = *head;
        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
                return (NULL);
        while (tmp != NULL && tmp->next != NULL)
                tmp = tmp->next;
        new->n = n;
        new->prev = tmp;
        new->next = NULL;
        if (tmp != NULL)
                tmp->next = new;
        else
                *head = new;
        return (new);
}
