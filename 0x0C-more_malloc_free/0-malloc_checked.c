#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memmory using malloc
 * @b: the number of bytes to be allocated
 *
 * Return:pointeear
 * :wq
 *
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == 0)
		exit(98);

	return (memory);
}
