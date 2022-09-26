#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment of s
 * which consist of only one bytes from accept
 * @s: source string
 * @accept: searching string
 *
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int  i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	if (*(accept + i == '\0')
		break;
	}
	return (i);
}
