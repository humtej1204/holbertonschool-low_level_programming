#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer to struct dog to initialize
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return (NULL);
	}
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n", d->name);
	if (d->age != NULL)
		printf("Age: %s\n", d->age);
	else
		printf("Age: (nil)\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n", d->owner);
}
