#include "main.h"
#include <stdlib.h>

/**
 * array_range -created an array of integers ordered ascending
 * @min: the first value of the array
 * @max: the last value
 * Return: if max<min return o else pinter
 */

int array_range(int min, int max)
{
	int *array, i, s;

	if (min > max)
		return (0);

	s = max - min + 1;

	array = malloc(sizeof(int) * s);

	if (array == 0)
		return (0);

	for (i = 0; i < s; i++)
		array[i] = min++;

	return (array);
}

