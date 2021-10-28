#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked - Function that allocates memory
 *
 * @b: parameter
 *
 * Return: Return the pointer
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(sizeof(char) * b);

	if (a == 0)
	{
		return (98);
	}

	return (a);
}
