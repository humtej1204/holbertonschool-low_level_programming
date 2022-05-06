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
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Return the first index where value is located
 * if value is not present in array or if array is NULL return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, mid;

	if (!array)
		return (-1);

	/* If values is at start */
	if (array[0] == value)
		return (0);
	/* Exponential search */
	for (i = 1; i < size && array[i] <= value; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	size = (i < size) ? i : size - 1;
	i = i / 2;
	printf("Value found between indexes [%ld] and [%ld]\n", i, size);
	/* Binary Search */
	if (array[i] == value)
		return (i);
	if (array[size] == value)
		return (size);
	while (i <= size)
	{
		mid = (size + i) / 2;
		print_arr(&array[i], (size - i));

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			size = mid - 1;
		else
			i = mid + 1;
	}

	return (-1);
}
