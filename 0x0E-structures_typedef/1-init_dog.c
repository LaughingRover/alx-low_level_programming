#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: Name to set in struct dog
 * @age: Age to set in struct dog
 * @owner: Owner to set in struct dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

