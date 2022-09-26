#include "main.h"

/**
 * _strchr - returns a pointer to the first occurance of character c
 * in the string or nullif not found
 * @s: the string to search
 * @c: the character to search for
 *
 * Return: Null if not found else c
 */

char *_strchr(char *s, char c)
{
	int a

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
