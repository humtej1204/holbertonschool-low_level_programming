#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int b_search(int *array, size_t size, int value);
/**
 * print_array - Print the elements of an array
 *
 * @array: pointer to the first element of the array to print
 * @size: number of elements in array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i <= size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
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
	if (!array || size == 0)
		return (-1);

	return (b_search(array, size - 1, value));
}
/**
 * b_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: return the index where value is located
 */
int b_search(int *array, size_t size, int value)
{
	int pivot = size / 2, i = 0;

	/*printf("size = %ld\npivot = %d\n", size, array[pivot]);*/
	print_array(array, size);

	if (array[pivot] == value)
		return (pivot);

	if (array[pivot] != value && size == 0)
		return (-1);

	if (value <= array[pivot])
	{
		i = binary_search(array, pivot, value);
		if (i == -1)
			return (-1);
		return (pivot - i);
	}
	else
	{
		pivot = (size % 2 == 0) ? pivot : pivot + 1;
		i = binary_search(&array[size / 2 + 1], pivot, value);
		if (i == -1)
			return (-1);
		return (pivot + i);
	}
}
