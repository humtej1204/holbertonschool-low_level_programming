#include "main.h"
/**
 * _puts - function
 *
 * @str: pointer of parameter
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
