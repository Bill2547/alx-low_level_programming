#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a variable
 * @d: the dog initialised
 * @name: dogs name
 * @age: the age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
