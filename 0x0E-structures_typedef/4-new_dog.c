#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -creates a new dog
 * struct - iteriation
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenN, lenO;

	struct dog *n_dog = 0

	lenN = 0;
	while (name[lenN] != '\0')
		lenN++;
	lenO = 0;
	while (owner[lenO] != '\0')
		lenO++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == 0)
	{
		free(n_dog);
		return (0);
	}
	n_dog = malloc(lenN + 1);
	if (n_dog == 0)
	{
		free(n_dog->name);
		free(n_dog);
		return (0);
	}
	n_dog->owner = malloc(lenO + 1);
	if (n_dog->owner == 0)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (0);
	}
	for (i - 0; i <= lenN; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= lenO; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
