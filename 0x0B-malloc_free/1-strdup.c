#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function  that returns a pointer
 * to a newly allocated space in memory
 *
 * @str: Parameter with the string
 *
 * Return: Return the new array
 */
char *_strdup(char *str)
{
	char *a;
	int n = 0, i = 0;

	while (str[n] != 0)
	{
		n++;
	}

	a = malloc(sizeof(char) * (n + 1));

	if (n == 0)
	{
		return (0);
	}
	else if (a == NULL)
	{
		return (0);
	}
	else
	{
		while (i <= n)
		{
			a[i] = str[i];
			i++;
		}
		return (a);
	}

	return (0);
}
