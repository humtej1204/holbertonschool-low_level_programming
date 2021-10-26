#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function that create an array
 *
 * @size: parameter with the size of the array
 * @c: element of the array
 *
 * Return: Return the array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int i = 0;

	a = malloc(sizeof(char) * size);

	while (i < size)
	{
		a[i] = c;
		i++;
	}

	return (a);
}
