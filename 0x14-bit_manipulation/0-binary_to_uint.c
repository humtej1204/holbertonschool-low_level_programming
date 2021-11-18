#include "main.h"
/**
 * _pow - function that return the
 * value of x raised to the power of y
 *
 * @x: parameter to base
 * @y: parameter of pow
 *
 * Return: End program
 */
int _pow(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		x = x * _pow(x, y);
		return (x);
	}

	return (0);
}
/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int
 *
 * @b: Pointer with the string whit the number to convert
 *
 * Return: The number converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	unsigned int base, bs, n2, x, sum = 0;
	int i;

	if (b == NULL || *b == '\0')
	{
		return (0);
	}

	n = atoi(b);
	x = n;

	for (i = 0; b[i] != 0; i++)
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
	}

	/* Buscamos la base del numero recibido */
	for (bs = 0; x > 9; bs++)
	{
		x = x / 10;
	}

	/* Realizamos la operacion para hallar suma */
	for (base = 0; base <= bs; base++)
	{
		n2 = n % 10;
		sum = sum + (n2 * _pow(2, base));
		n = n / 10;
	}

	return (sum);
}
