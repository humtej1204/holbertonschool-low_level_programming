#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 *
 * @head: Parameter that point to the head of the linked list
 * @index: Parameter with the index of the node, starting at 0
 *
 * Return: the position of the element which ask for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
	{
		return (0);
	}
	for (x = 0; x < index; x++)
	{
		head = head->next;
	}

	if (head == NULL)
	{
		return (NULL);
	}

	return (head);
}
