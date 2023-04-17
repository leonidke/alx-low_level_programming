#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a struct dog with given values.
 * @d: Pointer to a struct dog.
 * @name: Pointer to a string representing the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to a string representing the owner of the dog.
 *
 * Return: None.
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
