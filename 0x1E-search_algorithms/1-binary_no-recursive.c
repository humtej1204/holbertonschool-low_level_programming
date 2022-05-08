#include "search_algos.h"
/**
 * print_arr - Print the elements of an array
 *
 * @array: pointer to the first element of the array to print
 * @size: size of elements in the array
 */
void print_arr(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array: ");
	while (i < size)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d", array[i]);
	printf("\n");
}
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: return the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1;

	if (array[l] == value)
		return (l);
	if (array[r] == value)
		return (r);
	while (l <= r)
	{
		mid = (l + r) / 2;
		print_arr(&array[l], (r - l));

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}

	return (-1);
}
