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
		printf("Name: (nil)\n");

	else
		printf("Name: (nil)\n");

	if (d->age < 0)
		printf("Age: (nil\n");

	else
		printf("Age: %f\n", d->age);

	if (d->owner == 0)
		printf("Owner: (nil)\n");

	else
		printf("Owner: %s\n", d->owner);
}
