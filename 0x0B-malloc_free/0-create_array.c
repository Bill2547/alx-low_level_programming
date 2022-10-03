#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: the size of the array
 * @c: the specific char to initialize the array
 *
 * Return: if ssize is 0 then return null else a pointer to the array
 */


char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if  (size == 0)
		return (0);

	array = malloc(sizeof(char) * size);

	if (array == 0)
		return (0);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
