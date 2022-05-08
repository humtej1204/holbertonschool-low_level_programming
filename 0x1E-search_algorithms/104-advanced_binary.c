#include <stdio.h>
#include <stdlib.h>
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
 * advanced_binary - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: return the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	int l = 0, r = size - 1;

	if (!array)
		return (-1);

	return (b_search(array, l, r, size, value));
}
/**
 * b_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @l: index of the first element of the array to search in
 * @r: index of the last element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: return the index where value is located
 */
int b_search(int *array, int l, int r, size_t size, int value)
{
	int p = 0;

	if (l > r)
		return (-1);

	print_arr(&array[l], (r - l));
	p = (l + r) / 2;

	if (value == array[p] && array[p - 1] != value)
		return (p);

	if (value <= array[p])
		r = p;
	else
		l = p + 1;

	return (b_search(array, l, r, size, value));
}
