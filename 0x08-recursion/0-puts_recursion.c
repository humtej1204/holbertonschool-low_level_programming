#include "main.h"
/**
 * _puts_recursion - Function similar to puts
 *
 * @s: parameter
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		putchar (10);
		return;
	}
	putchar(s[0]);
	s++;
	_puts_recursion(s);
}
