#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: the tring to be copied
 * Return: 0 if insufficient memmory else pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == 0)
		return (0);
	for (i = 0; str[i]; i++)
		len++;
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == 0)
		return (0);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}

