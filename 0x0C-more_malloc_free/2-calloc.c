#include "main.h"
#include <stdlib.h>

/**
 * _calloc- allocates memmory for nmeb element
 * @nmemb: the numer of elements int the aarray
 * @size:bytes for each position
 * Return: pointeear
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *all;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	memory = malloc(size * nmemb);

	if (memory == 0)
		return (0);

	all = memory;

	for (i = 0; i < (size * nmemb); i++)
		all[i] = '\0';

	return (memory);
}
