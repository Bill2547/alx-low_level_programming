#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination of the string
 * @src: the string to be appended
 * n:the bytes size to be used
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	
	}
	
	return (dest);
}
