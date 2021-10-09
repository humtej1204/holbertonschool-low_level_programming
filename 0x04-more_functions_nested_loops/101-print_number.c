#include "main.h"
/**
 * print_number - prints an integer.
 *
 * @n: integer n to print using _putchar
 *
 * Return: none - void function
 */
void print_number(int n)
{
	int r;

	if (n < 0)
	{
		n *= -1;
		_putchar(45);
	}
	if (n == 0)
		return;
	r = n % 10;

	print_number(n / 10);
	_putchar(r + '0');
}
