#include "main.h"
#include <stddef.h>
/**
 * _strchr - returns a pointer to the first occurance of character c
 * in the string or nullif not found
 * @s: the string to search
 * @c: the character to search for
 * Return: NULL if not found else c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
