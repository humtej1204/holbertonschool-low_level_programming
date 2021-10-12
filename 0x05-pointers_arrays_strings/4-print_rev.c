#include "main.h"
/**
 * print_rev - function
 *
 * @s: pointer of parameter
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	while (length > 0)
		_putchar(s[--length]);
	_putchar(10);
}
