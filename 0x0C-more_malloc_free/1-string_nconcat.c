#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * *string_nconcat - Function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: max bytes of s2
 *
 * Return: Returned pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int n1 = 0, i, j;

	if (s1 != NULL)
		while (s1[n1] != 0)
			n1++;
	else
		s1 = "";

	a = malloc(sizeof(char) * (n1 + n));

	if (a == NULL)
		return (0);
	for (i = 0; i < n1; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		a[i + j] = s2[j];
	}

	return (a);
}
