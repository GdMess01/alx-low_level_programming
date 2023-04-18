#include "dog.h"

/**
 * init_dog - Short description
 * @d: the dog to init
 * @name: First member
 * @owner: Second member
 * @age: Third member
 *
 * Return void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
