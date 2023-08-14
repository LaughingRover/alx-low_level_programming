#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates new dog
 * @name: char *
 * @age: float
 * @owner: char *
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(new_dog));

	if (new_dog == NULL)
		return (NULL);

	/*Allocate memory and store a copy of name and owner*/
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		/*Free memory if strdup fails*/
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}

