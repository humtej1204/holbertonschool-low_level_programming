#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - function  that returns a pointer
 * to the content of 2 strings
 * @s1: Parameter with a string
 * @s2: Parameter with a string
 * Return: Return the new array
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	void *x = NULL;
	int n1 = 0, n2 = 0, i = 0, i1 = 0, i2 = 0;

	if (s1 != NULL)
		while (s1[n1] != 0)
			n1++;
	else
		s1 = "";
	if (s2 != NULL)
		while (s2[n2] != 0)
			n2++;
	else
		s2 = "";

	a = malloc(sizeof(char) * (n1 + n2 + 1));

	if (a == NULL)
	{
		return (x);
	}
	else
	{
		while (i1 < n1)
		{
			a[i] = s1[i1];
			i1++;
			i++;
		}
		while (i2 <= n2)
		{
			a[i] = s2[i2];
			i2++;
			i++;
		}
		return (a);
	}
	return (0);
}
