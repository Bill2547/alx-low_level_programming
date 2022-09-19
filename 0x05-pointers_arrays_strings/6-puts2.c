#include "main.h"

/**
 * puts2- prints every other character os a string starting with
 * the first character
 * @str: the string
 */

void puts(char *str)
{
	int j, i;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

