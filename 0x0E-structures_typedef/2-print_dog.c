#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print a struct dog
 * @d: the dog initilised
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		return;
	}
	if (d->name == 0)
		printf("name: (nil)\n");
	else
		printf("name: (nil)\n");

	if (d->age < 0)
		printf("age: (nil\n");
	else
		printf("age: %f\n", d->age);
	if (d->owner == 0)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}
