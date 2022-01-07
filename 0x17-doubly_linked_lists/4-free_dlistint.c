#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
        if (head != NULL)
        {
                free_dlistint(head->next);
                free(head);
        }
}
