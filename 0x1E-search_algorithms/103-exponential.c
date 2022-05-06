#include "search_algos.h"
/**
 * print_array - Print the elements of an array
 *
 * @start: pointer to the first element of the array to print
 * @end: pointer to the last element of the array to print
 */
void print_array(int *start, int *end)
{
        int i = 0;

        printf("Searching in array: ");
        while (start[i] != *end)
        {
                printf("%d, ", start[i]);
                i++;
        }
	printf("%d", start[i]);
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

	for (i = 1; array[i] < value && i < size; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	size = (i < size) ? i : size - 1;
	i = i / 2;
	printf("Value found between indexes [%ld] and [%ld]\n", i, size);

	while (i <= size)
	{
		mid = (size + i) / 2;
		print_array(&array[i], &array[size]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			size = mid - 1;
		else
			i = mid + 1;
	}

	return (-1);
}
