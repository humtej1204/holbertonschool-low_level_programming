#include <stdio.h>
#include <stdlib.h>
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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
