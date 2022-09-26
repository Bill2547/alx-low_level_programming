#include "main.h"

/**
 * _strpbrk - finds the first occurance of the substring needle in the string
 * haystack
 * @needle: substring to find
 * @haystack: string to search within
 *
 * Return: pointer to the beigining of substring else null
 */

char *_strpbrk(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (0);
}
