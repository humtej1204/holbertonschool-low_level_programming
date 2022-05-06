#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Return the first index where value is located
 * if value is not present in array or if array is NULL return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos,
	       h = size - 1,
	       l = 0;

	if (!array)
		return (-1);

	while (array[h] != array[l] /*&& value >= array[l] && value <= array[h]*/)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		if (array[pos] < value)
			l = pos + 1;
		else if (value < array[pos])
			h = pos - 1;
		else
			return (pos);
	}

	if (value == array[l])
		return (l);
	else
		return (-1);
}
