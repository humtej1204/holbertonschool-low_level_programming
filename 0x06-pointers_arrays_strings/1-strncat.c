#include "main.h"
/**
 * _strncat - concatenates n bytes from a string to another
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (y < n && src[y] != 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = 0;
	return (dest);
}
