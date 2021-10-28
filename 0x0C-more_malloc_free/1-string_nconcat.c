#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - string_nconcat.
 * @s1: char to check.
 * @s2: char to check.
 * @n: int to check.
 * Return: a.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int l = 0;
	unsigned int h = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (j > n)
		j = n;
	k = i + j + 1;
	a = malloc(k);
	if (!a)
		return (NULL);
	while (s1[l] != '\0')
	{
		a[l] = s1[l];
		l++;
	}
	while (h < j)
	{
		a[l + h] = s2[h];
		h++;
	}
	a[l + j] = '\0';
	return (a);
}
