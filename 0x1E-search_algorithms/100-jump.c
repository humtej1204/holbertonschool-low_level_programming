#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: return the first index where value is located or
 * if value is not present in array or if array is NULL return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, step = sqrt(size - 1);

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += step;
	}
	/* If values is in the index 0 */
	if (i == 0)
	{
		printf("Value found between indexes [0] and [%ld]\n", i + step);
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (i);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", (i - step), i);

	step = i - step;
	while (step <= i && step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
		step++;
	}

	return (-1);
}
