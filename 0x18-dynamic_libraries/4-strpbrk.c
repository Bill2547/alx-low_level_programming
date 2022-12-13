#include "main.h"

/**
 * _strpbrk - searches the first occurrence in the string of
 * any of bytes in the string accept
 * Return: a pointer to the byte in s
 * @s: string to search
 * @accept: string containig the bytes to look for
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
