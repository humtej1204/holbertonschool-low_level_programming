#include "search_algos.h"
#include <math.h>
/**
 * jump_list - function that searches for a value in a sorted list
 * of integers using the Jump search algorithm.
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: return a pointer to the first node where value is located
 * If value is not present in head or if head is NULL return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *head;
	size_t step = sqrt(size), i = 0;

	if (!list)
		return (NULL);

	head = list;
	/* Only one Element */
	if (size == 0 && head->n != value)
		return (NULL);


	/* Jump Search */
	while (head->n < value && i < size)
	{
		i = i + step;
		list = head;
		while (head->index < i)
		{
			if (head->next != NULL)
				head = head->next;
			else
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", head->index, head->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", list->index, head->index);

	/* Lineal Search */
	while (list->n <= value && list->index <= head->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		if (list->next == NULL)
			return (NULL);
		list = list->next;
	}

	return (NULL);
}
