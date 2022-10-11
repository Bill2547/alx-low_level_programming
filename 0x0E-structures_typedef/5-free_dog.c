#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -free dogs
 * @d: the freed dog
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
