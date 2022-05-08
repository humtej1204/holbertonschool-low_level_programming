#include "search_algos.h"
/**
 * linear_skip - function that searches for a value in a sorted
 * skip list of integers.
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: return a pointer on the first node where value is located
 * If value is not present in list or if head is NULL return NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *h = list;

	if (list == NULL)
		return (NULL);

	/* Only one Element */
	if (!h->next && h->n != value)
		return (NULL);

	/* Skip search */
	while (h->n < value && h->next)
	{
		list = h;
		if (h->express)
			h = h->express;
		else
		{
			while (h->next)
				h = h->next;
			break;
		}
		printf("Value checked at index [%ld] = [%d]\n", h->index, h->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			list->index, h->index);

	/* Linear search */
	while (list->n <= value && list->index <= h->index)
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
