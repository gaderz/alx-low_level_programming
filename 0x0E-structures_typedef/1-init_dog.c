#include "dog.h"

/**
 * init_dog - initializes a struct dog
 * @d: pointer to struct dog to initialize
 * @name: string for name field
 * @age: float for age field
 * @owner: string for owner field
 *
 * Return: None
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
