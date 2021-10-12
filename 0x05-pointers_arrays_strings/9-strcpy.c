#include "main.h"
/**
 * *_strcpy - function
 *
 * @dest: pointer of parameter
 * @src: pointer of parameter
 *
 * Return: return dest value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int srcLength = 0;

	while (dest[i] != '\0')
		dest[i++] = '\0';
	i = 0;
	while (src[srcLength] != '\0')
		srcLength++;
	for (i = 0; i < srcLength; i++)
		dest[i] = src[i];
	dest[srcLength] = '\0';
	return (dest);
}
