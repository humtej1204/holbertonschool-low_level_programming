#include "main.h"
/**
 * print_number - function
 *
 * @n: parameter
 */
void print_number(int n)
{
	int d, base10 = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	d = n;
	while (d > 9)
	{
		d = d / 10;
		base10 = base10 * 10;
	}
	while (base10 > 1)
	{
		_putchar((n / base10) + '0');
		n = n % base10;
		base10 = base10 / 10;
	}
	_putchar((n % 10) + '0');
}
