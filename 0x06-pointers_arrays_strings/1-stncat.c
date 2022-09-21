#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string to append
 * @src: the string to be appended
 * n:the bytes size to be used
 * Return: dest
 */

char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
