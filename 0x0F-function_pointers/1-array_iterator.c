#include "function_pointers.h"

/**
 * array_iterator - executed function given as a param on elements of an array
 * @array: array
 * @size: size of array
 * @action: function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == 0 || action == 0)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
