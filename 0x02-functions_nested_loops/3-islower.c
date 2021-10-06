#include "main.h"
/**
 * _islower - function
 *
 * @c: The character to evaluate
 *
 * Return: Get 1 if c is lowercase,
 * get 0 otherwise
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
