#include "main.h"
#include <stdlib.h>
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
	unsigned int x, n1 = 0, n2 = 0, i, j;

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

	x = (n2 <= n)? n2: n;
	a = malloc(sizeof(char) * (n1 + x));

	if (a == NULL)
		return(0);
	for (i = 0; i < n1; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < x; j++)
	{
		a[i + j] = s2[j];
	}

	return (a);
}
