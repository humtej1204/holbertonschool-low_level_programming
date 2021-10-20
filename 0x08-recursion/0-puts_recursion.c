#include "main.h"
/**
 * _puts_recursion - Function similar to puts
 *
 * @s: parameter
 */
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	s++;
	if (s[0])
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar(10);
		return;
	}
}
