#include "main.h"
/**
 * _strlen_recursion - function to count the
 * number of caracters in the string
 *
 * @s: parameter
 */
int _strlen_recursion(char *s)
{
	int n = 1;
	if (*s != '\0')
	{
		s++;
		n = n + _strlen_recursion(s);
		return (n);
	}
}
