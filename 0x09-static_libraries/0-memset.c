#include "main.h"

/**
 *_memset - fillsthe fist n bytes of the memory area pointed by s
 * with a constant byte b
 * @s: pointer to the memory area
 * @n: no of bytes
 * @b: the contant byteto be filled
 * Return: a pointerto memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
