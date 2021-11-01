#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Return: return struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *n;

	n = malloc(sizeof(struct dog));
	if (n == NULL)
		return (NULL);

	n->name = malloc(_strlen(name) + 1);
	if (n->name == NULL)
	{
		free(n);
		return (NULL);
	}
	n->age = age;
	n->owner = malloc(_strlen(owner) + 1);
	if (n->owner == NULL)
	{
		free(n);
		free(n->name);
		return (NULL);
	}
	_strcpy(n->name, name);
	_strcpy(n->owner, owner);
	return (n);
}
