#include "main.h"
/**
 * _strlen - function
 *
 * @s: pointer of parameter
 *
 * Return: return n's value
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
