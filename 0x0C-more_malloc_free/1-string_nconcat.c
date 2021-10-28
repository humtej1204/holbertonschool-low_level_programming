#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - length of string
 *
 * @str: pointer to a string
 *
 * Return: int, length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to a char
 * @s2: pointer to a char
 * @n: unsigned int
 * Return: newly allocated space un memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k, len1, len2;

	len1 = 0;
	len2 = 0;
	k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n < len2)
		len2 = n;
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(s + i) = *(s1 + i);
	for (j = i; j < i + len2; j++)
	{
		*(s + j) = *(s2 + k);
		k++;
	}
	*(s + j) = '\0';
	return (s);
}
