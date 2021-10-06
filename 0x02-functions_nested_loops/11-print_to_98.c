#include <stdio.h>
/**
 * print_to_98 - function
 *
 * @n: parameter
 *
 * Return: natural numbers
 */
void print_to_98(int n)
{
	int upper = 98;

	if (n > upper)
	{
		while (n >= upper)
		{
			if (n != upper)
			{
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	else
	{
		while (n <= upper)
		{
			if (n != upper)
			{
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	putchar(10);
}
