#include <stdio.h>
#include "dog.h"
/**
 * *new_dog - function that creates a new dog
 *
 * @name: Parameter with the name of the dog
 * @age: Parameter with the age of the dog
 * @owner: Parameter with the owner's name of the dog
 *
 * Return: End program
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
