#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: Parameter that point to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	if (*head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = *head;
		temp2 = temp->next;
		free(*head);
		*head = temp2;
	}
}
