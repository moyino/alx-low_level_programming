#include "dog.h"

/**
 * init_dog - intializes a variable of type struct dog.
 * @d: struct dog.
 * @name: name if the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * REturn: no return.
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