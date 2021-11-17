#include "lists.h"
/**
 * free_listint -  function that frees a listint_t list.
 *
 * @head: Parameter that point to the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	free(head);
	head = temp;
}
