#include "function_pointers.h"

/**
 * int_index -search for integer in array
 * @array: - arrays
 * @size: size of array
 * @cmp: fuction to compare values
 * Return: -1 else 0
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
