#include <stdio.h>
#include "main.h"
/**
 * print_array - function
 *
 * @a: pointer of parameter
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n - 1)
			printf("%d, ", a[i++]);
		printf("%d\n", a[i]);
	}
	else
		printf("\n");
}
